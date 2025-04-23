#include "register.h"
#include "ui_register.h"
#include "login.h"
#include "Acceuil.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
Register::Register(QWidget *parent)
    : QWidget(parent), ui(new Ui::Register) {
    ui->setupUi(this);
}

Register::~Register() {
    delete ui;
}

void Register::on_btnCreateAccount_clicked() {
    QString nom = ui->lineNom->text().trimmed();
    QString email = ui->lineEmail->text().trimmed();
    QString mdp = ui->linePassword->text().trimmed();

    if (nom.isEmpty() || email.isEmpty() || mdp.isEmpty()) {
        QMessageBox::warning(this, "Error", "All fields are required.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT id FROM utilisateurs WHERE email = :email");
    query.bindValue(":email", email);
    query.exec();

    if (query.next()) {
        QMessageBox::warning(this, "Error", "This email is already used.");
        return;
    }

    query.prepare("INSERT INTO utilisateurs (nom, email, motdepasse) VALUES (:nom, :email, :mdp)");
    query.bindValue(":nom", nom);
    query.bindValue(":email", email);
    query.bindValue(":mdp", mdp);

    if (query.exec()) {
        Acceuil *acc = new Acceuil();
        acc->show();
        this->close();
    } else {
        QMessageBox::critical(this, "Error", "Failed to create account.");
        qDebug() << "Erreur SQL:" << query.lastError().text();
    }
}
