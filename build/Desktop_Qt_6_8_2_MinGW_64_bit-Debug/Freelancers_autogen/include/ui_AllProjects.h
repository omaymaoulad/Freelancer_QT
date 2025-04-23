/********************************************************************************
** Form generated from reading UI file 'AllProjects.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLPROJECTS_H
#define UI_ALLPROJECTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllProjects
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineSearch;
    QTableView *tableClients;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelName;
    QLabel *labelClientName;
    QLabel *labelStartDate;
    QLabel *labelEndDate;
    QLabel *labelBudget;
    QLabel *labelStatus;
    QTextEdit *DescriptionText;
    QLabel *label;
    QToolButton *BtnBack;

    void setupUi(QWidget *AllProjects)
    {
        if (AllProjects->objectName().isEmpty())
            AllProjects->setObjectName("AllProjects");
        AllProjects->resize(763, 491);
        frame = new QFrame(AllProjects);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 30, 761, 441));
        frame->setStyleSheet(QString::fromUtf8("background-color: #BDD2B6;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 10, 541, 441));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: #BDD2B6;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"georgia\";\n"
"color: #1F4529;"));

        verticalLayout_2->addWidget(label_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineSearch = new QLineEdit(frame_2);
        lineSearch->setObjectName("lineSearch");
        lineSearch->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        horizontalLayout->addWidget(lineSearch);


        verticalLayout_3->addLayout(horizontalLayout);

        tableClients = new QTableView(frame_2);
        tableClients->setObjectName("tableClients");
        tableClients->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color: #e0777d; font: solid}"));
        tableClients->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableClients->horizontalHeader()->setHighlightSections(true);
        tableClients->verticalHeader()->setVisible(false);
        tableClients->verticalHeader()->setHighlightSections(false);

        verticalLayout_3->addWidget(tableClients);


        verticalLayout_2->addLayout(verticalLayout_3);

        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(540, 0, 221, 231));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelName = new QLabel(layoutWidget);
        labelName->setObjectName("labelName");
        sizePolicy.setHeightForWidth(labelName->sizePolicy().hasHeightForWidth());
        labelName->setSizePolicy(sizePolicy);
        labelName->setStyleSheet(QString::fromUtf8("font: 14pt \"georgia\";\n"
"color: #1F4529;"));

        verticalLayout_4->addWidget(labelName);

        labelClientName = new QLabel(layoutWidget);
        labelClientName->setObjectName("labelClientName");
        sizePolicy.setHeightForWidth(labelClientName->sizePolicy().hasHeightForWidth());
        labelClientName->setSizePolicy(sizePolicy);
        labelClientName->setStyleSheet(QString::fromUtf8("font: 14pt \"georgia\";\n"
"color: #1F4529;"));

        verticalLayout_4->addWidget(labelClientName);

        labelStartDate = new QLabel(layoutWidget);
        labelStartDate->setObjectName("labelStartDate");
        sizePolicy.setHeightForWidth(labelStartDate->sizePolicy().hasHeightForWidth());
        labelStartDate->setSizePolicy(sizePolicy);
        labelStartDate->setStyleSheet(QString::fromUtf8("font: 14pt \"georgia\";\n"
"color: #1F4529;"));

        verticalLayout_4->addWidget(labelStartDate);

        labelEndDate = new QLabel(layoutWidget);
        labelEndDate->setObjectName("labelEndDate");
        sizePolicy.setHeightForWidth(labelEndDate->sizePolicy().hasHeightForWidth());
        labelEndDate->setSizePolicy(sizePolicy);
        labelEndDate->setStyleSheet(QString::fromUtf8("font: 14pt \"georgia\";\n"
"color: #1F4529;"));

        verticalLayout_4->addWidget(labelEndDate);

        labelBudget = new QLabel(layoutWidget);
        labelBudget->setObjectName("labelBudget");
        sizePolicy.setHeightForWidth(labelBudget->sizePolicy().hasHeightForWidth());
        labelBudget->setSizePolicy(sizePolicy);
        labelBudget->setStyleSheet(QString::fromUtf8("font: 14pt \"georgia\";\n"
"color: #1F4529;"));

        verticalLayout_4->addWidget(labelBudget);

        labelStatus = new QLabel(layoutWidget);
        labelStatus->setObjectName("labelStatus");
        sizePolicy.setHeightForWidth(labelStatus->sizePolicy().hasHeightForWidth());
        labelStatus->setSizePolicy(sizePolicy);
        labelStatus->setStyleSheet(QString::fromUtf8("font: 14pt \"georgia\";\n"
"color: #1F4529;"));

        verticalLayout_4->addWidget(labelStatus);

        DescriptionText = new QTextEdit(frame);
        DescriptionText->setObjectName("DescriptionText");
        DescriptionText->setGeometry(QRect(543, 270, 211, 171));
        DescriptionText->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"border: 1px solid #A0A0A0;\n"
"    padding: 4px;\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF;\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(560, 240, 121, 21));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"georgia\";\n"
"color: #1F4529;"));
        BtnBack = new QToolButton(AllProjects);
        BtnBack->setObjectName("BtnBack");
        BtnBack->setGeometry(QRect(0, 10, 27, 19));
        BtnBack->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"   color: white;\n"
"    background-color:#6F826A;\n"
"    border-radius: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"QToolButton:hover{\n"
"  background-color:#BBD8A3;\n"
"}"));

        retranslateUi(AllProjects);

        QMetaObject::connectSlotsByName(AllProjects);
    } // setupUi

    void retranslateUi(QWidget *AllProjects)
    {
        AllProjects->setWindowTitle(QCoreApplication::translate("AllProjects", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("AllProjects", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Value to search :</span></p></body></html>", nullptr));
        labelName->setText(QCoreApplication::translate("AllProjects", "<html><head/><body><p><span style=\" font-weight:700;\"> Project Name :</span></p></body></html>", nullptr));
        labelClientName->setText(QCoreApplication::translate("AllProjects", "<html><head/><body><p><span style=\" font-weight:700;\">Client Name :</span></p></body></html>", nullptr));
        labelStartDate->setText(QCoreApplication::translate("AllProjects", "<html><head/><body><p><span style=\" font-weight:700;\">Start Date:</span></p></body></html>", nullptr));
        labelEndDate->setText(QCoreApplication::translate("AllProjects", "<html><head/><body><p><span style=\" font-weight:700;\">End Date:</span></p></body></html>", nullptr));
        labelBudget->setText(QCoreApplication::translate("AllProjects", "<html><head/><body><p><span style=\" font-weight:700;\">Budget:</span></p></body></html>", nullptr));
        labelStatus->setText(QCoreApplication::translate("AllProjects", "<html><head/><body><p><span style=\" font-weight:700;\">Status :</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("AllProjects", "Description :", nullptr));
        BtnBack->setText(QCoreApplication::translate("AllProjects", "<--", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllProjects: public Ui_AllProjects {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLPROJECTS_H
