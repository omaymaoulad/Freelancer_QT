#include "EditProject.h"
#include "ui_EditProject.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "Project.h"

EditProject::EditProject(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EditProject)
{
    ui->setupUi(this);
    ui->StatusBox->addItems({"Planned", "In Progress", "Completed", "Cancelled"});
}
EditProject::~EditProject()
{
    delete ui;
}
void EditProject::on_btnSearch_clicked()
{
    QString name = ui->lineSearch->text().trimmed();

    if (name.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please enter a project name to search.");
        return;
    }

    QSqlQuery query;

    // On récupère le nom du client associé via une jointure
    query.prepare(R"(
        SELECT p.id, c.name, p.name, p.start_date, p.end_date, p.budget, p.status, p.description
        FROM projects p
        JOIN clients c ON p.client_id = c.id
        WHERE p.name = :name
    )");

    query.bindValue(":name", name);

    if (query.exec() && query.next()) {
        currentProjectId = query.value(0).toInt();
        ui->ClientLine->setText(query.value(1).toString());
        ui->ProjectLine->setText(query.value(2).toString());
        ui->StartDateLine->setDate(QDate::fromString(query.value(3).toString(), "yyyy-MM-dd"));
        ui->EndDateLine->setDate(QDate::fromString(query.value(4).toString(), "yyyy-MM-dd"));
        ui->BudgetBox->setValue(query.value(5).toDouble());
        ui->StatusBox->setCurrentText(query.value(6).toString());
        ui->DescriptionText->setPlainText(query.value(7).toString());
    } else {
        QMessageBox::information(this, "Not found", "No project found with that name.");
        currentProjectId = -1;
    }
}

void EditProject::on_BtnUpdate_clicked()
{
    if (currentProjectId == -1) {
        QMessageBox::warning(this, "Warning", "No project selected to update.");
        return;
    }

    QSqlQuery clientQuery;
    clientQuery.prepare("SELECT id FROM clients WHERE name = :name");
    clientQuery.bindValue(":name", ui->ClientLine->text());

    if (!clientQuery.exec() || !clientQuery.next()) {
        QMessageBox::warning(this, "Error", "Client not found in database.");
        return;
    }

    int client_id = clientQuery.value(0).toInt();
    QSqlQuery query;
    query.prepare("UPDATE projects SET client_id = :client_id, name = :name, start_date = :start_date, "
                  "end_date = :end_date, budget = :budget, status = :status, description = :description "
                  "WHERE id = :id");
    query.bindValue(":client_id", client_id);
    query.bindValue(":name", ui->ProjectLine->text());
    query.bindValue(":start_date", ui->StartDateLine->date().toString("yyyy-MM-dd"));
    query.bindValue(":end_date", ui->EndDateLine->date().toString("yyyy-MM-dd"));
    query.bindValue(":budget", ui->BudgetBox->value());
    query.bindValue(":status", ui->StatusBox->currentText());
    query.bindValue(":description", ui->DescriptionText->toPlainText());
    query.bindValue(":id", currentProjectId);
    if (query.exec()) {
        QMessageBox::information(this, "Success", "Project updated successfully.");
    } else {
        QMessageBox::critical(this, "Error", query.lastError().text());
    }
}

void EditProject::on_BtnDelete_clicked()
{
    if (currentProjectId == -1) {
        QMessageBox::warning(this, "Warning", "No project selected to delete.");
        return;
    }

    QSqlQuery query;
    query.prepare("DELETE FROM projects WHERE id = :id");
    query.bindValue(":id", currentProjectId);

    if (query.exec()) {
        QMessageBox::information(this, "Deleted", "Project deleted successfully.");
        clearFields();
    } else {
        QMessageBox::critical(this, "Error", query.lastError().text());
    }
}

void EditProject::on_BtnCancel_clicked()
{
    clearFields();
}

void EditProject::clearFields()
{
    ui->lineSearch->clear();
    ui->ClientLine->clear();
    ui->ProjectLine->clear();
    ui->StartDateLine->setDate(QDate::currentDate());
    ui->EndDateLine->setDate(QDate::currentDate());
    ui->BudgetBox->setValue(0.0);
    ui->StatusBox->setCurrentIndex(0);
    ui->DescriptionText->clear();
    currentProjectId = -1;
}
void EditProject::on_BtnBack_clicked()
{
    Project *project = new Project();
    project->show();
    this->close();
}
