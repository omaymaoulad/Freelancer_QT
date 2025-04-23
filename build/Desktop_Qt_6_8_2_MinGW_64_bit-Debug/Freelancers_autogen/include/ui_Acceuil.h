/********************************************************************************
** Form generated from reading UI file 'Acceuil.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCEUIL_H
#define UI_ACCEUIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Acceuil
{
public:
    QPushButton *btnClients;
    QPushButton *btnProjects;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;

    void setupUi(QWidget *Acceuil)
    {
        if (Acceuil->objectName().isEmpty())
            Acceuil->setObjectName("Acceuil");
        Acceuil->resize(753, 515);
        Acceuil->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #ecf0f1;\n"
"}"));
        btnClients = new QPushButton(Acceuil);
        btnClients->setObjectName("btnClients");
        btnClients->setGeometry(QRect(60, 130, 231, 101));
        btnClients->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2980b9;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    padding: 12px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    border: none;\n"
"    min-width: 120px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1c5980;\n"
"}\n"
""));
        btnProjects = new QPushButton(Acceuil);
        btnProjects->setObjectName("btnProjects");
        btnProjects->setGeometry(QRect(440, 130, 241, 101));
        btnProjects->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2980b9;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    padding: 12px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    border: none;\n"
"    min-width: 120px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1c5980;\n"
"}\n"
""));
        pushButton_3 = new QPushButton(Acceuil);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(60, 300, 231, 101));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2980b9;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    padding: 12px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    border: none;\n"
"    min-width: 120px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1c5980;\n"
"}\n"
""));
        pushButton_4 = new QPushButton(Acceuil);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(440, 300, 241, 101));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2980b9;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    padding: 12px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    border: none;\n"
"    min-width: 120px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1c5980;\n"
"}\n"
""));
        label = new QLabel(Acceuil);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 50, 351, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: rgba(0, 0, 209, 1);\n"
"    font-size: 22px;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    qproperty-alignment: AlignCenter;\n"
"}\n"
""));

        retranslateUi(Acceuil);

        QMetaObject::connectSlotsByName(Acceuil);
    } // setupUi

    void retranslateUi(QWidget *Acceuil)
    {
        Acceuil->setWindowTitle(QCoreApplication::translate("Acceuil", "Form", nullptr));
        btnClients->setText(QCoreApplication::translate("Acceuil", "CLIENTS", nullptr));
        btnProjects->setText(QCoreApplication::translate("Acceuil", "PROJECTS", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Acceuil", "INVOICES", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Acceuil", "STATISTICS", nullptr));
        label->setText(QCoreApplication::translate("Acceuil", "Welcome to Freelance Manager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Acceuil: public Ui_Acceuil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCEUIL_H
