/********************************************************************************
** Form generated from reading UI file 'Project.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_H
#define UI_PROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Project
{
public:
    QPushButton *btnAddProject;
    QPushButton *btnEditProject;
    QPushButton *btnProjectList;
    QLabel *label;
    QPushButton *btnBack;

    void setupUi(QWidget *Project)
    {
        if (Project->objectName().isEmpty())
            Project->setObjectName("Project");
        Project->resize(716, 491);
        Project->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #F2F4F5;\n"
"}"));
        btnAddProject = new QPushButton(Project);
        btnAddProject->setObjectName("btnAddProject");
        btnAddProject->setGeometry(QRect(250, 50, 321, 81));
        btnAddProject->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1ABC9C;\n"
"    color: white;\n"
"    font-size: 14pt;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"    border-radius: 10px;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #16A085;\n"
"}\n"
""));
        btnEditProject = new QPushButton(Project);
        btnEditProject->setObjectName("btnEditProject");
        btnEditProject->setGeometry(QRect(250, 190, 321, 81));
        btnEditProject->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1ABC9C;\n"
"    color: white;\n"
"    font-size: 14pt;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"    border-radius: 10px;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #16A085;\n"
"}\n"
""));
        btnProjectList = new QPushButton(Project);
        btnProjectList->setObjectName("btnProjectList");
        btnProjectList->setGeometry(QRect(250, 330, 321, 81));
        btnProjectList->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1ABC9C;\n"
"    color: white;\n"
"    font-size: 14pt;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"    border-radius: 10px;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #16A085;\n"
"}\n"
""));
        label = new QLabel(Project);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 160, 181, 121));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 18pt;\n"
"    font-weight: bold;\n"
"    color:rgba(4, 99, 80, 1);\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"}\n"
""));
        btnBack = new QPushButton(Project);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 440, 161, 31));
        btnBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(4, 99, 80, 1);\n"
"    color:white;\n"
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

        retranslateUi(Project);

        QMetaObject::connectSlotsByName(Project);
    } // setupUi

    void retranslateUi(QWidget *Project)
    {
        Project->setWindowTitle(QCoreApplication::translate("Project", "Form", nullptr));
        btnAddProject->setText(QCoreApplication::translate("Project", "ADD PROJECT", nullptr));
        btnEditProject->setText(QCoreApplication::translate("Project", "EDIT PROJECT", nullptr));
        btnProjectList->setText(QCoreApplication::translate("Project", "PROJECTS LIST", nullptr));
        label->setText(QCoreApplication::translate("Project", "PROJECT AREA", nullptr));
        btnBack->setText(QCoreApplication::translate("Project", " <- Back to home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Project: public Ui_Project {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_H
