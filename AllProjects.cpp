#include "AllProjects.h"
#include "ui_AllProjects.h"
#include "Project.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QMessageBox>

AllProjects::AllProjects(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AllProjects)
    , model(new QSqlQueryModel(this))
{
    ui->setupUi(this);
    loadProjects();
}

AllProjects::~AllProjects()
{
    delete ui;
}

void AllProjects::loadProjects(const QString &filter)
{
    QString queryStr = "SELECT name, client_id, start_date, end_date, budget, status, description FROM projects";
    if (!filter.isEmpty()) {
        queryStr += " WHERE name LIKE '%" + filter + "%'";
    }

    model->setQuery(queryStr);
    if (model->lastError().isValid()) {
        QMessageBox::critical(this, "SQL Error", model->lastError().text());
    }

    ui->tableClients->setModel(model);
}

void AllProjects::on_lineSearch_textChanged(const QString &text)
{
    loadProjects(text);
}

void AllProjects::on_tableClients_clicked(const QModelIndex &index)
{
    if (!index.isValid()) return;

    int row = index.row();
    QString name = model->index(row, 0).data().toString();
    int clientId = model->index(row, 1).data().toInt();
    QString startDate = model->index(row, 2).data().toString();
    QString endDate = model->index(row, 3).data().toString();
    double budget = model->index(row, 4).data().toDouble();
    QString status = model->index(row, 5).data().toString();
    QString description = model->index(row, 6).data().toString();

    QSqlQuery query;
    QString clientName = "Unknown";
    query.prepare("SELECT name FROM clients WHERE id = :id");
    query.bindValue(":id", clientId);
    if (query.exec() && query.next()) {
        clientName = query.value(0).toString();
    }

    ui->labelStatus->setText("Status: " + status);
    ui->labelBudget->setText("Budget: " + QString::number(budget));
    ui->labelEndDate->setText("End Date: " + endDate);
    ui->labelStartDate->setText("Start Date: " + startDate);
    ui->labelName->setText("Project Name: " + name);
    ui->labelStatus->setText("Status: " + status);
    ui->DescriptionText->setPlainText(description);

}
void AllProjects :: on_BtnBack_clicked(){
    Project *project= new Project();
    project->show();
    this->close();
}
