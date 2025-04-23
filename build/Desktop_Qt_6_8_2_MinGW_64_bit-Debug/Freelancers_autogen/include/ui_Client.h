/********************************************************************************
** Form generated from reading UI file 'Client.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QLabel *label;
    QPushButton *btnAddClient;
    QPushButton *btnEditClient;
    QPushButton *btnAllClients;
    QPushButton *btnBack;

    void setupUi(QWidget *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName("Client");
        Client->resize(754, 522);
        Client->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #f4f6f8;\n"
"}"));
        label = new QLabel(Client);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 40, 221, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color:rgba(0, 0, 112, 1);\n"
"    font-size: 18pt;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    qproperty-alignment: AlignCenter;\n"
"}"));
        btnAddClient = new QPushButton(Client);
        btnAddClient->setObjectName("btnAddClient");
        btnAddClient->setGeometry(QRect(100, 140, 541, 71));
        btnAddClient->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 0, 112, 1);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 12px;\n"
"    font-size: 14pt;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}\n"
""));
        btnEditClient = new QPushButton(Client);
        btnEditClient->setObjectName("btnEditClient");
        btnEditClient->setGeometry(QRect(100, 260, 541, 71));
        btnEditClient->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 0, 112, 1);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 12px;\n"
"    font-size: 14pt;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}\n"
""));
        btnAllClients = new QPushButton(Client);
        btnAllClients->setObjectName("btnAllClients");
        btnAllClients->setGeometry(QRect(100, 390, 541, 71));
        btnAllClients->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 0, 112, 1);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 12px;\n"
"    font-size: 14pt;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}\n"
""));
        btnBack = new QPushButton(Client);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 480, 151, 31));
        btnBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    color : rgba(0, 0, 112, 1);\n"
"    padding: 6px 14px;\n"
"    font-size: 12pt;\n"
"    font-weight: bold;\n"
"    border-radius: 6px;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #95a5a6;\n"
"}\n"
""));

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QWidget *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Form", nullptr));
        label->setText(QCoreApplication::translate("Client", "Client section", nullptr));
        btnAddClient->setText(QCoreApplication::translate("Client", "Add a new client", nullptr));
        btnEditClient->setText(QCoreApplication::translate("Client", "Edit client", nullptr));
        btnAllClients->setText(QCoreApplication::translate("Client", "All clients", nullptr));
        btnBack->setText(QCoreApplication::translate("Client", "<- Back to home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
