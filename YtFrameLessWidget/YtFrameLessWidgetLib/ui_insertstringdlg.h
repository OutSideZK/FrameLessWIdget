/********************************************************************************
** Form generated from reading UI file 'insertstringdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTSTRINGDLG_H
#define UI_INSERTSTRINGDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InsertStringDlg
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QFrame *WDNumber;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_20;
    QPushButton *pushButton_23;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_14;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_27;
    QPushButton *pushButton_32;
    QPushButton *pushButton_28;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QPushButton *pushButton_29;
    QPushButton *pushButton_33;
    QPushButton *pushButton_31;
    QPushButton *pushButton_30;
    QPushButton *pushButton_44;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_37;
    QPushButton *pushButton_42;
    QPushButton *pushButton_40;
    QPushButton *pushButton_36;
    QPushButton *pushButton_35;
    QPushButton *pushButton_38;
    QPushButton *pushButton_41;
    QPushButton *pushButton_39;
    QPushButton *pushButton_34;
    QPushButton *pushButton_43;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_48;
    QPushButton *pushButton_47;
    QPushButton *pushButton_49;
    QPushButton *pushButton_46;
    QPushButton *pushButton_45;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *btn_clear;
    QPushButton *btn_del;
    QLabel *label;
    QPushButton *btn_confirm;
    QPushButton *btn_cancel;

    void setupUi(QDialog *InsertStringDlg)
    {
        if (InsertStringDlg->objectName().isEmpty())
            InsertStringDlg->setObjectName(QString::fromUtf8("InsertStringDlg"));
        InsertStringDlg->resize(674, 345);
        InsertStringDlg->setMinimumSize(QSize(674, 345));
        InsertStringDlg->setMaximumSize(QSize(674, 345));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowicon/image/windowsicon/input1.png"), QSize(), QIcon::Normal, QIcon::Off);
        InsertStringDlg->setWindowIcon(icon);
        gridLayout = new QGridLayout(InsertStringDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        lineEdit = new QLineEdit(InsertStringDlg);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(0, 40));
        lineEdit->setMaximumSize(QSize(16777215, 40));
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        WDNumber = new QFrame(InsertStringDlg);
        WDNumber->setObjectName(QString::fromUtf8("WDNumber"));
        WDNumber->setMinimumSize(QSize(561, 251));
        WDNumber->setMaximumSize(QSize(16777215, 251));
        WDNumber->setFrameShape(QFrame::StyledPanel);
        WDNumber->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(WDNumber);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_2 = new QPushButton(WDNumber);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(WDNumber);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(WDNumber);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(WDNumber);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(WDNumber);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(WDNumber);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(WDNumber);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(WDNumber);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(WDNumber);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_10);

        pushButton = new QPushButton(WDNumber);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_15 = new QPushButton(WDNumber);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_15);

        pushButton_16 = new QPushButton(WDNumber);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_16);

        pushButton_17 = new QPushButton(WDNumber);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        sizePolicy.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_17);

        pushButton_20 = new QPushButton(WDNumber);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        sizePolicy.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_20);

        pushButton_23 = new QPushButton(WDNumber);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        sizePolicy.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_23);

        pushButton_21 = new QPushButton(WDNumber);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        sizePolicy.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_21);

        pushButton_22 = new QPushButton(WDNumber);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        sizePolicy.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_22);

        pushButton_18 = new QPushButton(WDNumber);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_18);

        pushButton_19 = new QPushButton(WDNumber);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        sizePolicy.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_19);

        pushButton_14 = new QPushButton(WDNumber);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_14);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_27 = new QPushButton(WDNumber);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        sizePolicy.setHeightForWidth(pushButton_27->sizePolicy().hasHeightForWidth());
        pushButton_27->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(pushButton_27);

        pushButton_32 = new QPushButton(WDNumber);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));
        sizePolicy.setHeightForWidth(pushButton_32->sizePolicy().hasHeightForWidth());
        pushButton_32->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(pushButton_32);

        pushButton_28 = new QPushButton(WDNumber);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));
        sizePolicy.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(pushButton_28);

        pushButton_25 = new QPushButton(WDNumber);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        sizePolicy.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(pushButton_25);

        pushButton_26 = new QPushButton(WDNumber);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        sizePolicy.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(pushButton_26);

        pushButton_29 = new QPushButton(WDNumber);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));
        sizePolicy.setHeightForWidth(pushButton_29->sizePolicy().hasHeightForWidth());
        pushButton_29->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(pushButton_29);

        pushButton_33 = new QPushButton(WDNumber);
        pushButton_33->setObjectName(QString::fromUtf8("pushButton_33"));
        sizePolicy.setHeightForWidth(pushButton_33->sizePolicy().hasHeightForWidth());
        pushButton_33->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(pushButton_33);

        pushButton_31 = new QPushButton(WDNumber);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        sizePolicy.setHeightForWidth(pushButton_31->sizePolicy().hasHeightForWidth());
        pushButton_31->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(pushButton_31);

        pushButton_30 = new QPushButton(WDNumber);
        pushButton_30->setObjectName(QString::fromUtf8("pushButton_30"));
        sizePolicy.setHeightForWidth(pushButton_30->sizePolicy().hasHeightForWidth());
        pushButton_30->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(pushButton_30);

        pushButton_44 = new QPushButton(WDNumber);
        pushButton_44->setObjectName(QString::fromUtf8("pushButton_44"));
        sizePolicy.setHeightForWidth(pushButton_44->sizePolicy().hasHeightForWidth());
        pushButton_44->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(pushButton_44);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_37 = new QPushButton(WDNumber);
        pushButton_37->setObjectName(QString::fromUtf8("pushButton_37"));
        sizePolicy.setHeightForWidth(pushButton_37->sizePolicy().hasHeightForWidth());
        pushButton_37->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(pushButton_37);

        pushButton_42 = new QPushButton(WDNumber);
        pushButton_42->setObjectName(QString::fromUtf8("pushButton_42"));
        sizePolicy.setHeightForWidth(pushButton_42->sizePolicy().hasHeightForWidth());
        pushButton_42->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(pushButton_42);

        pushButton_40 = new QPushButton(WDNumber);
        pushButton_40->setObjectName(QString::fromUtf8("pushButton_40"));
        sizePolicy.setHeightForWidth(pushButton_40->sizePolicy().hasHeightForWidth());
        pushButton_40->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(pushButton_40);

        pushButton_36 = new QPushButton(WDNumber);
        pushButton_36->setObjectName(QString::fromUtf8("pushButton_36"));
        sizePolicy.setHeightForWidth(pushButton_36->sizePolicy().hasHeightForWidth());
        pushButton_36->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(pushButton_36);

        pushButton_35 = new QPushButton(WDNumber);
        pushButton_35->setObjectName(QString::fromUtf8("pushButton_35"));
        sizePolicy.setHeightForWidth(pushButton_35->sizePolicy().hasHeightForWidth());
        pushButton_35->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(pushButton_35);

        pushButton_38 = new QPushButton(WDNumber);
        pushButton_38->setObjectName(QString::fromUtf8("pushButton_38"));
        sizePolicy.setHeightForWidth(pushButton_38->sizePolicy().hasHeightForWidth());
        pushButton_38->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(pushButton_38);

        pushButton_41 = new QPushButton(WDNumber);
        pushButton_41->setObjectName(QString::fromUtf8("pushButton_41"));
        sizePolicy.setHeightForWidth(pushButton_41->sizePolicy().hasHeightForWidth());
        pushButton_41->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(pushButton_41);

        pushButton_39 = new QPushButton(WDNumber);
        pushButton_39->setObjectName(QString::fromUtf8("pushButton_39"));
        sizePolicy.setHeightForWidth(pushButton_39->sizePolicy().hasHeightForWidth());
        pushButton_39->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(pushButton_39);

        pushButton_34 = new QPushButton(WDNumber);
        pushButton_34->setObjectName(QString::fromUtf8("pushButton_34"));
        sizePolicy.setHeightForWidth(pushButton_34->sizePolicy().hasHeightForWidth());
        pushButton_34->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(pushButton_34);

        pushButton_43 = new QPushButton(WDNumber);
        pushButton_43->setObjectName(QString::fromUtf8("pushButton_43"));
        sizePolicy.setHeightForWidth(pushButton_43->sizePolicy().hasHeightForWidth());
        pushButton_43->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(pushButton_43);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_48 = new QPushButton(WDNumber);
        pushButton_48->setObjectName(QString::fromUtf8("pushButton_48"));
        sizePolicy.setHeightForWidth(pushButton_48->sizePolicy().hasHeightForWidth());
        pushButton_48->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_48);

        pushButton_47 = new QPushButton(WDNumber);
        pushButton_47->setObjectName(QString::fromUtf8("pushButton_47"));
        sizePolicy.setHeightForWidth(pushButton_47->sizePolicy().hasHeightForWidth());
        pushButton_47->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_47);

        pushButton_49 = new QPushButton(WDNumber);
        pushButton_49->setObjectName(QString::fromUtf8("pushButton_49"));
        sizePolicy.setHeightForWidth(pushButton_49->sizePolicy().hasHeightForWidth());
        pushButton_49->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_49);

        pushButton_46 = new QPushButton(WDNumber);
        pushButton_46->setObjectName(QString::fromUtf8("pushButton_46"));
        sizePolicy.setHeightForWidth(pushButton_46->sizePolicy().hasHeightForWidth());
        pushButton_46->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_46);

        pushButton_45 = new QPushButton(WDNumber);
        pushButton_45->setObjectName(QString::fromUtf8("pushButton_45"));
        sizePolicy.setHeightForWidth(pushButton_45->sizePolicy().hasHeightForWidth());
        pushButton_45->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_45);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 5);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addWidget(WDNumber, 1, 0, 1, 1);

        widget = new QWidget(InsertStringDlg);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 0, 2, 0);
        btn_clear = new QPushButton(widget);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy1);
        btn_clear->setMinimumSize(QSize(70, 0));

        gridLayout_2->addWidget(btn_clear, 0, 0, 1, 1);

        btn_del = new QPushButton(widget);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        sizePolicy1.setHeightForWidth(btn_del->sizePolicy().hasHeightForWidth());
        btn_del->setSizePolicy(sizePolicy1);
        btn_del->setMinimumSize(QSize(70, 0));

        gridLayout_2->addWidget(btn_del, 0, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 2, 1, 1);

        btn_confirm = new QPushButton(widget);
        btn_confirm->setObjectName(QString::fromUtf8("btn_confirm"));
        sizePolicy1.setHeightForWidth(btn_confirm->sizePolicy().hasHeightForWidth());
        btn_confirm->setSizePolicy(sizePolicy1);
        btn_confirm->setMinimumSize(QSize(70, 0));

        gridLayout_2->addWidget(btn_confirm, 0, 3, 1, 1);

        btn_cancel = new QPushButton(widget);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        sizePolicy1.setHeightForWidth(btn_cancel->sizePolicy().hasHeightForWidth());
        btn_cancel->setSizePolicy(sizePolicy1);
        btn_cancel->setMinimumSize(QSize(70, 0));

        gridLayout_2->addWidget(btn_cancel, 0, 4, 1, 1);

        gridLayout_2->setColumnStretch(2, 1);

        gridLayout->addWidget(widget, 2, 0, 1, 1);


        retranslateUi(InsertStringDlg);

        QMetaObject::connectSlotsByName(InsertStringDlg);
    } // setupUi

    void retranslateUi(QDialog *InsertStringDlg)
    {
        InsertStringDlg->setWindowTitle(QCoreApplication::translate("InsertStringDlg", "\350\276\223\345\205\245\345\255\227\347\254\246\344\270\262", nullptr));
        pushButton_2->setText(QCoreApplication::translate("InsertStringDlg", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("InsertStringDlg", "2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("InsertStringDlg", "3", nullptr));
        pushButton_5->setText(QCoreApplication::translate("InsertStringDlg", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("InsertStringDlg", "5", nullptr));
        pushButton_7->setText(QCoreApplication::translate("InsertStringDlg", "6", nullptr));
        pushButton_8->setText(QCoreApplication::translate("InsertStringDlg", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("InsertStringDlg", "8", nullptr));
        pushButton_10->setText(QCoreApplication::translate("InsertStringDlg", "9", nullptr));
        pushButton->setText(QCoreApplication::translate("InsertStringDlg", "0", nullptr));
        pushButton_15->setText(QCoreApplication::translate("InsertStringDlg", "Q", nullptr));
        pushButton_16->setText(QCoreApplication::translate("InsertStringDlg", "W", nullptr));
        pushButton_17->setText(QCoreApplication::translate("InsertStringDlg", "E", nullptr));
        pushButton_20->setText(QCoreApplication::translate("InsertStringDlg", "R", nullptr));
        pushButton_23->setText(QCoreApplication::translate("InsertStringDlg", "T", nullptr));
        pushButton_21->setText(QCoreApplication::translate("InsertStringDlg", "Y", nullptr));
        pushButton_22->setText(QCoreApplication::translate("InsertStringDlg", "U", nullptr));
        pushButton_18->setText(QCoreApplication::translate("InsertStringDlg", "I", nullptr));
        pushButton_19->setText(QCoreApplication::translate("InsertStringDlg", "O", nullptr));
        pushButton_14->setText(QCoreApplication::translate("InsertStringDlg", "P", nullptr));
        pushButton_27->setText(QCoreApplication::translate("InsertStringDlg", "A", nullptr));
        pushButton_32->setText(QCoreApplication::translate("InsertStringDlg", "S", nullptr));
        pushButton_28->setText(QCoreApplication::translate("InsertStringDlg", "D", nullptr));
        pushButton_25->setText(QCoreApplication::translate("InsertStringDlg", "F", nullptr));
        pushButton_26->setText(QCoreApplication::translate("InsertStringDlg", "G", nullptr));
        pushButton_29->setText(QCoreApplication::translate("InsertStringDlg", "H", nullptr));
        pushButton_33->setText(QCoreApplication::translate("InsertStringDlg", "J", nullptr));
        pushButton_31->setText(QCoreApplication::translate("InsertStringDlg", "K", nullptr));
        pushButton_30->setText(QCoreApplication::translate("InsertStringDlg", "L", nullptr));
        pushButton_44->setText(QCoreApplication::translate("InsertStringDlg", "_", nullptr));
        pushButton_37->setText(QCoreApplication::translate("InsertStringDlg", "Z", nullptr));
        pushButton_42->setText(QCoreApplication::translate("InsertStringDlg", "X", nullptr));
        pushButton_40->setText(QCoreApplication::translate("InsertStringDlg", "C", nullptr));
        pushButton_36->setText(QCoreApplication::translate("InsertStringDlg", "V", nullptr));
        pushButton_35->setText(QCoreApplication::translate("InsertStringDlg", "B", nullptr));
        pushButton_38->setText(QCoreApplication::translate("InsertStringDlg", "N", nullptr));
        pushButton_41->setText(QCoreApplication::translate("InsertStringDlg", "M", nullptr));
        pushButton_39->setText(QCoreApplication::translate("InsertStringDlg", "(", nullptr));
        pushButton_34->setText(QCoreApplication::translate("InsertStringDlg", ")", nullptr));
        pushButton_43->setText(QCoreApplication::translate("InsertStringDlg", "#", nullptr));
        pushButton_48->setText(QCoreApplication::translate("InsertStringDlg", "+", nullptr));
        pushButton_47->setText(QCoreApplication::translate("InsertStringDlg", "-", nullptr));
        pushButton_49->setText(QCoreApplication::translate("InsertStringDlg", "Space", nullptr));
        pushButton_46->setText(QCoreApplication::translate("InsertStringDlg", "*", nullptr));
        pushButton_45->setText(QCoreApplication::translate("InsertStringDlg", "/", nullptr));
        btn_clear->setText(QCoreApplication::translate("InsertStringDlg", "\346\270\205\351\231\244", nullptr));
        btn_del->setText(QCoreApplication::translate("InsertStringDlg", "\345\233\236\351\200\200", nullptr));
        label->setText(QString());
        btn_confirm->setText(QCoreApplication::translate("InsertStringDlg", "\347\241\256\350\256\244", nullptr));
        btn_cancel->setText(QCoreApplication::translate("InsertStringDlg", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InsertStringDlg: public Ui_InsertStringDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTSTRINGDLG_H
