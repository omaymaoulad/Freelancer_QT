/********************************************************************************
** Form generated from reading UI file 'Statistics.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICS_H
#define UI_STATISTICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Statistics
{
public:
    QWidget *layoutChart;
    QVBoxLayout *verticalLayout;
    QToolButton *btnBack;
    QLabel *label;

    void setupUi(QWidget *Statistics)
    {
        if (Statistics->objectName().isEmpty())
            Statistics->setObjectName("Statistics");
        Statistics->resize(758, 484);
        layoutChart = new QWidget(Statistics);
        layoutChart->setObjectName("layoutChart");
        layoutChart->setGeometry(QRect(10, 60, 731, 411));
        verticalLayout = new QVBoxLayout(layoutChart);
        verticalLayout->setObjectName("verticalLayout");
        btnBack = new QToolButton(Statistics);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 12, 31, 31));
        btnBack->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"   color: white;\n"
"    background-color: #3498db;\n"
"    border-radius: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"QToolButton:hover{\n"
"  background-color: #2980b9;\n"
"}"));
        label = new QLabel(Statistics);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 20, 161, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color:rgb(94, 82, 255);\n"
"	font: 9pt \"Kristen ITC\";\n"
"    font-weight: bold;\n"
"    font-size: 30px;\n"
"}"));

        retranslateUi(Statistics);

        QMetaObject::connectSlotsByName(Statistics);
    } // setupUi

    void retranslateUi(QWidget *Statistics)
    {
        Statistics->setWindowTitle(QCoreApplication::translate("Statistics", "Form", nullptr));
        btnBack->setText(QCoreApplication::translate("Statistics", "<-", nullptr));
        label->setText(QCoreApplication::translate("Statistics", "Statistics of projects", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Statistics: public Ui_Statistics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICS_H
