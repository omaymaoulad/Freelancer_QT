/********************************************************************************
** Form generated from reading UI file 'EditClient.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCLIENT_H
#define UI_EDITCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditClient
{
public:
    QLineEdit *lineSearch;
    QLabel *label;
    QToolButton *btnSearch;
    QLineEdit *lineFullName;
    QLineEdit *lineEmail;
    QLineEdit *linePhone;
    QLineEdit *lineAddress;
    QLineEdit *lineCompany;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QTextBrowser *textNotes;
    QLabel *label_9;
    QPushButton *btnUpdate;
    QPushButton *btnCancel;
    QPushButton *btnDelete;
    QComboBox *comboClientType;
    QComboBox *comboCountry;
    QToolButton *btnBack;

    void setupUi(QWidget *EditClient)
    {
        if (EditClient->objectName().isEmpty())
            EditClient->setObjectName("EditClient");
        EditClient->resize(755, 519);
        lineSearch = new QLineEdit(EditClient);
        lineSearch->setObjectName("lineSearch");
        lineSearch->setGeometry(QRect(10, 40, 601, 31));
        lineSearch->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        label = new QLabel(EditClient);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 0, 241, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color: #2e4194;\n"
"}"));
        btnSearch = new QToolButton(EditClient);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setGeometry(QRect(620, 40, 31, 31));
        lineFullName = new QLineEdit(EditClient);
        lineFullName->setObjectName("lineFullName");
        lineFullName->setGeometry(QRect(122, 93, 581, 31));
        lineFullName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        lineEmail = new QLineEdit(EditClient);
        lineEmail->setObjectName("lineEmail");
        lineEmail->setGeometry(QRect(122, 143, 581, 31));
        lineEmail->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        linePhone = new QLineEdit(EditClient);
        linePhone->setObjectName("linePhone");
        linePhone->setGeometry(QRect(122, 190, 581, 31));
        linePhone->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        lineAddress = new QLineEdit(EditClient);
        lineAddress->setObjectName("lineAddress");
        lineAddress->setGeometry(QRect(122, 240, 581, 31));
        lineAddress->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        lineCompany = new QLineEdit(EditClient);
        lineCompany->setObjectName("lineCompany");
        lineCompany->setGeometry(QRect(122, 340, 581, 31));
        lineCompany->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        label_2 = new QLabel(EditClient);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 100, 101, 21));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color: #2e4194;\n"
"}"));
        label_3 = new QLabel(EditClient);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 150, 101, 21));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color: #2e4194;\n"
"}"));
        label_4 = new QLabel(EditClient);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(8, 200, 101, 21));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color: #2e4194;\n"
"}"));
        label_5 = new QLabel(EditClient);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 250, 101, 21));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color: #2e4194;\n"
"}"));
        label_6 = new QLabel(EditClient);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 291, 101, 31));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color: #2e4194;\n"
"}"));
        label_7 = new QLabel(EditClient);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 340, 91, 31));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color: #2e4194;\n"
"}"));
        label_8 = new QLabel(EditClient);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 390, 91, 31));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color: #2e4194;\n"
"}"));
        textNotes = new QTextBrowser(EditClient);
        textNotes->setObjectName("textNotes");
        textNotes->setGeometry(QRect(120, 430, 256, 81));
        textNotes->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        label_9 = new QLabel(EditClient);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(40, 440, 71, 16));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color: #2e4194;\n"
"}"));
        btnUpdate = new QPushButton(EditClient);
        btnUpdate->setObjectName("btnUpdate");
        btnUpdate->setGeometry(QRect(400, 460, 80, 31));
        btnUpdate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#2e4194;\n"
"    color: white;\n"
"    padding: 6px;\n"
"    border-radius: 5px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #286090;\n"
"}"));
        btnCancel = new QPushButton(EditClient);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setGeometry(QRect(510, 460, 80, 31));
        btnCancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#2e4194;\n"
"    color: white;\n"
"    padding: 6px;\n"
"    border-radius: 5px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #286090;\n"
"}"));
        btnDelete = new QPushButton(EditClient);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setGeometry(QRect(630, 460, 80, 31));
        btnDelete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#2e4194;\n"
"    color: white;\n"
"    padding: 6px;\n"
"    border-radius: 5px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #286090;\n"
"}"));
        comboClientType = new QComboBox(EditClient);
        comboClientType->setObjectName("comboClientType");
        comboClientType->setGeometry(QRect(124, 390, 581, 31));
        comboClientType->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        comboCountry = new QComboBox(EditClient);
        comboCountry->setObjectName("comboCountry");
        comboCountry->setGeometry(QRect(120, 290, 581, 31));
        comboCountry->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        btnBack = new QToolButton(EditClient);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 31, 23));
        btnBack->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"   color: white;\n"
"    background-color: #1d048b;\n"
"    border-radius: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"QToolButton:hover{\n"
"  background-color: #2980b9;\n"
"}"));

        retranslateUi(EditClient);

        QMetaObject::connectSlotsByName(EditClient);
    } // setupUi

    void retranslateUi(QWidget *EditClient)
    {
        EditClient->setWindowTitle(QCoreApplication::translate("EditClient", "Form", nullptr));
        label->setText(QCoreApplication::translate("EditClient", " \360\237\224\215 Search Client  ", nullptr));
        btnSearch->setText(QCoreApplication::translate("EditClient", "\360\237\224\215 ", nullptr));
        label_2->setText(QCoreApplication::translate("EditClient", " Full Name:", nullptr));
        label_3->setText(QCoreApplication::translate("EditClient", "Email:", nullptr));
        label_4->setText(QCoreApplication::translate("EditClient", "Phone Number: ", nullptr));
        label_5->setText(QCoreApplication::translate("EditClient", "Address: ", nullptr));
        label_6->setText(QCoreApplication::translate("EditClient", "Country:", nullptr));
        label_7->setText(QCoreApplication::translate("EditClient", "Company: ", nullptr));
        label_8->setText(QCoreApplication::translate("EditClient", "Client Type:", nullptr));
        label_9->setText(QCoreApplication::translate("EditClient", "Notes:", nullptr));
        btnUpdate->setText(QCoreApplication::translate("EditClient", "Update", nullptr));
        btnCancel->setText(QCoreApplication::translate("EditClient", "Cancel ", nullptr));
        btnDelete->setText(QCoreApplication::translate("EditClient", "Delete", nullptr));
        btnBack->setText(QCoreApplication::translate("EditClient", "<-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditClient: public Ui_EditClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCLIENT_H
