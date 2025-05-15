#include "login.h"
#include "ui_login.h"
#include "Forgotpassword.h"
#include "Acceuil.h"
#include "global.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>

Login::Login(QWidget *parent)
    : QWidget(parent), ui(new Ui::Login) {
    ui->setupUi(this);
}

Login::~Login() {
    delete ui;
}

void Login::on_btnLogin_clicked() {
    QString email = ui->lineEmail->text().trimmed();
    QString password = ui->linePassword->text().trimmed();

    if (email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter your email and password.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM utilisateurs WHERE email = :email AND motdepasse = :password");
    query.bindValue(":email", email);
    query.bindValue(":password", password);

    if (!query.exec()) {
        qDebug() << "Erreur SQL Login:" << query.lastError().text();
        QMessageBox::critical(this, "Database Error", "Login query failed.");
        return;
    }

    if (query.next()) {
        CURRENT_USER_ID = query.value("id").toInt();
        Acceuil *acceuil = new Acceuil();
        qDebug() << "Connexion réussie. Ouverture de la page Acceuil...";
        acceuil->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Error", "Incorrect email or password.");
    }
}
void Login::on_btnForgetPassword_clicked(){
    Forgotpassword *forget = new Forgotpassword();
    forget->show();
    this->close();
}
