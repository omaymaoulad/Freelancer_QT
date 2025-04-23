/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnRegister;
    QPushButton *btnLogin;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(734, 507);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(:/images/background.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-size: cover;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btnRegister = new QPushButton(centralwidget);
        btnRegister->setObjectName("btnRegister");
        btnRegister->setGeometry(QRect(240, 190, 261, 71));
        btnRegister->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size:25px;\n"
"background:rgba(72, 125, 233, 1);\n"
"border -radius:15px;\n"
"color: rgba(0, 0, 160, 1);\n"
"}\n"
""));
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(240, 320, 261, 71));
        btnLogin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size:25px;\n"
"background:rgba(72, 125, 233, 1);\n"
"border -radius:15px;\n"
"color: rgba(0, 0, 160, 1);\n"
"}\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 80, 441, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:40px;\n"
"color :rgba(0, 0, 160, 1);\n"
"backround-color:white;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnRegister->setText(QCoreApplication::translate("MainWindow", "REGISTER", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome, Freelance Pro!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
