#include "AddClient.h"
#include "ui_AddClient.h"
#include "Client.h"
#include <QLocale>
#include <QSet>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
AddClient::AddClient(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddClient)
{
    ui->setupUi(this);
    qDebug() << "AddClient window opened.";

    // Remplir comboBoxCountry automatiquement avec les noms de pays via QLocale 🌍
    QSet<QString> uniqueCountries;
    const auto locales = QLocale::matchingLocales(
        QLocale::AnyLanguage, QLocale::AnyScript, QLocale::AnyCountry
        );

    for (const QLocale &locale : locales) {
        QString country = QLocale::countryToString(locale.country());
        if (!country.isEmpty())
            uniqueCountries.insert(country);
    }

    QStringList sortedCountries = uniqueCountries.values();
    sortedCountries.sort(Qt::CaseInsensitive); // Trie alphabétique
    ui->comboBoxCountry->addItems(sortedCountries);

    // Remplir comboBoxType avec les types de clients
    ui->comboBoxType->addItems({
        "Individual",
        "Business",
        "Non-profit",
        "Government",
        "Other"
    });
}

AddClient::~AddClient()
{
    delete ui;
}

void AddClient::on_btnSave_clicked()
{
    QString name = ui->NameLine->text();
    QString email = ui->EmailLine->text();
    QString phone = ui->PhoneLine->text();
    QString address = ui->AdressLine->text();
    QString country = ui->comboBoxCountry->currentText();
    QString company = ui->CompanyLine->text();
    QString type = ui->comboBoxType->currentText();
    QString notes = ui->textNote->toPlainText();

    if (name.isEmpty() || email.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Full name and Email are required.");
        return;
    }

    QSqlQuery query;
    query.prepare(R"(
        INSERT INTO clients (name, email, phone, address, country, company, client_type, notes)
        VALUES (:name, :email, :phone, :address, :country, :company, :client_type, :notes)
    )");

    query.bindValue(":name", name);
    query.bindValue(":email", email);
    query.bindValue(":phone", phone);
    query.bindValue(":address", address);
    query.bindValue(":country", country);
    query.bindValue(":company", company);
    query.bindValue(":client_type", type);
    query.bindValue(":notes", notes);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Client saved into database.");
    } else {
        QMessageBox::critical(this, "Insert Error", query.lastError().text());
    }
}

void AddClient::on_btnBack_clicked() {
    Client *client = new Client();
    client->show();
    this->close();
}
void AddClient::on_btnCancel_clicked()
{
    Client *client = new Client();
    client->show();
    this->close(); // Ferme la fenêtre actuelle
}
