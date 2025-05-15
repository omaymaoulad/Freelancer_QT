/********************************************************************************
** Form generated from reading UI file 'Forgotpassword.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASSWORD_H
#define UI_FORGOTPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Forgotpassword
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditEmail;
    QPushButton *btnResetPassword;
    QPushButton *btnBackToLogin;
    QLabel *label_3;

    void setupUi(QWidget *Forgotpassword)
    {
        if (Forgotpassword->objectName().isEmpty())
            Forgotpassword->setObjectName("Forgotpassword");
        Forgotpassword->resize(740, 486);
        Forgotpassword->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(:/images/log.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-size: cover;\n"
"}\n"
""));
        label = new QLabel(Forgotpassword);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 30, 291, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color:#002366;\n"
"	font: 9pt \"Kristen ITC\";\n"
"    font-weight: bold;\n"
"    font-size: 30px;\n"
"}"));
        label_2 = new QLabel(Forgotpassword);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 130, 371, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color:#002366;\n"
"    font-size: 14pt;\n"
"    font-weight: bold;\n"
"}"));
        lineEditEmail = new QLineEdit(Forgotpassword);
        lineEditEmail->setObjectName("lineEditEmail");
        lineEditEmail->setGeometry(QRect(160, 210, 401, 31));
        lineEditEmail->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #002366;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"    background-color: #FFFFFF;\n"
"    color: #004AAD;\n"
"}\n"
""));
        btnResetPassword = new QPushButton(Forgotpassword);
        btnResetPassword->setObjectName("btnResetPassword");
        btnResetPassword->setGeometry(QRect(90, 320, 201, 61));
        btnResetPassword->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"\n"
"padding : 0 4px;\n"
"background:#002366;\n"
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
        btnBackToLogin = new QPushButton(Forgotpassword);
        btnBackToLogin->setObjectName("btnBackToLogin");
        btnBackToLogin->setGeometry(QRect(440, 320, 201, 61));
        btnBackToLogin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"\n"
"padding : 0 4px;\n"
"background:#002366;\n"
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
        label_3 = new QLabel(Forgotpassword);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 210, 141, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color:#002366;\n"
"    font-size: 14pt;\n"
"    font-weight: bold;\n"
"}"));

        retranslateUi(Forgotpassword);

        QMetaObject::connectSlotsByName(Forgotpassword);
    } // setupUi

    void retranslateUi(QWidget *Forgotpassword)
    {
        Forgotpassword->setWindowTitle(QCoreApplication::translate("Forgotpassword", "Form", nullptr));
        label->setText(QCoreApplication::translate("Forgotpassword", "Forgot Password", nullptr));
        label_2->setText(QCoreApplication::translate("Forgotpassword", "Enter your email to reset your password:", nullptr));
        btnResetPassword->setText(QCoreApplication::translate("Forgotpassword", " Send Reset Link", nullptr));
        btnBackToLogin->setText(QCoreApplication::translate("Forgotpassword", "Back to Login", nullptr));
        label_3->setText(QCoreApplication::translate("Forgotpassword", "Email address :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Forgotpassword: public Ui_Forgotpassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
