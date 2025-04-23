#include "AddProject.h"
#include "ui_AddProject.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "Project.h"

AddProject::AddProject(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddProject)
{
    ui->setupUi(this);
    loadClients(); // Chargement des noms de clients
    ui->StatusBox->addItems({"Planned", "In Progress", "Completed", "Cancelled"});
}

AddProject::~AddProject()
{
    delete ui;
}

void AddProject::loadClients()
{
    QSqlQuery query("SELECT id, name FROM clients");
    while (query.next()) {
        int id = query.value(0).toInt();
        QString name = query.value(1).toString();
        ui->ClientBox->addItem(name, id);
    }
}

void AddProject::on_BtnSave_clicked()
{
    int clientId = ui->ClientBox->currentData().toInt();
    QString projectName = ui->NameLine->text();
    QString startDate = ui->StartDateLine->date().toString("yyyy-MM-dd");
    QString endDate = ui->EndDateLine->date().toString("yyyy-MM-dd");
    double budget = ui->BudgetBox->value();
    QString status = ui->StatusBox->currentText();
    QString description = ui->DesctiptionText->toPlainText();

    if (projectName.isEmpty()) {
        QMessageBox::warning(this, "Validation", "Project name is required.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO projects (client_id, name, start_date, end_date, budget, status, description) "
                  "VALUES (:client_id, :name, :start, :end, :budget, :status, :desc)");
    query.bindValue(":client_id", clientId);
    query.bindValue(":name", projectName);
    query.bindValue(":start", startDate);
    query.bindValue(":end", endDate);
    query.bindValue(":budget", budget);
    query.bindValue(":status", status);
    query.bindValue(":desc", description);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Project saved successfully.");
        ui->NameLine->clear();
        ui->DesctiptionText->clear();
        ui->BudgetBox->setValue(0.0);
    } else {
        QMessageBox::critical(this, "Error", "Failed to save project: " + query.lastError().text());
    }
}

void AddProject::on_BtnBack_clicked()
{
    Project *project = new Project();
    project->show();
    this->close();
}
