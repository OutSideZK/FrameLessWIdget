/********************************************************************************
** Form generated from reading UI file 'inputdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTDLG_H
#define UI_INPUTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InputDlg
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *PB_Confirm;
    QPushButton *PB_Cancle;

    void setupUi(QDialog *InputDlg)
    {
        if (InputDlg->objectName().isEmpty())
            InputDlg->setObjectName(QString::fromUtf8("InputDlg"));
        InputDlg->resize(451, 51);
        InputDlg->setMinimumSize(QSize(451, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowicon/image/windowsicon/input1.png"), QSize(), QIcon::Normal, QIcon::Off);
        InputDlg->setWindowIcon(icon);
        gridLayout = new QGridLayout(InputDlg);
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        lineEdit = new QLineEdit(InputDlg);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        PB_Confirm = new QPushButton(InputDlg);
        PB_Confirm->setObjectName(QString::fromUtf8("PB_Confirm"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PB_Confirm->sizePolicy().hasHeightForWidth());
        PB_Confirm->setSizePolicy(sizePolicy1);
        PB_Confirm->setMinimumSize(QSize(0, 45));

        gridLayout->addWidget(PB_Confirm, 0, 1, 1, 1);

        PB_Cancle = new QPushButton(InputDlg);
        PB_Cancle->setObjectName(QString::fromUtf8("PB_Cancle"));
        sizePolicy1.setHeightForWidth(PB_Cancle->sizePolicy().hasHeightForWidth());
        PB_Cancle->setSizePolicy(sizePolicy1);
        PB_Cancle->setMinimumSize(QSize(0, 45));

        gridLayout->addWidget(PB_Cancle, 0, 2, 1, 1);


        retranslateUi(InputDlg);

        QMetaObject::connectSlotsByName(InputDlg);
    } // setupUi

    void retranslateUi(QDialog *InputDlg)
    {
        InputDlg->setWindowTitle(QCoreApplication::translate("InputDlg", "\350\276\223\345\205\245\347\252\227\345\217\243", nullptr));
        PB_Confirm->setText(QCoreApplication::translate("InputDlg", "\347\241\256\350\256\244", nullptr));
        PB_Cancle->setText(QCoreApplication::translate("InputDlg", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputDlg: public Ui_InputDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTDLG_H
