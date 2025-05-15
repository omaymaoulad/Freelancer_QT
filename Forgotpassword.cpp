#include "Forgotpassword.h"
#include "ui_Forgotpassword.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QRandomGenerator>
#include <QCryptographicHash>
#include <QMessageBox>
#include "login.h"

Forgotpassword::Forgotpassword(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Forgotpassword)
{
    ui->setupUi(this);
}

Forgotpassword::~Forgotpassword()
{
    delete ui;
}

void Forgotpassword::on_btnResetPassword_clicked()
{
    QString email = ui->lineEditEmail->text().trimmed();

    if (email.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter your email.");
        return;
    }

    // Vérifie si l'email existe
    QSqlQuery query;
    query.prepare("SELECT id FROM utilisateurs WHERE email = :email");
    query.bindValue(":email", email);

    if (!query.exec() || !query.next()) {
        QMessageBox::warning(this, "Not Found", "No account associated with this email.");
        return;
    }

    // Génère un nouveau mot de passe aléatoire
    const QString characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    QString newPassword;
    for (int i = 0; i < 8; ++i) {
        int index = QRandomGenerator::global()->bounded(characters.length());
        newPassword += characters.at(index);
    }

    // Hachage du mot de passe avant enregistrement (SHA-1 ici, à adapter selon ton projet)
    QString hashedPassword = QString(QCryptographicHash::hash(newPassword.toUtf8(), QCryptographicHash::Sha1).toHex());

    // Mise à jour du mot de passe dans la base
    QSqlQuery updateQuery;
    updateQuery.prepare("UPDATE utilisateurs SET motdepasse = :newpass WHERE email = :email");
    updateQuery.bindValue(":newpass", hashedPassword);
    updateQuery.bindValue(":email", email);

    if (updateQuery.exec()) {
        QMessageBox::information(this, "Password Reset",
                                 "Your new password is:\n\n" + newPassword + "\n\nPlease change it after logging in.");
    } else {
        QMessageBox::critical(this, "Error", "Failed to update password:\n" + updateQuery.lastError().text());
    }
}

void Forgotpassword::on_btnBackToLogin_clicked()
{
    Login *loginPage = new Login();
    loginPage->show();
    this->close();
}
