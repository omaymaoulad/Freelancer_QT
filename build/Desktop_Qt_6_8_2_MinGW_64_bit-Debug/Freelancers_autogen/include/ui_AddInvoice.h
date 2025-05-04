/********************************************************************************
** Form generated from reading UI file 'AddInvoice.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINVOICE_H
#define UI_ADDINVOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddInvoice
{
public:
    QLabel *label;
    QComboBox *comboProject;
    QLabel *label_2;
    QDateEdit *dateIssue;
    QDateEdit *dateDue;
    QLabel *label_3;
    QLabel *label_4;
    QDoubleSpinBox *amountBox;
    QLabel *label_5;
    QComboBox *statusBox;
    QLabel *label_6;
    QTextEdit *descriptionText;
    QLabel *label_7;
    QPushButton *btnCancel;
    QLabel *label_8;
    QPushButton *btnSave;

    void setupUi(QWidget *AddInvoice)
    {
        if (AddInvoice->objectName().isEmpty())
            AddInvoice->setObjectName("AddInvoice");
        AddInvoice->resize(756, 505);
        AddInvoice->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:rgb(197, 214, 255);\n"
"}"));
        label = new QLabel(AddInvoice);
        label->setObjectName("label");
        label->setGeometry(QRect(560, 10, 151, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color:rgb(94, 82, 255);\n"
"	font: 9pt \"Kristen ITC\";\n"
"    font-weight: bold;\n"
"    font-size: 30px;\n"
"}"));
        comboProject = new QComboBox(AddInvoice);
        comboProject->setObjectName("comboProject");
        comboProject->setGeometry(QRect(120, 100, 271, 31));
        comboProject->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 2px solid #60D2DC; /* Turquoise clair */\n"
"    border-radius: 5px;\n"
"    padding: 4px;\n"
"    background-color: #FFFFFF;\n"
"    color: #004AAD;\n"
"}\n"
"QComboBox::drop-down {\n"
"    border: none;\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #FFFFFF;\n"
"    selection-background-color: #60D2DC;\n"
"    selection-color: #004AAD;\n"
"}"));
        label_2 = new QLabel(AddInvoice);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 100, 111, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #004AAD; /* Bleu roi */\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}"));
        dateIssue = new QDateEdit(AddInvoice);
        dateIssue->setObjectName("dateIssue");
        dateIssue->setGeometry(QRect(120, 150, 211, 31));
        dateIssue->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    border: 2px solid #60D2DC;\n"
"    border-radius: 5px;\n"
"    padding: 4px;\n"
"    background-color: #FFFFFF;\n"
"    color: #004AAD;\n"
"}\n"
"QDateEdit::drop-down {\n"
"    border: none;\n"
"}"));
        dateIssue->setCalendarPopup(true);
        dateDue = new QDateEdit(AddInvoice);
        dateDue->setObjectName("dateDue");
        dateDue->setGeometry(QRect(500, 150, 211, 31));
        dateDue->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    border: 2px solid #60D2DC;\n"
"    border-radius: 5px;\n"
"    padding: 4px;\n"
"    background-color: #FFFFFF;\n"
"    color: #004AAD;\n"
"}\n"
"QDateEdit::drop-down {\n"
"    border: none;\n"
"}"));
        dateDue->setCalendarPopup(true);
        label_3 = new QLabel(AddInvoice);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 150, 91, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #004AAD; /* Bleu roi */\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}"));
        label_4 = new QLabel(AddInvoice);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(380, 150, 111, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #004AAD; /* Bleu roi */\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}"));
        amountBox = new QDoubleSpinBox(AddInvoice);
        amountBox->setObjectName("amountBox");
        amountBox->setGeometry(QRect(510, 210, 211, 31));
        amountBox->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"    border: 2px solid #60D2DC; /* Bordure turquoise clair */\n"
"    border-radius: 5px;\n"
"    padding: 4px;\n"
"    background-color: #FFFFFF; /* Fond blanc */\n"
"    color: #004AAD; /* Texte bleu roi */\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button {\n"
"    background-color: #60D2DC; /* Turquoise clair */\n"
"    subcontrol-origin: border;\n"
"    width: 16px;\n"
"    border: none;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover {\n"
"    background-color: #C29737; /* Dor\303\251 au survol */\n"
"}\n"
""));
        amountBox->setMaximum(100000000000.000000000000000);
        label_5 = new QLabel(AddInvoice);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(390, 210, 91, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #004AAD; /* Bleu roi */\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}"));
        statusBox = new QComboBox(AddInvoice);
        statusBox->setObjectName("statusBox");
        statusBox->setGeometry(QRect(120, 210, 211, 31));
        statusBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 2px solid #60D2DC; /* Turquoise clair */\n"
"    border-radius: 5px;\n"
"    padding: 4px;\n"
"    background-color: #FFFFFF;\n"
"    color: #004AAD;\n"
"}\n"
"QComboBox::drop-down {\n"
"    border: none;\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #FFFFFF;\n"
"    selection-background-color: #60D2DC;\n"
"    selection-color: #004AAD;\n"
"}"));
        label_6 = new QLabel(AddInvoice);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 210, 91, 31));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #004AAD; /* Bleu roi */\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}"));
        descriptionText = new QTextEdit(AddInvoice);
        descriptionText->setObjectName("descriptionText");
        descriptionText->setGeometry(QRect(120, 300, 291, 171));
        descriptionText->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: 2px solid #60D2DC;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"    background-color: #FFFFFF;\n"
"    color: #004AAD;\n"
"}\n"
""));
        label_7 = new QLabel(AddInvoice);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 290, 101, 31));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #004AAD; /* Bleu roi */\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}"));
        btnCancel = new QPushButton(AddInvoice);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setGeometry(QRect(610, 440, 111, 31));
        btnCancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#004AAD; \n"
"    color: #FFFFFF;\n"
"	font: 700 9pt \"Calisto MT\";\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 6px 12px;\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:rgb(0, 0, 255); /* Bleu l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"}\n"
""));
        label_8 = new QLabel(AddInvoice);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 0, 111, 101));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/images/K.jpg")));
        btnSave = new QPushButton(AddInvoice);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(470, 440, 111, 31));
        btnSave->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#004AAD; \n"
"    color: #FFFFFF;\n"
"	font: 700 9pt \"Calisto MT\";\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 6px 12px;\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:rgb(0, 0, 255); /* Bleu l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"}\n"
""));

        retranslateUi(AddInvoice);

        QMetaObject::connectSlotsByName(AddInvoice);
    } // setupUi

    void retranslateUi(QWidget *AddInvoice)
    {
        AddInvoice->setWindowTitle(QCoreApplication::translate("AddInvoice", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddInvoice", "INVOICE", nullptr));
        label_2->setText(QCoreApplication::translate("AddInvoice", "Project name :", nullptr));
        label_3->setText(QCoreApplication::translate("AddInvoice", "Issue date :", nullptr));
        label_4->setText(QCoreApplication::translate("AddInvoice", "Due date :", nullptr));
        label_5->setText(QCoreApplication::translate("AddInvoice", "Amount :", nullptr));
        label_6->setText(QCoreApplication::translate("AddInvoice", "Status :", nullptr));
        label_7->setText(QCoreApplication::translate("AddInvoice", "Description :", nullptr));
        btnCancel->setText(QCoreApplication::translate("AddInvoice", "Cancel", nullptr));
        label_8->setText(QString());
        btnSave->setText(QCoreApplication::translate("AddInvoice", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddInvoice: public Ui_AddInvoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINVOICE_H
