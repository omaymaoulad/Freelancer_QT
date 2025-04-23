/********************************************************************************
** Form generated from reading UI file 'AddClient.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENT_H
#define UI_ADDCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddClient
{
public:
    QPushButton *btnSave;
    QPushButton *btnCancel;
    QLineEdit *NameLine;
    QTextEdit *textNote;
    QLineEdit *EmailLine;
    QLineEdit *AdressLine;
    QLineEdit *PhoneLine;
    QLineEdit *CompanyLine;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *comboBoxCountry;
    QComboBox *comboBoxType;
    QToolButton *btnBack;

    void setupUi(QWidget *AddClient)
    {
        if (AddClient->objectName().isEmpty())
            AddClient->setObjectName("AddClient");
        AddClient->resize(748, 519);
        AddClient->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: rgba(163, 224, 255, 1);\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    font-size: 11pt;\n"
"}\n"
""));
        btnSave = new QPushButton(AddClient);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(500, 450, 91, 41));
        btnSave->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 6px;\n"
"    padding: 6px 16px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}"));
        btnCancel = new QPushButton(AddClient);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setGeometry(QRect(620, 450, 91, 41));
        btnCancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 6px;\n"
"    padding: 6px 16px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}"));
        NameLine = new QLineEdit(AddClient);
        NameLine->setObjectName("NameLine");
        NameLine->setGeometry(QRect(10, 50, 471, 31));
        NameLine->setStyleSheet(QString::fromUtf8("QLineEdit, QTextEdit, QComboBox {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
""));
        textNote = new QTextEdit(AddClient);
        textNote->setObjectName("textNote");
        textNote->setGeometry(QRect(500, 70, 241, 261));
        textNote->setStyleSheet(QString::fromUtf8("QLineEdit, QTextEdit, QComboBox {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
""));
        EmailLine = new QLineEdit(AddClient);
        EmailLine->setObjectName("EmailLine");
        EmailLine->setGeometry(QRect(10, 120, 471, 31));
        EmailLine->setStyleSheet(QString::fromUtf8("QLineEdit, QTextEdit, QComboBox {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
""));
        AdressLine = new QLineEdit(AddClient);
        AdressLine->setObjectName("AdressLine");
        AdressLine->setGeometry(QRect(10, 260, 471, 31));
        AdressLine->setStyleSheet(QString::fromUtf8("QLineEdit, QTextEdit, QComboBox {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
""));
        PhoneLine = new QLineEdit(AddClient);
        PhoneLine->setObjectName("PhoneLine");
        PhoneLine->setGeometry(QRect(10, 190, 471, 31));
        PhoneLine->setStyleSheet(QString::fromUtf8("QLineEdit, QTextEdit, QComboBox {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
""));
        CompanyLine = new QLineEdit(AddClient);
        CompanyLine->setObjectName("CompanyLine");
        CompanyLine->setGeometry(QRect(10, 400, 471, 31));
        CompanyLine->setStyleSheet(QString::fromUtf8("QLineEdit, QTextEdit, QComboBox {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
""));
        label = new QLabel(AddClient);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 20, 101, 21));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: rgba(0, 68, 204, 1);\n"
"    font-weight: bold;\n"
"}"));
        label_2 = new QLabel(AddClient);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 90, 81, 16));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: rgba(0, 68, 204, 1);\n"
"    font-weight: bold;\n"
"}"));
        label_3 = new QLabel(AddClient);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 170, 151, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: rgba(0, 68, 204, 1);\n"
"    font-weight: bold;\n"
"}"));
        label_4 = new QLabel(AddClient);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(210, 240, 71, 16));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: rgba(0, 68, 204, 1);\n"
"    font-weight: bold;\n"
"}"));
        label_5 = new QLabel(AddClient);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(210, 310, 81, 16));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: rgba(0, 68, 204, 1);\n"
"    font-weight: bold;\n"
"}"));
        label_6 = new QLabel(AddClient);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(210, 380, 91, 20));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: rgba(0, 68, 204, 1);\n"
"    font-weight: bold;\n"
"}"));
        label_7 = new QLabel(AddClient);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(210, 450, 101, 16));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: rgba(0, 68, 204, 1);\n"
"    font-weight: bold;\n"
"}"));
        label_8 = new QLabel(AddClient);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(500, 40, 131, 21));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: rgba(0, 68, 204, 1);\n"
"    font-weight: bold;\n"
"}"));
        comboBoxCountry = new QComboBox(AddClient);
        comboBoxCountry->setObjectName("comboBoxCountry");
        comboBoxCountry->setGeometry(QRect(14, 330, 461, 31));
        comboBoxCountry->setStyleSheet(QString::fromUtf8("QLineEdit, QTextEdit, QComboBox {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
""));
        comboBoxType = new QComboBox(AddClient);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setGeometry(QRect(14, 480, 471, 31));
        comboBoxType->setStyleSheet(QString::fromUtf8("QLineEdit, QTextEdit, QComboBox {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
""));
        btnBack = new QToolButton(AddClient);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 31, 31));
        btnBack->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"   color: white;\n"
"    background-color: #3498db;\n"
"    border-radius: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"QToolButton:hover{\n"
"  background-color: #2980b9;\n"
"}"));

        retranslateUi(AddClient);

        QMetaObject::connectSlotsByName(AddClient);
    } // setupUi

    void retranslateUi(QWidget *AddClient)
    {
        AddClient->setWindowTitle(QCoreApplication::translate("AddClient", "Form", nullptr));
        btnSave->setText(QCoreApplication::translate("AddClient", "Save", nullptr));
        btnCancel->setText(QCoreApplication::translate("AddClient", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("AddClient", "Full Name :", nullptr));
        label_2->setText(QCoreApplication::translate("AddClient", "Email :", nullptr));
        label_3->setText(QCoreApplication::translate("AddClient", "Phone Number :", nullptr));
        label_4->setText(QCoreApplication::translate("AddClient", "Adress :", nullptr));
        label_5->setText(QCoreApplication::translate("AddClient", "Country :", nullptr));
        label_6->setText(QCoreApplication::translate("AddClient", "Company :", nullptr));
        label_7->setText(QCoreApplication::translate("AddClient", " Client type :", nullptr));
        label_8->setText(QCoreApplication::translate("AddClient", "Notes :", nullptr));
        btnBack->setText(QCoreApplication::translate("AddClient", "<-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddClient: public Ui_AddClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENT_H
