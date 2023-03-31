/********************************************************************************
** Form generated from reading UI file 'managementpassworddlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEMENTPASSWORDDLG_H
#define UI_MANAGEMENTPASSWORDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManagementPasswordDlg
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnAdd;
    QPushButton *btnDel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnSave;
    QPushButton *btnCancel;
    QStackedWidget *stackedWidget;
    QWidget *pageAdd;
    QGridLayout *gridLayout_3;
    QGroupBox *gbAdd;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QLineEdit *lineEditAddUserName;
    QLabel *label_4;
    QComboBox *cbbAddUserAuthority;
    QPushButton *btnConfirmAdd;
    QLabel *label_5;
    QLineEdit *lineEditAddPassword;
    QLabel *label_6;
    QLineEdit *lineEditAddPasswordConfirm;
    QWidget *pageChange;
    QGridLayout *gridLayout_2;
    QGroupBox *gbChange;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QLineEdit *lineEditChangeUserName;
    QLabel *label_2;
    QComboBox *cbbChangeUserAuthority;
    QPushButton *btnConfirmChange;
    QLabel *label;
    QLineEdit *lineEditChangePassword;
    QLabel *label_3;
    QLineEdit *lineEditChangePasswordConfirm;
    QTableWidget *tableWidget;

    void setupUi(QDialog *ManagementPasswordDlg)
    {
        if (ManagementPasswordDlg->objectName().isEmpty())
            ManagementPasswordDlg->setObjectName(QString::fromUtf8("ManagementPasswordDlg"));
        ManagementPasswordDlg->resize(446, 511);
        ManagementPasswordDlg->setMinimumSize(QSize(446, 511));
        ManagementPasswordDlg->setMaximumSize(QSize(446, 511));
        ManagementPasswordDlg->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(ManagementPasswordDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnAdd = new QPushButton(ManagementPasswordDlg);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setMinimumSize(QSize(80, 45));
        btnAdd->setMaximumSize(QSize(80, 45));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(true);
        font.setItalic(false);
        btnAdd->setFont(font);

        horizontalLayout_3->addWidget(btnAdd);

        btnDel = new QPushButton(ManagementPasswordDlg);
        btnDel->setObjectName(QString::fromUtf8("btnDel"));
        btnDel->setMinimumSize(QSize(80, 45));
        btnDel->setMaximumSize(QSize(80, 45));
        btnDel->setFont(font);

        horizontalLayout_3->addWidget(btnDel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btnSave = new QPushButton(ManagementPasswordDlg);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnSave->sizePolicy().hasHeightForWidth());
        btnSave->setSizePolicy(sizePolicy);
        btnSave->setMinimumSize(QSize(80, 45));
        btnSave->setMaximumSize(QSize(80, 45));
        btnSave->setFont(font);

        horizontalLayout_3->addWidget(btnSave);

        btnCancel = new QPushButton(ManagementPasswordDlg);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setMinimumSize(QSize(80, 45));
        btnCancel->setMaximumSize(QSize(80, 45));
        btnCancel->setFont(font);

        horizontalLayout_3->addWidget(btnCancel);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        stackedWidget = new QStackedWidget(ManagementPasswordDlg);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageAdd = new QWidget();
        pageAdd->setObjectName(QString::fromUtf8("pageAdd"));
        gridLayout_3 = new QGridLayout(pageAdd);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gbAdd = new QGroupBox(pageAdd);
        gbAdd->setObjectName(QString::fromUtf8("gbAdd"));
        gridLayout_5 = new QGridLayout(gbAdd);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(6);
        gridLayout_5->setContentsMargins(6, 12, 6, 6);
        label_8 = new QLabel(gbAdd);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(60, 0));
        label_8->setMaximumSize(QSize(60, 16777215));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_8, 0, 0, 1, 1);

        lineEditAddUserName = new QLineEdit(gbAdd);
        lineEditAddUserName->setObjectName(QString::fromUtf8("lineEditAddUserName"));
        lineEditAddUserName->setMinimumSize(QSize(0, 30));
        lineEditAddUserName->setMaximumSize(QSize(16777215, 30));
        lineEditAddUserName->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEditAddUserName, 0, 1, 1, 1);

        label_4 = new QLabel(gbAdd);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(60, 0));
        label_4->setMaximumSize(QSize(60, 16777215));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_4, 0, 2, 1, 1);

        cbbAddUserAuthority = new QComboBox(gbAdd);
        cbbAddUserAuthority->addItem(QString());
        cbbAddUserAuthority->addItem(QString());
        cbbAddUserAuthority->addItem(QString());
        cbbAddUserAuthority->setObjectName(QString::fromUtf8("cbbAddUserAuthority"));
        cbbAddUserAuthority->setMinimumSize(QSize(0, 30));
        cbbAddUserAuthority->setMaximumSize(QSize(16777215, 30));

        gridLayout_5->addWidget(cbbAddUserAuthority, 0, 3, 1, 1);

        btnConfirmAdd = new QPushButton(gbAdd);
        btnConfirmAdd->setObjectName(QString::fromUtf8("btnConfirmAdd"));
        sizePolicy.setHeightForWidth(btnConfirmAdd->sizePolicy().hasHeightForWidth());
        btnConfirmAdd->setSizePolicy(sizePolicy);
        btnConfirmAdd->setMaximumSize(QSize(40, 16777215));

        gridLayout_5->addWidget(btnConfirmAdd, 0, 4, 2, 1);

        label_5 = new QLabel(gbAdd);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(60, 0));
        label_5->setMaximumSize(QSize(60, 16777215));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_5, 1, 0, 1, 1);

        lineEditAddPassword = new QLineEdit(gbAdd);
        lineEditAddPassword->setObjectName(QString::fromUtf8("lineEditAddPassword"));
        lineEditAddPassword->setMinimumSize(QSize(0, 30));
        lineEditAddPassword->setMaximumSize(QSize(16777215, 30));
        lineEditAddPassword->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEditAddPassword, 1, 1, 1, 1);

        label_6 = new QLabel(gbAdd);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(60, 0));
        label_6->setMaximumSize(QSize(60, 16777215));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_6, 1, 2, 1, 1);

        lineEditAddPasswordConfirm = new QLineEdit(gbAdd);
        lineEditAddPasswordConfirm->setObjectName(QString::fromUtf8("lineEditAddPasswordConfirm"));
        lineEditAddPasswordConfirm->setMinimumSize(QSize(0, 30));
        lineEditAddPasswordConfirm->setMaximumSize(QSize(16777215, 30));
        lineEditAddPasswordConfirm->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEditAddPasswordConfirm, 1, 3, 1, 1);


        gridLayout_3->addWidget(gbAdd, 0, 0, 1, 1);

        stackedWidget->addWidget(pageAdd);
        pageChange = new QWidget();
        pageChange->setObjectName(QString::fromUtf8("pageChange"));
        gridLayout_2 = new QGridLayout(pageChange);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gbChange = new QGroupBox(pageChange);
        gbChange->setObjectName(QString::fromUtf8("gbChange"));
        gridLayout_4 = new QGridLayout(gbChange);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(6);
        gridLayout_4->setContentsMargins(6, 12, 6, 6);
        label_7 = new QLabel(gbChange);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(60, 0));
        label_7->setMaximumSize(QSize(60, 16777215));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_7, 0, 0, 1, 1);

        lineEditChangeUserName = new QLineEdit(gbChange);
        lineEditChangeUserName->setObjectName(QString::fromUtf8("lineEditChangeUserName"));
        lineEditChangeUserName->setMinimumSize(QSize(0, 30));
        lineEditChangeUserName->setMaximumSize(QSize(16777215, 30));
        lineEditChangeUserName->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEditChangeUserName, 0, 1, 1, 1);

        label_2 = new QLabel(gbChange);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setMaximumSize(QSize(60, 16777215));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_2, 0, 2, 1, 1);

        cbbChangeUserAuthority = new QComboBox(gbChange);
        cbbChangeUserAuthority->addItem(QString());
        cbbChangeUserAuthority->addItem(QString());
        cbbChangeUserAuthority->addItem(QString());
        cbbChangeUserAuthority->setObjectName(QString::fromUtf8("cbbChangeUserAuthority"));
        cbbChangeUserAuthority->setMinimumSize(QSize(0, 30));
        cbbChangeUserAuthority->setMaximumSize(QSize(16777215, 30));

        gridLayout_4->addWidget(cbbChangeUserAuthority, 0, 3, 1, 1);

        btnConfirmChange = new QPushButton(gbChange);
        btnConfirmChange->setObjectName(QString::fromUtf8("btnConfirmChange"));
        sizePolicy.setHeightForWidth(btnConfirmChange->sizePolicy().hasHeightForWidth());
        btnConfirmChange->setSizePolicy(sizePolicy);
        btnConfirmChange->setMaximumSize(QSize(40, 16777215));

        gridLayout_4->addWidget(btnConfirmChange, 0, 4, 2, 1);

        label = new QLabel(gbChange);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 0));
        label->setMaximumSize(QSize(60, 16777215));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        lineEditChangePassword = new QLineEdit(gbChange);
        lineEditChangePassword->setObjectName(QString::fromUtf8("lineEditChangePassword"));
        lineEditChangePassword->setMinimumSize(QSize(0, 30));
        lineEditChangePassword->setMaximumSize(QSize(16777215, 30));
        lineEditChangePassword->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEditChangePassword, 1, 1, 1, 1);

        label_3 = new QLabel(gbChange);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(60, 0));
        label_3->setMaximumSize(QSize(60, 16777215));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_3, 1, 2, 1, 1);

        lineEditChangePasswordConfirm = new QLineEdit(gbChange);
        lineEditChangePasswordConfirm->setObjectName(QString::fromUtf8("lineEditChangePasswordConfirm"));
        lineEditChangePasswordConfirm->setMinimumSize(QSize(0, 30));
        lineEditChangePasswordConfirm->setMaximumSize(QSize(16777215, 30));
        lineEditChangePasswordConfirm->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEditChangePasswordConfirm, 1, 3, 1, 1);


        gridLayout_2->addWidget(gbChange, 0, 0, 1, 1);

        stackedWidget->addWidget(pageChange);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);

        tableWidget = new QTableWidget(ManagementPasswordDlg);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);

        retranslateUi(ManagementPasswordDlg);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ManagementPasswordDlg);
    } // setupUi

    void retranslateUi(QDialog *ManagementPasswordDlg)
    {
        ManagementPasswordDlg->setWindowTitle(QCoreApplication::translate("ManagementPasswordDlg", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        btnAdd->setText(QCoreApplication::translate("ManagementPasswordDlg", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
        btnDel->setText(QCoreApplication::translate("ManagementPasswordDlg", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        btnSave->setText(QCoreApplication::translate("ManagementPasswordDlg", "\344\277\235\345\255\230", nullptr));
        btnCancel->setText(QCoreApplication::translate("ManagementPasswordDlg", "\345\217\226\346\266\210", nullptr));
        gbAdd->setTitle(QCoreApplication::translate("ManagementPasswordDlg", "\346\267\273\345\212\240", nullptr));
        label_8->setText(QCoreApplication::translate("ManagementPasswordDlg", "\347\224\250\346\210\267\345\220\215\347\247\260", nullptr));
        label_4->setText(QCoreApplication::translate("ManagementPasswordDlg", "\347\224\250\346\210\267\346\235\203\351\231\220", nullptr));
        cbbAddUserAuthority->setItemText(0, QCoreApplication::translate("ManagementPasswordDlg", "\346\223\215\344\275\234\345\221\230", nullptr));
        cbbAddUserAuthority->setItemText(1, QCoreApplication::translate("ManagementPasswordDlg", "\345\267\245\347\250\213\345\270\210", nullptr));
        cbbAddUserAuthority->setItemText(2, QCoreApplication::translate("ManagementPasswordDlg", "\347\256\241\347\220\206\345\221\230", nullptr));

        btnConfirmAdd->setText(QCoreApplication::translate("ManagementPasswordDlg", "\347\241\256\350\256\244\n"
"\346\267\273\345\212\240", nullptr));
        label_5->setText(QCoreApplication::translate("ManagementPasswordDlg", "\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        label_6->setText(QCoreApplication::translate("ManagementPasswordDlg", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        gbChange->setTitle(QCoreApplication::translate("ManagementPasswordDlg", "\344\277\256\346\224\271", nullptr));
        label_7->setText(QCoreApplication::translate("ManagementPasswordDlg", "\347\224\250\346\210\267\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("ManagementPasswordDlg", "\347\224\250\346\210\267\346\235\203\351\231\220", nullptr));
        cbbChangeUserAuthority->setItemText(0, QCoreApplication::translate("ManagementPasswordDlg", "\346\223\215\344\275\234\345\221\230", nullptr));
        cbbChangeUserAuthority->setItemText(1, QCoreApplication::translate("ManagementPasswordDlg", "\345\267\245\347\250\213\345\270\210", nullptr));
        cbbChangeUserAuthority->setItemText(2, QCoreApplication::translate("ManagementPasswordDlg", "\347\256\241\347\220\206\345\221\230", nullptr));

        btnConfirmChange->setText(QCoreApplication::translate("ManagementPasswordDlg", "\347\241\256\350\256\244\n"
"\344\277\256\346\224\271", nullptr));
        label->setText(QCoreApplication::translate("ManagementPasswordDlg", "\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("ManagementPasswordDlg", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ManagementPasswordDlg", "\347\224\250\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ManagementPasswordDlg", "\347\224\250\346\210\267\346\235\203\351\231\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManagementPasswordDlg: public Ui_ManagementPasswordDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEMENTPASSWORDDLG_H
