/********************************************************************************
** Form generated from reading UI file 'allclient.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLCLIENT_H
#define UI_ALLCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllClients
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
    QLabel *labelEmail;
    QLabel *labelPhone;
    QLabel *labelCountry;
    QLabel *labelCompany;
    QLabel *labelClientType;
    QLabel *coverLabel;
    QToolButton *BtnBack;

    void setupUi(QWidget *AllClients)
    {
        if (AllClients->objectName().isEmpty())
            AllClients->setObjectName("AllClients");
        AllClients->resize(767, 504);
        AllClients->setStyleSheet(QString::fromUtf8("background-color:#C7D9DD;"));
        frame = new QFrame(AllClients);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 40, 741, 451));
        frame->setStyleSheet(QString::fromUtf8("background-color:#B5A8D5;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 10, 541, 441));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:#B5A8D5;"));
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
"color:#211C84;"));

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
        layoutWidget->setGeometry(QRect(550, 220, 191, 221));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelName = new QLabel(layoutWidget);
        labelName->setObjectName("labelName");
        sizePolicy.setHeightForWidth(labelName->sizePolicy().hasHeightForWidth());
        labelName->setSizePolicy(sizePolicy);
        labelName->setStyleSheet(QString::fromUtf8("font: 14pt \"georgia\";\n"
"color:#211C84;"));

        verticalLayout_4->addWidget(labelName);

        labelEmail = new QLabel(layoutWidget);
        labelEmail->setObjectName("labelEmail");
        sizePolicy.setHeightForWidth(labelEmail->sizePolicy().hasHeightForWidth());
        labelEmail->setSizePolicy(sizePolicy);
        labelEmail->setStyleSheet(QString::fromUtf8("font: 14pt \"georgia\";\n"
"color:#211C84;"));

        verticalLayout_4->addWidget(labelEmail);

        labelPhone = new QLabel(layoutWidget);
        labelPhone->setObjectName("labelPhone");
        sizePolicy.setHeightForWidth(labelPhone->sizePolicy().hasHeightForWidth());
        labelPhone->setSizePolicy(sizePolicy);
        labelPhone->setStyleSheet(QString::fromUtf8("font: 14pt \"georgia\";\n"
"color:#211C84;"));

        verticalLayout_4->addWidget(labelPhone);

        labelCountry = new QLabel(layoutWidget);
        labelCountry->setObjectName("labelCountry");
        sizePolicy.setHeightForWidth(labelCountry->sizePolicy().hasHeightForWidth());
        labelCountry->setSizePolicy(sizePolicy);
        labelCountry->setStyleSheet(QString::fromUtf8("font: 14pt \"georgia\";\n"
"color:#211C84;"));

        verticalLayout_4->addWidget(labelCountry);

        labelCompany = new QLabel(layoutWidget);
        labelCompany->setObjectName("labelCompany");
        sizePolicy.setHeightForWidth(labelCompany->sizePolicy().hasHeightForWidth());
        labelCompany->setSizePolicy(sizePolicy);
        labelCompany->setStyleSheet(QString::fromUtf8("font: 14pt \"georgia\";\n"
"color:#211C84;"));

        verticalLayout_4->addWidget(labelCompany);

        labelClientType = new QLabel(layoutWidget);
        labelClientType->setObjectName("labelClientType");
        sizePolicy.setHeightForWidth(labelClientType->sizePolicy().hasHeightForWidth());
        labelClientType->setSizePolicy(sizePolicy);
        labelClientType->setStyleSheet(QString::fromUtf8("font: 14pt \"georgia\";\n"
"color:#211C84;"));

        verticalLayout_4->addWidget(labelClientType);

        coverLabel = new QLabel(frame);
        coverLabel->setObjectName("coverLabel");
        coverLabel->setGeometry(QRect(560, 0, 171, 214));
        coverLabel->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        coverLabel->setStyleSheet(QString::fromUtf8("\n"
"border-color: rgb(0, 0, 0);"));
        coverLabel->setFrameShape(QFrame::Shape::Box);
        coverLabel->setFrameShadow(QFrame::Shadow::Raised);
        coverLabel->setMidLineWidth(1);
        coverLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/client.jpg")));
        coverLabel->setScaledContents(true);
        BtnBack = new QToolButton(AllClients);
        BtnBack->setObjectName("BtnBack");
        BtnBack->setGeometry(QRect(10, 0, 31, 31));
        BtnBack->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"   color: white;\n"
"   background-color:#B5A8D5;\n"
"    border-radius: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"QToolButton:hover{\n"
"  background-color: #2980b9;\n"
"}"));

        retranslateUi(AllClients);

        QMetaObject::connectSlotsByName(AllClients);
    } // setupUi

    void retranslateUi(QWidget *AllClients)
    {
        AllClients->setWindowTitle(QCoreApplication::translate("AllClients", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("AllClients", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Value to search :</span></p></body></html>", nullptr));
        labelName->setText(QCoreApplication::translate("AllClients", "<html><head/><body><p><span style=\" font-weight:700;\">Name :</span></p></body></html>", nullptr));
        labelEmail->setText(QCoreApplication::translate("AllClients", "<html><head/><body><p><span style=\" font-weight:700;\">Email :</span></p></body></html>", nullptr));
        labelPhone->setText(QCoreApplication::translate("AllClients", "<html><head/><body><p><span style=\" font-weight:700;\">Phone:</span></p></body></html>", nullptr));
        labelCountry->setText(QCoreApplication::translate("AllClients", "<html><head/><body><p><span style=\" font-weight:700;\">Country:</span></p></body></html>", nullptr));
        labelCompany->setText(QCoreApplication::translate("AllClients", "<html><head/><body><p><span style=\" font-weight:700;\">Company :</span></p></body></html>", nullptr));
        labelClientType->setText(QCoreApplication::translate("AllClients", "<html><head/><body><p><span style=\" font-weight:700;\">Client type :</span></p></body></html>", nullptr));
        coverLabel->setText(QString());
        BtnBack->setText(QCoreApplication::translate("AllClients", "<-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllClients: public Ui_AllClients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLCLIENT_H
