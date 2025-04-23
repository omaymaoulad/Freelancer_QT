/********************************************************************************
** Form generated from reading UI file 'EditProject.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROJECT_H
#define UI_EDITPROJECT_H

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

class Ui_EditProject
{
public:
    QToolButton *btnSearch;
    QLabel *label;
    QLineEdit *lineSearch;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *ProjectLine;
    QLabel *label_4;
    QDateEdit *StartDateLine;
    QLabel *label_5;
    QDateEdit *EndDateLine;
    QDoubleSpinBox *BudgetBox;
    QLabel *label_6;
    QComboBox *StatusBox;
    QLabel *label_7;
    QLabel *label_8;
    QTextEdit *DescriptionText;
    QPushButton *BtnUpdate;
    QPushButton *BtnCnacel;
    QPushButton *BtnDelete;
    QToolButton *BtnBack;
    QLineEdit *ClientLine;

    void setupUi(QWidget *EditProject)
    {
        if (EditProject->objectName().isEmpty())
            EditProject->setObjectName("EditProject");
        EditProject->resize(756, 562);
        EditProject->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color:rgb(251, 245, 221);\n"
"    font-family: 'Segoe UI';\n"
"    font-size: 18px;\n"
"    color: #333;\n"
"}"));
        btnSearch = new QToolButton(EditProject);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setGeometry(QRect(630, 50, 31, 31));
        label = new QLabel(EditProject);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 10, 241, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:rgb(61, 141, 122);\n"
"}"));
        lineSearch = new QLineEdit(EditProject);
        lineSearch->setObjectName("lineSearch");
        lineSearch->setGeometry(QRect(20, 50, 601, 31));
        lineSearch->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        label_2 = new QLabel(EditProject);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 90, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:rgb(111, 130, 106);\n"
"}"));
        label_3 = new QLabel(EditProject);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 150, 131, 21));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:rgb(111, 130, 106);\n"
"}"));
        ProjectLine = new QLineEdit(EditProject);
        ProjectLine->setObjectName("ProjectLine");
        ProjectLine->setGeometry(QRect(172, 140, 441, 31));
        ProjectLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        label_4 = new QLabel(EditProject);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 200, 121, 21));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:rgb(111, 130, 106);\n"
"}"));
        StartDateLine = new QDateEdit(EditProject);
        StartDateLine->setObjectName("StartDateLine");
        StartDateLine->setGeometry(QRect(170, 190, 191, 31));
        StartDateLine->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        StartDateLine->setCalendarPopup(true);
        label_5 = new QLabel(EditProject);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(400, 200, 91, 21));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:rgb(111, 130, 106);\n"
"}"));
        EndDateLine = new QDateEdit(EditProject);
        EndDateLine->setObjectName("EndDateLine");
        EndDateLine->setGeometry(QRect(520, 190, 181, 31));
        EndDateLine->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        EndDateLine->setCalendarPopup(true);
        BudgetBox = new QDoubleSpinBox(EditProject);
        BudgetBox->setObjectName("BudgetBox");
        BudgetBox->setGeometry(QRect(170, 240, 191, 31));
        BudgetBox->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{\n"
"  background-color: white;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"}"));
        BudgetBox->setMaximum(1000000000.000000000000000);
        label_6 = new QLabel(EditProject);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 240, 101, 31));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:rgb(111, 130, 106);\n"
"}"));
        StatusBox = new QComboBox(EditProject);
        StatusBox->setObjectName("StatusBox");
        StatusBox->setGeometry(QRect(520, 240, 181, 31));
        StatusBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        label_7 = new QLabel(EditProject);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(400, 245, 91, 21));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:rgb(111, 130, 106);\n"
"}"));
        label_8 = new QLabel(EditProject);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 300, 121, 21));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-weight: bold;\n"
"    color:rgb(111, 130, 106);\n"
"}"));
        DescriptionText = new QTextEdit(EditProject);
        DescriptionText->setObjectName("DescriptionText");
        DescriptionText->setGeometry(QRect(160, 320, 471, 151));
        DescriptionText->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        BtnUpdate = new QPushButton(EditProject);
        BtnUpdate->setObjectName("BtnUpdate");
        BtnUpdate->setGeometry(QRect(170, 500, 111, 31));
        BtnUpdate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#6F826A;\n"
"    color: white;\n"
"    padding: 6px;\n"
"    border-radius: 5px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #BBD8A3;\n"
"}"));
        BtnCnacel = new QPushButton(EditProject);
        BtnCnacel->setObjectName("BtnCnacel");
        BtnCnacel->setGeometry(QRect(330, 500, 111, 31));
        BtnCnacel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#6F826A;\n"
"    color: white;\n"
"    padding: 6px;\n"
"    border-radius: 5px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #BBD8A3;\n"
"}"));
        BtnDelete = new QPushButton(EditProject);
        BtnDelete->setObjectName("BtnDelete");
        BtnDelete->setGeometry(QRect(500, 500, 111, 31));
        BtnDelete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#6F826A;\n"
"    color: white;\n"
"    padding: 6px;\n"
"    border-radius: 5px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #BBD8A3;\n"
"}"));
        BtnBack = new QToolButton(EditProject);
        BtnBack->setObjectName("BtnBack");
        BtnBack->setGeometry(QRect(20, 10, 31, 31));
        BtnBack->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"   color: white;\n"
"    background-color:#6F826A;\n"
"    border-radius: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"QToolButton:hover{\n"
"  background-color:#BBD8A3;\n"
"}"));
        ClientLine = new QLineEdit(EditProject);
        ClientLine->setObjectName("ClientLine");
        ClientLine->setGeometry(QRect(170, 90, 441, 31));
        ClientLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));

        retranslateUi(EditProject);

        QMetaObject::connectSlotsByName(EditProject);
    } // setupUi

    void retranslateUi(QWidget *EditProject)
    {
        EditProject->setWindowTitle(QCoreApplication::translate("EditProject", "Form", nullptr));
        btnSearch->setText(QCoreApplication::translate("EditProject", "\360\237\224\215", nullptr));
        label->setText(QCoreApplication::translate("EditProject", " \360\237\224\215 Search Project : ", nullptr));
        label_2->setText(QCoreApplication::translate("EditProject", "Client  :", nullptr));
        label_3->setText(QCoreApplication::translate("EditProject", "Project Name :", nullptr));
        label_4->setText(QCoreApplication::translate("EditProject", "Start Date  :", nullptr));
        label_5->setText(QCoreApplication::translate("EditProject", "End Date:", nullptr));
        BudgetBox->setPrefix(QCoreApplication::translate("EditProject", "$", nullptr));
        label_6->setText(QCoreApplication::translate("EditProject", "Budget :", nullptr));
        label_7->setText(QCoreApplication::translate("EditProject", "Status :", nullptr));
        label_8->setText(QCoreApplication::translate("EditProject", "Description :", nullptr));
        BtnUpdate->setText(QCoreApplication::translate("EditProject", "Update", nullptr));
        BtnCnacel->setText(QCoreApplication::translate("EditProject", "Cancel", nullptr));
        BtnDelete->setText(QCoreApplication::translate("EditProject", "Delete", nullptr));
        BtnBack->setText(QCoreApplication::translate("EditProject", "<--", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditProject: public Ui_EditProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROJECT_H
