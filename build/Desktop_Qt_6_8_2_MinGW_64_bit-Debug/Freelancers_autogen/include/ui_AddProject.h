/********************************************************************************
** Form generated from reading UI file 'AddProject.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPROJECT_H
#define UI_ADDPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddProject
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *ClientBox;
    QLineEdit *NameLine;
    QDateEdit *StartDateLine;
    QDateEdit *EndDateLine;
    QDoubleSpinBox *BudgetBox;
    QComboBox *StatusBox;
    QTextEdit *DesctiptionText;
    QPushButton *BtnSave;
    QToolButton *BtnBack;

    void setupUi(QWidget *AddProject)
    {
        if (AddProject->objectName().isEmpty())
            AddProject->setObjectName("AddProject");
        AddProject->resize(750, 533);
        AddProject->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color:#F4FFC3;\n"
"    font-family: 'Segoe UI';\n"
"    font-size: 18px;\n"
"    color: #333;\n"
"}"));
        label = new QLabel(AddProject);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 20, 451, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:#006769;\n"
"}"));
        label_2 = new QLabel(AddProject);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 80, 141, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:#40A578;\n"
"}"));
        label_4 = new QLabel(AddProject);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 130, 141, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:#40A578;\n"
"}"));
        label_3 = new QLabel(AddProject);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 180, 141, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:#40A578;\n"
"}"));
        label_5 = new QLabel(AddProject);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(410, 180, 141, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:#40A578;\n"
"}"));
        label_6 = new QLabel(AddProject);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 260, 141, 31));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:#40A578;\n"
"}"));
        label_7 = new QLabel(AddProject);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(410, 260, 141, 31));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:#40A578;\n"
"}"));
        label_8 = new QLabel(AddProject);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 310, 141, 31));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:#40A578;\n"
"}"));
        ClientBox = new QComboBox(AddProject);
        ClientBox->setObjectName("ClientBox");
        ClientBox->setGeometry(QRect(184, 80, 541, 31));
        ClientBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"  background-color: white;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"}"));
        NameLine = new QLineEdit(AddProject);
        NameLine->setObjectName("NameLine");
        NameLine->setGeometry(QRect(182, 133, 541, 31));
        NameLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"  background-color: white;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"}"));
        StartDateLine = new QDateEdit(AddProject);
        StartDateLine->setObjectName("StartDateLine");
        StartDateLine->setGeometry(QRect(179, 180, 201, 31));
        StartDateLine->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"  background-color: white;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"}"));
        StartDateLine->setCalendarPopup(true);
        EndDateLine = new QDateEdit(AddProject);
        EndDateLine->setObjectName("EndDateLine");
        EndDateLine->setGeometry(QRect(510, 180, 211, 31));
        EndDateLine->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"  background-color: white;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"}"));
        EndDateLine->setCalendarPopup(true);
        BudgetBox = new QDoubleSpinBox(AddProject);
        BudgetBox->setObjectName("BudgetBox");
        BudgetBox->setGeometry(QRect(180, 260, 201, 31));
        BudgetBox->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{\n"
"  background-color: white;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"}"));
        BudgetBox->setMaximum(1000000000.000000000000000);
        StatusBox = new QComboBox(AddProject);
        StatusBox->setObjectName("StatusBox");
        StatusBox->setGeometry(QRect(520, 260, 201, 31));
        StatusBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"  background-color: white;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"}"));
        DesctiptionText = new QTextEdit(AddProject);
        DesctiptionText->setObjectName("DesctiptionText");
        DesctiptionText->setGeometry(QRect(50, 350, 371, 171));
        DesctiptionText->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"  background-color: white;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"}"));
        BtnSave = new QPushButton(AddProject);
        BtnSave->setObjectName("BtnSave");
        BtnSave->setGeometry(QRect(470, 450, 251, 51));
        BtnSave->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#5D8736;\n"
"    color: white;\n"
"    border-radius: 6px;\n"
"    padding: 6px 15px;\n"
"    font-weight: bold;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #65B741;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:#65B741;\n"
"}"));
        BtnBack = new QToolButton(AddProject);
        BtnBack->setObjectName("BtnBack");
        BtnBack->setGeometry(QRect(20, 10, 41, 41));
        BtnBack->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"   color: white;\n"
"    background-color:#5D8736;\n"
"    border-radius: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"QToolButton:hover{\n"
"  background-color:#65B741;\n"
"}"));

        retranslateUi(AddProject);

        QMetaObject::connectSlotsByName(AddProject);
    } // setupUi

    void retranslateUi(QWidget *AddProject)
    {
        AddProject->setWindowTitle(QCoreApplication::translate("AddProject", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddProject", "\342\236\225 Add New Project :", nullptr));
        label_2->setText(QCoreApplication::translate("AddProject", "Client :", nullptr));
        label_4->setText(QCoreApplication::translate("AddProject", "Project Name :", nullptr));
        label_3->setText(QCoreApplication::translate("AddProject", "Start Date :", nullptr));
        label_5->setText(QCoreApplication::translate("AddProject", "End Date :", nullptr));
        label_6->setText(QCoreApplication::translate("AddProject", "Budget :", nullptr));
        label_7->setText(QCoreApplication::translate("AddProject", "Status :", nullptr));
        label_8->setText(QCoreApplication::translate("AddProject", "Description :", nullptr));
        BudgetBox->setPrefix(QCoreApplication::translate("AddProject", "$", nullptr));
        BtnSave->setText(QCoreApplication::translate("AddProject", "Save Project", nullptr));
        BtnBack->setText(QCoreApplication::translate("AddProject", "<--", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddProject: public Ui_AddProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPROJECT_H
