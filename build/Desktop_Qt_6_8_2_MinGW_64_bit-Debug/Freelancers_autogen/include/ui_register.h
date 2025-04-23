/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QFrame *frame;
    QPushButton *btnCreateAccount;
    QLineEdit *lineNom;
    QLineEdit *lineEmail;
    QLineEdit *linePassword;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(720, 499);
        Register->setStyleSheet(QString::fromUtf8("background-color: white;\n"
""));
        frame = new QFrame(Register);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(150, 70, 411, 331));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        btnCreateAccount = new QPushButton(frame);
        btnCreateAccount->setObjectName("btnCreateAccount");
        btnCreateAccount->setGeometry(QRect(150, 250, 101, 31));
        btnCreateAccount->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        lineNom = new QLineEdit(frame);
        lineNom->setObjectName("lineNom");
        lineNom->setGeometry(QRect(110, 70, 211, 31));
        lineNom->setStyleSheet(QString::fromUtf8("background-color: #f2f2f2;\n"
"border: none;\n"
"border-radius: 5px;\n"
"padding: 8px;\n"
"font-size: 14px;\n"
""));
        lineEmail = new QLineEdit(frame);
        lineEmail->setObjectName("lineEmail");
        lineEmail->setGeometry(QRect(110, 130, 211, 31));
        lineEmail->setStyleSheet(QString::fromUtf8("background-color: #f2f2f2;\n"
"border: none;\n"
"border-radius: 5px;\n"
"padding: 8px;\n"
"font-size: 14px;\n"
""));
        linePassword = new QLineEdit(frame);
        linePassword->setObjectName("linePassword");
        linePassword->setGeometry(QRect(110, 190, 211, 31));
        linePassword->setStyleSheet(QString::fromUtf8("background-color: #f2f2f2;\n"
"border: none;\n"
"border-radius: 5px;\n"
"padding: 8px;\n"
"font-size: 14px;\n"
""));
        linePassword->setEchoMode(QLineEdit::EchoMode::Password);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 80, 61, 16));
        label->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"color:rgba(0, 0, 160, 1);\n"
"backround-color:white ;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(38, 140, 51, 20));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"color:rgba(0, 0, 160, 1);"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 200, 71, 20));
        label_3->setStyleSheet(QString::fromUtf8("color:rgba(0, 0, 160, 1);\n"
"font-size: 15px;"));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 10, 251, 41));
        label_4->setStyleSheet(QString::fromUtf8("font-size: 35px;\n"
"color:rgba(0, 0, 160, 1);\n"
"backround-color:white;"));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Form", nullptr));
        btnCreateAccount->setText(QCoreApplication::translate("Register", "SIGN UP", nullptr));
        label->setText(QCoreApplication::translate("Register", "Nom :", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "Email :", nullptr));
        label_3->setText(QCoreApplication::translate("Register", "Password :", nullptr));
        label_4->setText(QCoreApplication::translate("Register", "Create account!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
