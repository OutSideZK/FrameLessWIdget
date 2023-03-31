/********************************************************************************
** Form generated from reading UI file 'insertnumberdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTNUMBERDLG_H
#define UI_INSERTNUMBERDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_InsertNumberDlg
{
public:
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit;
    QFrame *WDNumber;
    QGridLayout *gridLayout;
    QPushButton *PB_10;
    QPushButton *PB_11;
    QPushButton *PB_9;
    QPushButton *PB_7;
    QPushButton *PB_8;
    QPushButton *PB_6;
    QPushButton *PB_3;
    QPushButton *PB_5;
    QPushButton *PB_4;
    QPushButton *PB_0;
    QPushButton *PB_1;
    QPushButton *PB_2;
    QPushButton *PB_12;
    QPushButton *PB_13;
    QPushButton *PB_14;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *PB_Confirm;
    QPushButton *PB_Cancle;

    void setupUi(QDialog *InsertNumberDlg)
    {
        if (InsertNumberDlg->objectName().isEmpty())
            InsertNumberDlg->setObjectName(QString::fromUtf8("InsertNumberDlg"));
        InsertNumberDlg->resize(322, 387);
        InsertNumberDlg->setMinimumSize(QSize(322, 387));
        InsertNumberDlg->setMaximumSize(QSize(322, 387));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowicon/image/windowsicon/input1.png"), QSize(), QIcon::Normal, QIcon::Off);
        InsertNumberDlg->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(InsertNumberDlg);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(3, 3, 3, 3);
        lineEdit = new QLineEdit(InsertNumberDlg);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(0, 45));
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit, 0, 0, 1, 1);

        WDNumber = new QFrame(InsertNumberDlg);
        WDNumber->setObjectName(QString::fromUtf8("WDNumber"));
        WDNumber->setFrameShape(QFrame::StyledPanel);
        WDNumber->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(WDNumber);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        PB_10 = new QPushButton(WDNumber);
        PB_10->setObjectName(QString::fromUtf8("PB_10"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PB_10->sizePolicy().hasHeightForWidth());
        PB_10->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        PB_10->setFont(font);

        gridLayout->addWidget(PB_10, 3, 1, 1, 1);

        PB_11 = new QPushButton(WDNumber);
        PB_11->setObjectName(QString::fromUtf8("PB_11"));
        sizePolicy1.setHeightForWidth(PB_11->sizePolicy().hasHeightForWidth());
        PB_11->setSizePolicy(sizePolicy1);
        PB_11->setFont(font);

        gridLayout->addWidget(PB_11, 3, 2, 1, 1);

        PB_9 = new QPushButton(WDNumber);
        PB_9->setObjectName(QString::fromUtf8("PB_9"));
        sizePolicy1.setHeightForWidth(PB_9->sizePolicy().hasHeightForWidth());
        PB_9->setSizePolicy(sizePolicy1);
        PB_9->setFont(font);

        gridLayout->addWidget(PB_9, 3, 0, 1, 1);

        PB_7 = new QPushButton(WDNumber);
        PB_7->setObjectName(QString::fromUtf8("PB_7"));
        sizePolicy1.setHeightForWidth(PB_7->sizePolicy().hasHeightForWidth());
        PB_7->setSizePolicy(sizePolicy1);
        PB_7->setFont(font);

        gridLayout->addWidget(PB_7, 2, 1, 1, 1);

        PB_8 = new QPushButton(WDNumber);
        PB_8->setObjectName(QString::fromUtf8("PB_8"));
        sizePolicy1.setHeightForWidth(PB_8->sizePolicy().hasHeightForWidth());
        PB_8->setSizePolicy(sizePolicy1);
        PB_8->setFont(font);

        gridLayout->addWidget(PB_8, 2, 2, 1, 1);

        PB_6 = new QPushButton(WDNumber);
        PB_6->setObjectName(QString::fromUtf8("PB_6"));
        sizePolicy1.setHeightForWidth(PB_6->sizePolicy().hasHeightForWidth());
        PB_6->setSizePolicy(sizePolicy1);
        PB_6->setFont(font);

        gridLayout->addWidget(PB_6, 2, 0, 1, 1);

        PB_3 = new QPushButton(WDNumber);
        PB_3->setObjectName(QString::fromUtf8("PB_3"));
        sizePolicy1.setHeightForWidth(PB_3->sizePolicy().hasHeightForWidth());
        PB_3->setSizePolicy(sizePolicy1);
        PB_3->setFont(font);

        gridLayout->addWidget(PB_3, 1, 0, 1, 1);

        PB_5 = new QPushButton(WDNumber);
        PB_5->setObjectName(QString::fromUtf8("PB_5"));
        sizePolicy1.setHeightForWidth(PB_5->sizePolicy().hasHeightForWidth());
        PB_5->setSizePolicy(sizePolicy1);
        PB_5->setFont(font);

        gridLayout->addWidget(PB_5, 1, 2, 1, 1);

        PB_4 = new QPushButton(WDNumber);
        PB_4->setObjectName(QString::fromUtf8("PB_4"));
        sizePolicy1.setHeightForWidth(PB_4->sizePolicy().hasHeightForWidth());
        PB_4->setSizePolicy(sizePolicy1);
        PB_4->setFont(font);

        gridLayout->addWidget(PB_4, 1, 1, 1, 1);

        PB_0 = new QPushButton(WDNumber);
        PB_0->setObjectName(QString::fromUtf8("PB_0"));
        sizePolicy1.setHeightForWidth(PB_0->sizePolicy().hasHeightForWidth());
        PB_0->setSizePolicy(sizePolicy1);
        PB_0->setFont(font);

        gridLayout->addWidget(PB_0, 0, 0, 1, 1);

        PB_1 = new QPushButton(WDNumber);
        PB_1->setObjectName(QString::fromUtf8("PB_1"));
        sizePolicy1.setHeightForWidth(PB_1->sizePolicy().hasHeightForWidth());
        PB_1->setSizePolicy(sizePolicy1);
        PB_1->setFont(font);

        gridLayout->addWidget(PB_1, 0, 1, 1, 1);

        PB_2 = new QPushButton(WDNumber);
        PB_2->setObjectName(QString::fromUtf8("PB_2"));
        sizePolicy1.setHeightForWidth(PB_2->sizePolicy().hasHeightForWidth());
        PB_2->setSizePolicy(sizePolicy1);
        PB_2->setFont(font);

        gridLayout->addWidget(PB_2, 0, 2, 1, 1);

        PB_12 = new QPushButton(WDNumber);
        PB_12->setObjectName(QString::fromUtf8("PB_12"));
        sizePolicy1.setHeightForWidth(PB_12->sizePolicy().hasHeightForWidth());
        PB_12->setSizePolicy(sizePolicy1);
        PB_12->setFont(font);

        gridLayout->addWidget(PB_12, 4, 0, 1, 1);

        PB_13 = new QPushButton(WDNumber);
        PB_13->setObjectName(QString::fromUtf8("PB_13"));
        sizePolicy1.setHeightForWidth(PB_13->sizePolicy().hasHeightForWidth());
        PB_13->setSizePolicy(sizePolicy1);
        PB_13->setFont(font);

        gridLayout->addWidget(PB_13, 4, 1, 1, 1);

        PB_14 = new QPushButton(WDNumber);
        PB_14->setObjectName(QString::fromUtf8("PB_14"));
        sizePolicy1.setHeightForWidth(PB_14->sizePolicy().hasHeightForWidth());
        PB_14->setSizePolicy(sizePolicy1);
        PB_14->setFont(font);

        gridLayout->addWidget(PB_14, 4, 2, 1, 1);


        gridLayout_2->addWidget(WDNumber, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        PB_Confirm = new QPushButton(InsertNumberDlg);
        PB_Confirm->setObjectName(QString::fromUtf8("PB_Confirm"));
        PB_Confirm->setMinimumSize(QSize(70, 40));

        horizontalLayout_7->addWidget(PB_Confirm);

        PB_Cancle = new QPushButton(InsertNumberDlg);
        PB_Cancle->setObjectName(QString::fromUtf8("PB_Cancle"));
        PB_Cancle->setMinimumSize(QSize(70, 40));

        horizontalLayout_7->addWidget(PB_Cancle);


        gridLayout_2->addLayout(horizontalLayout_7, 2, 0, 1, 1);


        retranslateUi(InsertNumberDlg);

        QMetaObject::connectSlotsByName(InsertNumberDlg);
    } // setupUi

    void retranslateUi(QDialog *InsertNumberDlg)
    {
        InsertNumberDlg->setWindowTitle(QCoreApplication::translate("InsertNumberDlg", "\350\276\223\345\205\245\346\225\260\345\255\227", nullptr));
        PB_10->setText(QCoreApplication::translate("InsertNumberDlg", ".", nullptr));
        PB_11->setText(QCoreApplication::translate("InsertNumberDlg", "Clear", nullptr));
        PB_9->setText(QCoreApplication::translate("InsertNumberDlg", "0", nullptr));
        PB_7->setText(QCoreApplication::translate("InsertNumberDlg", "8", nullptr));
        PB_8->setText(QCoreApplication::translate("InsertNumberDlg", "9", nullptr));
        PB_6->setText(QCoreApplication::translate("InsertNumberDlg", "7", nullptr));
        PB_3->setText(QCoreApplication::translate("InsertNumberDlg", "4", nullptr));
        PB_5->setText(QCoreApplication::translate("InsertNumberDlg", "6", nullptr));
        PB_4->setText(QCoreApplication::translate("InsertNumberDlg", "5", nullptr));
        PB_0->setText(QCoreApplication::translate("InsertNumberDlg", "1", nullptr));
        PB_1->setText(QCoreApplication::translate("InsertNumberDlg", "2", nullptr));
        PB_2->setText(QCoreApplication::translate("InsertNumberDlg", "3", nullptr));
        PB_12->setText(QCoreApplication::translate("InsertNumberDlg", "-", nullptr));
        PB_13->setText(QCoreApplication::translate("InsertNumberDlg", "+", nullptr));
        PB_14->setText(QCoreApplication::translate("InsertNumberDlg", "<-", nullptr));
        PB_Confirm->setText(QCoreApplication::translate("InsertNumberDlg", "\347\241\256\350\256\244", nullptr));
        PB_Cancle->setText(QCoreApplication::translate("InsertNumberDlg", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InsertNumberDlg: public Ui_InsertNumberDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTNUMBERDLG_H
