#include "AddInvoice.h"
#include "ui_AddInvoice.h"
#include "Acceuil.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

AddInvoice::AddInvoice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddInvoice)
{
    ui->setupUi(this);
    loadProjects();

    ui->statusBox->addItems({"Paid", "Pending", "Overdue"}); // Ajout statut facture
}

AddInvoice::~AddInvoice()
{
    delete ui;
}

void AddInvoice::loadProjects()
{
    QSqlQuery query("SELECT name FROM projects");
    while (query.next()) {
        QString name = query.value(0).toString();
        ui->comboProject->addItem(name);
    }
}

void AddInvoice::on_btnSave_clicked()
{
    QString selectedProject = ui->comboProject->currentText();
    QSqlQuery findProject;
    findProject.prepare("SELECT id FROM projects WHERE name = :name");
    findProject.bindValue(":name", selectedProject);

    if (findProject.exec() && findProject.next()) {
        int projectId = findProject.value(0).toInt();

        QSqlQuery insert;
        insert.prepare("INSERT INTO invoices (project_id, issue_date, due_date, amount, status, description) "
                       "VALUES (:project_id, :issue_date, :due_date, :amount, :status, :description)");
        insert.bindValue(":project_id", projectId);
        insert.bindValue(":issue_date", ui->dateIssue->date().toString("yyyy-MM-dd"));
        insert.bindValue(":due_date", ui->dateDue->date().toString("yyyy-MM-dd"));
        insert.bindValue(":amount", ui->amountBox->value());
        insert.bindValue(":status", ui->statusBox->currentText());
        insert.bindValue(":description", ui->descriptionText->toPlainText());

        if (insert.exec()) {
            QMessageBox::information(this, "Success", "Invoice saved successfully!");
        } else {
            QMessageBox::critical(this, "Insert Error", insert.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Project not found!");
    }
}

void AddInvoice::on_btnCancel_clicked()
{
    Acceuil *acceuil=new Acceuil();
    acceuil->show();
    this->close();
}
