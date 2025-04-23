/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPushButton *btnLogin;
    QLineEdit *lineEmail;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *linePassword;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(727, 517);
        Login->setStyleSheet(QString::fromUtf8("background: qlineargradient(\n"
"    x1: 0, y1: 0, x2: 0, y2: 1,\n"
"    stop: 0 white,\n"
"    stop: 1 white\n"
");\n"
""));
        btnLogin = new QPushButton(Login);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(250, 400, 251, 61));
        btnLogin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"\n"
"padding : 0 4px;\n"
"background: rgba(0, 0, 160, 1);\n"
"border -radius:15px;\n"
"color: rgb(255, 255, 255);\n"
"font: 24px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"\n"
"{\n"
"background:#57cc99;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"              font-size: 19px;\n"
"              transition: 0.9s; \n"
"}\n"
""));
        lineEmail = new QLineEdit(Login);
        lineEmail->setObjectName("lineEmail");
        lineEmail->setGeometry(QRect(180, 220, 421, 51));
        lineEmail->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(255, 255, 255);\n"
"	 border: 2px  solid;\n"
"     border-radius: 4px;\n"
"	font: 18px;\n"
"}"));
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 240, 91, 20));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:18px;\n"
"color :rgba(0, 0, 160, 1);\n"
"}"));
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 330, 91, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:18px;\n"
"color :rgba(0, 0, 160, 1);\n"
"}"));
        label_3 = new QLabel(Login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(240, 100, 241, 41));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 35px;\n"
"color:rgba(0, 0, 160, 1);\n"
"backround-color:white;\n"
"}"));
        linePassword = new QLineEdit(Login);
        linePassword->setObjectName("linePassword");
        linePassword->setGeometry(QRect(180, 310, 421, 51));
        linePassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(255, 255, 255);\n"
"	 border: 2px  solid;\n"
"     border-radius: 4px;\n"
"	font: 18px;\n"
"}"));
        linePassword->setEchoMode(QLineEdit::EchoMode::Password);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        btnLogin->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QCoreApplication::translate("Login", "Email    :", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Password :", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Welcome Back!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
