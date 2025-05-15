#include "AllProjects.h"
#include "ui_AllProjects.h"
#include "Project.h"
#include "global.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QMessageBox>
extern int CURRENT_USER_ID;
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
    QSqlQuery query;
    QString sql = R"(
        SELECT p.name, c.name AS client_name, p.start_date, p.end_date, p.budget, p.status, p.description
        FROM projects p
        JOIN clients c ON p.client_id = c.id
        WHERE c.user_id = :user_id
    )";
    if (!filter.isEmpty()) {
        sql += " AND p.name LIKE :filter";
    }

    query.prepare(sql);
    query.bindValue(":user_id", CURRENT_USER_ID);
    if (!filter.isEmpty()) {
        query.bindValue(":filter", "%" + filter + "%");
    }

    if (!query.exec()) {
        QMessageBox::critical(this, "SQL Error", query.lastError().text());
        return;
    }

    model->setQuery(query);
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
