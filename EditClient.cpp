#include "EditClient.h"
#include "ui_EditClient.h"
#include <QSqlQuery>
#include <QMessageBox>
#include "Client.h"
EditClient::EditClient(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::EditClient)
{
    ui->setupUi(this);
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
    ui->comboCountry->addItems(sortedCountries);

    // Remplir comboBoxType avec les types de clients
    ui->comboClientType->addItems({
        "Individual",
        "Business",
        "Non-profit",
        "Government",
        "Other"
    });
}

EditClient::~EditClient()
{
    delete ui;
}

void EditClient::on_btnSearch_clicked()
{
    QString email = ui->lineSearch->text().trimmed().toLower();

    if (email.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter an email to search.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM clients WHERE LOWER(email) = :email");
    query.bindValue(":email", email);

    if (query.exec() && query.next()) {
        currentClientEmail = email;

        ui->lineFullName->setText(query.value("name").toString());
        ui->lineEmail->setText(query.value("email").toString());
        ui->linePhone->setText(query.value("phone").toString());
        ui->lineAddress->setText(query.value("address").toString());
        ui->comboCountry->setCurrentText(query.value("country").toString());
        ui->lineCompany->setText(query.value("company").toString());
        ui->comboClientType->setCurrentText(query.value("client_type").toString());
        ui->textNotes->setPlainText(query.value("notes").toString());

    } else {
        QMessageBox::warning(this, "Not Found", "Client not found.");
    }
}

void EditClient::on_btnUpdate_clicked()
{
    if (currentClientEmail.isEmpty()) {
        QMessageBox::warning(this, "Error", "No client selected for update.");
        return;
    }

    QSqlQuery query;
    query.prepare("UPDATE clients SET name = :name, email = :email, phone = :phone, "
                  "address = :address, country = :country, company = :company, "
                  "client_type = :client_type, notes = :notes WHERE email = :currentEmail");

    query.bindValue(":name", ui->lineFullName->text());
    query.bindValue(":email", ui->lineEmail->text());
    query.bindValue(":phone", ui->linePhone->text());
    query.bindValue(":address", ui->lineAddress->text());
    query.bindValue(":country", ui->comboCountry->currentText());
    query.bindValue(":company", ui->lineCompany->text());
    query.bindValue(":client_type", ui->comboClientType->currentText());
    query.bindValue(":notes", ui->textNotes->toPlainText());
    query.bindValue(":currentEmail", currentClientEmail);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Client updated successfully.");
        currentClientEmail.clear();
    } else {
        QMessageBox::critical(this, "Error", "Failed to update client.");
    }
}
void EditClient::on_btnDelete_clicked()
{
    if (currentClientEmail.isEmpty()) {
        QMessageBox::warning(this, "Error", "No client selected to delete.");
        return;
    }

    QSqlQuery query;
    query.prepare("DELETE FROM clients WHERE email = :email");
    query.bindValue(":email", currentClientEmail);

    if (query.exec()) {
        QMessageBox::information(this, "Deleted", "Client deleted.");
        currentClientEmail.clear();
        ui->lineFullName->clear();
        ui->lineEmail->clear();
        ui->linePhone->clear();
        ui->lineAddress->clear();
        ui->comboCountry->setCurrentIndex(0);
        ui->lineCompany->clear();
        ui->comboClientType->setCurrentIndex(0);
        ui->textNotes->clear();
    } else {
        QMessageBox::critical(this, "Error", "Could not delete client.");
    }
}
void EditClient::on_btnBack_clicked() {
    Client *client = new Client();
    client->show();
    this->close();
}
void EditClient::on_btnCancel_clicked(){
    this->close();
}
