#include "AllClients.h"
#include "ui_AllClient.h"
#include "Client.h"
#include "global.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>

extern int CURRENT_USER_ID;

AllClients::AllClients(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AllClients)
{
    ui->setupUi(this);
    loadClients();
    connect(ui->tableClients, &QTableView::clicked, this, &AllClients::handleRowClicked);
}

AllClients::~AllClients()
{
    delete ui;
}

void AllClients::loadClients(const QString &filter)
{
    QSqlQuery query;
    QString baseQuery = "SELECT name, email, phone, country, company, client_type FROM clients WHERE user_id = :user_id";

    if (!filter.isEmpty()) {
        baseQuery += " AND name LIKE :filter";
    }

    query.prepare(baseQuery);
    query.bindValue(":user_id", CURRENT_USER_ID);

    if (!filter.isEmpty()) {
        query.bindValue(":filter", "%" + filter + "%");
    }

    if (!query.exec()) {
        qDebug() << "Erreur lors du chargement des clients :" << query.lastError().text();
        return;
    }

    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery(query);
    ui->tableClients->setModel(model);
}

void AllClients::on_lineSearch_textChanged(const QString &text)
{
    loadClients(text);
}

void AllClients::handleRowClicked(const QModelIndex &index)
{
    int row = index.row();
    QString name = ui->tableClients->model()->index(row, 0).data().toString();
    QString email = ui->tableClients->model()->index(row, 1).data().toString();
    QString phone = ui->tableClients->model()->index(row, 2).data().toString();
    QString country = ui->tableClients->model()->index(row, 3).data().toString();
    QString company = ui->tableClients->model()->index(row, 4).data().toString();
    QString client_type = ui->tableClients->model()->index(row, 5).data().toString();

    ui->labelName->setText("Name : " + name);
    ui->labelEmail->setText("Email : " + email);
    ui->labelPhone->setText("Phone : " + phone);
    ui->labelCountry->setText("Country : " + country);
    ui->labelCompany->setText("Company : " + company);
    ui->labelClientType->setText("Client type : " + client_type);
}

void AllClients::on_BtnBack_clicked()
{
    Client *client = new Client();
    client->show();
    this->close();
}
