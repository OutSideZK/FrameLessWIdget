/********************************************************************************
** Form generated from reading UI file 'changepassworddlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORDDLG_H
#define UI_CHANGEPASSWORDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePassWordDlg
{
public:
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *linePassword;
    QPushButton *btnCheck;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *linePassword_New;
    QLineEdit *linePassword_NewCheck;
    QLabel *label_3;
    QWidget *widget_3;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnLogin;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ChangePassWordDlg)
    {
        if (ChangePassWordDlg->objectName().isEmpty())
            ChangePassWordDlg->setObjectName(QString::fromUtf8("ChangePassWordDlg"));
        ChangePassWordDlg->resize(380, 203);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ChangePassWordDlg->sizePolicy().hasHeightForWidth());
        ChangePassWordDlg->setSizePolicy(sizePolicy);
        ChangePassWordDlg->setStyleSheet(QString::fromUtf8(""));
        gridLayout_5 = new QGridLayout(ChangePassWordDlg);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        widget = new QWidget(ChangePassWordDlg);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(150, 45));
        label->setMaximumSize(QSize(150, 45));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        linePassword = new QLineEdit(widget);
        linePassword->setObjectName(QString::fromUtf8("linePassword"));
        linePassword->setMinimumSize(QSize(0, 0));
        linePassword->setMaximumSize(QSize(16777215, 45));
        linePassword->setFrame(false);
        linePassword->setEchoMode(QLineEdit::Password);
        linePassword->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(linePassword, 0, 1, 1, 1);

        btnCheck = new QPushButton(widget);
        btnCheck->setObjectName(QString::fromUtf8("btnCheck"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnCheck->sizePolicy().hasHeightForWidth());
        btnCheck->setSizePolicy(sizePolicy1);
        btnCheck->setMinimumSize(QSize(40, 45));
        btnCheck->setMaximumSize(QSize(40, 45));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        font1.setBold(true);
        btnCheck->setFont(font1);

        gridLayout_2->addWidget(btnCheck, 0, 2, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(ChangePassWordDlg);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setSpacing(3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(2, 2, 2, 2);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(150, 45));
        label_2->setMaximumSize(QSize(150, 45));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        linePassword_New = new QLineEdit(widget_2);
        linePassword_New->setObjectName(QString::fromUtf8("linePassword_New"));
        linePassword_New->setMinimumSize(QSize(0, 0));
        linePassword_New->setMaximumSize(QSize(16777215, 45));
        linePassword_New->setFrame(false);
        linePassword_New->setEchoMode(QLineEdit::Password);
        linePassword_New->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(linePassword_New, 0, 1, 1, 1);

        linePassword_NewCheck = new QLineEdit(widget_2);
        linePassword_NewCheck->setObjectName(QString::fromUtf8("linePassword_NewCheck"));
        linePassword_NewCheck->setMinimumSize(QSize(0, 0));
        linePassword_NewCheck->setMaximumSize(QSize(16777215, 45));
        linePassword_NewCheck->setFrame(false);
        linePassword_NewCheck->setEchoMode(QLineEdit::Password);
        linePassword_NewCheck->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(linePassword_NewCheck, 1, 1, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(150, 45));
        label_3->setMaximumSize(QSize(150, 45));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

        widget_3 = new QWidget(ChangePassWordDlg);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_4 = new QGridLayout(widget_3);
        gridLayout_4->setSpacing(3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(2, 2, 2, 2);
        horizontalSpacer = new QSpacerItem(89, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);

        btnLogin = new QPushButton(widget_3);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setMinimumSize(QSize(91, 45));
        btnLogin->setFont(font1);
        btnLogin->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(btnLogin, 0, 1, 1, 1);

        btnCancel = new QPushButton(widget_3);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setMinimumSize(QSize(91, 45));
        btnCancel->setFont(font1);
        btnCancel->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(btnCancel, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        gridLayout->addWidget(widget_3, 2, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ChangePassWordDlg);

        QMetaObject::connectSlotsByName(ChangePassWordDlg);
    } // setupUi

    void retranslateUi(QDialog *ChangePassWordDlg)
    {
        ChangePassWordDlg->setWindowTitle(QCoreApplication::translate("ChangePassWordDlg", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("ChangePassWordDlg", "\350\257\267\350\276\223\345\205\245\345\216\237\345\257\206\347\240\201", nullptr));
        linePassword->setText(QString());
        btnCheck->setText(QCoreApplication::translate("ChangePassWordDlg", "\346\240\241\351\252\214", nullptr));
        label_2->setText(QCoreApplication::translate("ChangePassWordDlg", "\350\257\267\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", nullptr));
        linePassword_New->setText(QString());
        linePassword_NewCheck->setText(QString());
        label_3->setText(QCoreApplication::translate("ChangePassWordDlg", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201", nullptr));
        btnLogin->setText(QCoreApplication::translate("ChangePassWordDlg", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        btnCancel->setText(QCoreApplication::translate("ChangePassWordDlg", "\345\217\226\346\266\210\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangePassWordDlg: public Ui_ChangePassWordDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORDDLG_H
