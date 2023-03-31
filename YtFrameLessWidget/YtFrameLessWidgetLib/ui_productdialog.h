/********************************************************************************
** Form generated from reading UI file 'productdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTDIALOG_H
#define UI_PRODUCTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "productdialog.h"

QT_BEGIN_NAMESPACE

class Ui_ProductDialog
{
public:
    QGridLayout *gridLayout_14;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QPushButton *btnSetCurrProduct;
    QPushButton *btnAddProduct;
    QPushButton *btnStartCopy;
    QPushButton *btnDelProduct;
    QTableWidget *productTableView;
    QStackedWidget *stackedWidget;
    QWidget *pageCopy;
    QGridLayout *gridLayout_11;
    QGroupBox *gbCopy;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout;
    QComboBox *comboCopySrc;
    QLabel *labelCopySrc;
    QPushButton *btnExecuteCopy;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelCopyDesName;
    QLineEdit *editCopyDesName;
    QLabel *labelCopyDesNo;
    QSpinBox *sbCopyDesNo;
    QWidget *pageAdd;
    QGridLayout *gridLayout_10;
    QGroupBox *gbAdd;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_13;
    QSpinBox *sbAddDesNo;
    QLabel *labelCopyDesName_6;
    MyLineEdit *editAddDesName;
    QLabel *labelCopyDesNo_6;
    QPushButton *btnExecuteAdd;
    QWidget *pageChange;
    QGridLayout *gridLayout_9;
    QGroupBox *gbChange;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelCopySrc_6;
    QLineEdit *editChangeSrcNum;
    QLineEdit *editChangeSrcName;
    QPushButton *btnExecuteChange;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCopySrc_7;
    MyLineEdit *editChangeDesName;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnConfirm;
    QPushButton *btnCancel;

    void setupUi(QDialog *ProductDialog)
    {
        if (ProductDialog->objectName().isEmpty())
            ProductDialog->setObjectName(QString::fromUtf8("ProductDialog"));
        ProductDialog->resize(475, 639);
        ProductDialog->setMinimumSize(QSize(475, 605));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowicon/image/windowsicon/\344\272\247\345\223\201\347\256\241\347\220\206.png"), QSize(), QIcon::Normal, QIcon::Off);
        ProductDialog->setWindowIcon(icon);
        ProductDialog->setStyleSheet(QString::fromUtf8(""));
        gridLayout_14 = new QGridLayout(ProductDialog);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(2, 2, 2, 2);
        groupBox = new QGroupBox(ProductDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(3, 6, 3, 3);
        btnSetCurrProduct = new QPushButton(groupBox);
        btnSetCurrProduct->setObjectName(QString::fromUtf8("btnSetCurrProduct"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnSetCurrProduct->sizePolicy().hasHeightForWidth());
        btnSetCurrProduct->setSizePolicy(sizePolicy);
        btnSetCurrProduct->setMinimumSize(QSize(0, 40));

        gridLayout_4->addWidget(btnSetCurrProduct, 1, 1, 1, 1);

        btnAddProduct = new QPushButton(groupBox);
        btnAddProduct->setObjectName(QString::fromUtf8("btnAddProduct"));
        sizePolicy.setHeightForWidth(btnAddProduct->sizePolicy().hasHeightForWidth());
        btnAddProduct->setSizePolicy(sizePolicy);
        btnAddProduct->setMinimumSize(QSize(0, 40));

        gridLayout_4->addWidget(btnAddProduct, 2, 0, 1, 1);

        btnStartCopy = new QPushButton(groupBox);
        btnStartCopy->setObjectName(QString::fromUtf8("btnStartCopy"));
        sizePolicy.setHeightForWidth(btnStartCopy->sizePolicy().hasHeightForWidth());
        btnStartCopy->setSizePolicy(sizePolicy);
        btnStartCopy->setMinimumSize(QSize(0, 40));
        btnStartCopy->setCheckable(false);

        gridLayout_4->addWidget(btnStartCopy, 1, 0, 1, 1);

        btnDelProduct = new QPushButton(groupBox);
        btnDelProduct->setObjectName(QString::fromUtf8("btnDelProduct"));
        sizePolicy.setHeightForWidth(btnDelProduct->sizePolicy().hasHeightForWidth());
        btnDelProduct->setSizePolicy(sizePolicy);
        btnDelProduct->setMinimumSize(QSize(0, 40));

        gridLayout_4->addWidget(btnDelProduct, 2, 1, 1, 1);

        productTableView = new QTableWidget(groupBox);
        if (productTableView->columnCount() < 2)
            productTableView->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        productTableView->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        productTableView->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        productTableView->setObjectName(QString::fromUtf8("productTableView"));

        gridLayout_4->addWidget(productTableView, 0, 0, 1, 2);


        gridLayout_14->addWidget(groupBox, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(ProductDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        pageCopy = new QWidget();
        pageCopy->setObjectName(QString::fromUtf8("pageCopy"));
        gridLayout_11 = new QGridLayout(pageCopy);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        gbCopy = new QGroupBox(pageCopy);
        gbCopy->setObjectName(QString::fromUtf8("gbCopy"));
        gbCopy->setFlat(false);
        gridLayout_5 = new QGridLayout(gbCopy);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 16, 6, 6);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboCopySrc = new QComboBox(gbCopy);
        comboCopySrc->setObjectName(QString::fromUtf8("comboCopySrc"));
        comboCopySrc->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(comboCopySrc, 0, 1, 1, 1);

        labelCopySrc = new QLabel(gbCopy);
        labelCopySrc->setObjectName(QString::fromUtf8("labelCopySrc"));
        labelCopySrc->setMinimumSize(QSize(80, 35));
        labelCopySrc->setMaximumSize(QSize(80, 35));
        labelCopySrc->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelCopySrc, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 1);

        btnExecuteCopy = new QPushButton(gbCopy);
        btnExecuteCopy->setObjectName(QString::fromUtf8("btnExecuteCopy"));
        sizePolicy.setHeightForWidth(btnExecuteCopy->sizePolicy().hasHeightForWidth());
        btnExecuteCopy->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(btnExecuteCopy, 0, 1, 2, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelCopyDesName = new QLabel(gbCopy);
        labelCopyDesName->setObjectName(QString::fromUtf8("labelCopyDesName"));
        labelCopyDesName->setMinimumSize(QSize(80, 35));
        labelCopyDesName->setMaximumSize(QSize(80, 35));
        labelCopyDesName->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(labelCopyDesName);

        editCopyDesName = new QLineEdit(gbCopy);
        editCopyDesName->setObjectName(QString::fromUtf8("editCopyDesName"));
        editCopyDesName->setMinimumSize(QSize(0, 35));
        editCopyDesName->setMaxLength(40);
        editCopyDesName->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(editCopyDesName);

        labelCopyDesNo = new QLabel(gbCopy);
        labelCopyDesNo->setObjectName(QString::fromUtf8("labelCopyDesNo"));
        labelCopyDesNo->setMinimumSize(QSize(0, 35));
        labelCopyDesNo->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(labelCopyDesNo);

        sbCopyDesNo = new QSpinBox(gbCopy);
        sbCopyDesNo->setObjectName(QString::fromUtf8("sbCopyDesNo"));
        sbCopyDesNo->setMinimumSize(QSize(0, 35));
        sbCopyDesNo->setAlignment(Qt::AlignCenter);
        sbCopyDesNo->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        sbCopyDesNo->setMinimum(1);
        sbCopyDesNo->setMaximum(999);

        horizontalLayout_4->addWidget(sbCopyDesNo);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 6);
        horizontalLayout_4->setStretch(2, 1);
        horizontalLayout_4->setStretch(3, 1);

        gridLayout_5->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        gridLayout_11->addWidget(gbCopy, 0, 0, 1, 1);

        stackedWidget->addWidget(pageCopy);
        pageAdd = new QWidget();
        pageAdd->setObjectName(QString::fromUtf8("pageAdd"));
        gridLayout_10 = new QGridLayout(pageAdd);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        gbAdd = new QGroupBox(pageAdd);
        gbAdd->setObjectName(QString::fromUtf8("gbAdd"));
        gbAdd->setFlat(false);
        gridLayout_7 = new QGridLayout(gbAdd);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 16, 6, 6);
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        sbAddDesNo = new QSpinBox(gbAdd);
        sbAddDesNo->setObjectName(QString::fromUtf8("sbAddDesNo"));
        sbAddDesNo->setMinimumSize(QSize(0, 35));
        sbAddDesNo->setAlignment(Qt::AlignCenter);
        sbAddDesNo->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        sbAddDesNo->setMinimum(1);
        sbAddDesNo->setMaximum(999);

        gridLayout_13->addWidget(sbAddDesNo, 0, 1, 1, 1);

        labelCopyDesName_6 = new QLabel(gbAdd);
        labelCopyDesName_6->setObjectName(QString::fromUtf8("labelCopyDesName_6"));
        labelCopyDesName_6->setMinimumSize(QSize(80, 35));
        labelCopyDesName_6->setMaximumSize(QSize(80, 35));
        labelCopyDesName_6->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(labelCopyDesName_6, 1, 0, 1, 1);

        editAddDesName = new MyLineEdit(gbAdd);
        editAddDesName->setObjectName(QString::fromUtf8("editAddDesName"));
        editAddDesName->setMinimumSize(QSize(0, 35));
        editAddDesName->setMaxLength(40);
        editAddDesName->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(editAddDesName, 1, 1, 1, 1);

        labelCopyDesNo_6 = new QLabel(gbAdd);
        labelCopyDesNo_6->setObjectName(QString::fromUtf8("labelCopyDesNo_6"));
        labelCopyDesNo_6->setMinimumSize(QSize(0, 35));
        labelCopyDesNo_6->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(labelCopyDesNo_6, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_13, 0, 0, 1, 1);

        btnExecuteAdd = new QPushButton(gbAdd);
        btnExecuteAdd->setObjectName(QString::fromUtf8("btnExecuteAdd"));
        sizePolicy.setHeightForWidth(btnExecuteAdd->sizePolicy().hasHeightForWidth());
        btnExecuteAdd->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(btnExecuteAdd, 0, 1, 1, 1);


        gridLayout_10->addWidget(gbAdd, 0, 0, 1, 1);

        stackedWidget->addWidget(pageAdd);
        pageChange = new QWidget();
        pageChange->setObjectName(QString::fromUtf8("pageChange"));
        gridLayout_9 = new QGridLayout(pageChange);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        gbChange = new QGroupBox(pageChange);
        gbChange->setObjectName(QString::fromUtf8("gbChange"));
        gbChange->setFlat(false);
        gridLayout_8 = new QGridLayout(gbChange);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 16, 6, 6);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelCopySrc_6 = new QLabel(gbChange);
        labelCopySrc_6->setObjectName(QString::fromUtf8("labelCopySrc_6"));
        labelCopySrc_6->setMinimumSize(QSize(80, 35));
        labelCopySrc_6->setMaximumSize(QSize(80, 35));
        labelCopySrc_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelCopySrc_6);

        editChangeSrcNum = new QLineEdit(gbChange);
        editChangeSrcNum->setObjectName(QString::fromUtf8("editChangeSrcNum"));
        editChangeSrcNum->setMinimumSize(QSize(20, 30));
        editChangeSrcNum->setMaximumSize(QSize(26, 35));
        editChangeSrcNum->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(editChangeSrcNum);

        editChangeSrcName = new QLineEdit(gbChange);
        editChangeSrcName->setObjectName(QString::fromUtf8("editChangeSrcName"));
        editChangeSrcName->setMinimumSize(QSize(0, 35));
        editChangeSrcName->setAlignment(Qt::AlignCenter);
        editChangeSrcName->setReadOnly(true);

        horizontalLayout_3->addWidget(editChangeSrcName);


        gridLayout_8->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        btnExecuteChange = new QPushButton(gbChange);
        btnExecuteChange->setObjectName(QString::fromUtf8("btnExecuteChange"));
        sizePolicy.setHeightForWidth(btnExecuteChange->sizePolicy().hasHeightForWidth());
        btnExecuteChange->setSizePolicy(sizePolicy);

        gridLayout_8->addWidget(btnExecuteChange, 0, 1, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelCopySrc_7 = new QLabel(gbChange);
        labelCopySrc_7->setObjectName(QString::fromUtf8("labelCopySrc_7"));
        labelCopySrc_7->setMinimumSize(QSize(80, 35));
        labelCopySrc_7->setMaximumSize(QSize(80, 35));
        labelCopySrc_7->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelCopySrc_7);

        editChangeDesName = new MyLineEdit(gbChange);
        editChangeDesName->setObjectName(QString::fromUtf8("editChangeDesName"));
        editChangeDesName->setMinimumSize(QSize(0, 35));
        editChangeDesName->setMaxLength(40);
        editChangeDesName->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(editChangeDesName);


        gridLayout_8->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_9->addWidget(gbChange, 0, 0, 1, 1);

        stackedWidget->addWidget(pageChange);

        gridLayout_14->addWidget(stackedWidget, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 0, 2, 2);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnConfirm = new QPushButton(ProductDialog);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setMinimumSize(QSize(80, 35));
        btnConfirm->setMaximumSize(QSize(80, 35));

        horizontalLayout_2->addWidget(btnConfirm);

        btnCancel = new QPushButton(ProductDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setMinimumSize(QSize(80, 35));
        btnCancel->setMaximumSize(QSize(80, 35));

        horizontalLayout_2->addWidget(btnCancel);


        gridLayout_14->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        gridLayout_14->setRowStretch(0, 1);

        retranslateUi(ProductDialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ProductDialog);
    } // setupUi

    void retranslateUi(QDialog *ProductDialog)
    {
        ProductDialog->setWindowTitle(QCoreApplication::translate("ProductDialog", "\344\272\247\345\223\201\347\256\241\347\220\206", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ProductDialog", "\344\272\247\345\223\201\345\210\227\350\241\250", nullptr));
        btnSetCurrProduct->setText(QCoreApplication::translate("ProductDialog", "\350\256\276\345\256\232\347\224\237\344\272\247\344\272\247\345\223\201", nullptr));
        btnAddProduct->setText(QCoreApplication::translate("ProductDialog", "\346\267\273\345\212\240\344\272\247\345\223\201", nullptr));
        btnStartCopy->setText(QCoreApplication::translate("ProductDialog", "\345\244\215\345\210\266\346\267\273\345\212\240\344\272\247\345\223\201", nullptr));
        btnDelProduct->setText(QCoreApplication::translate("ProductDialog", "\345\210\240\351\231\244\344\272\247\345\223\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem = productTableView->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ProductDialog", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = productTableView->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ProductDialog", "\344\272\247\345\223\201\345\220\215\347\247\260", nullptr));
        gbCopy->setTitle(QCoreApplication::translate("ProductDialog", "\345\244\215\345\210\266", nullptr));
        labelCopySrc->setText(QCoreApplication::translate("ProductDialog", "\345\244\215\345\210\266\346\272\220", nullptr));
        btnExecuteCopy->setText(QCoreApplication::translate("ProductDialog", "\347\241\256\350\256\244\n"
"\345\244\215\345\210\266", nullptr));
        labelCopyDesName->setText(QCoreApplication::translate("ProductDialog", "\345\244\215\345\210\266\345\210\260", nullptr));
        editCopyDesName->setText(QString());
        labelCopyDesNo->setText(QCoreApplication::translate("ProductDialog", "\351\205\215\346\226\271\345\217\267", nullptr));
        gbAdd->setTitle(QCoreApplication::translate("ProductDialog", "\346\267\273\345\212\240", nullptr));
        labelCopyDesName_6->setText(QCoreApplication::translate("ProductDialog", "\344\272\247\345\223\201\345\220\215\347\247\260", nullptr));
        editAddDesName->setText(QString());
        labelCopyDesNo_6->setText(QCoreApplication::translate("ProductDialog", "\351\205\215\346\226\271\345\217\267", nullptr));
        btnExecuteAdd->setText(QCoreApplication::translate("ProductDialog", "\347\241\256\350\256\244\n"
"\346\267\273\345\212\240", nullptr));
        gbChange->setTitle(QCoreApplication::translate("ProductDialog", "\344\277\256\346\224\271", nullptr));
        labelCopySrc_6->setText(QCoreApplication::translate("ProductDialog", "\344\277\256\346\224\271\346\272\220", nullptr));
        btnExecuteChange->setText(QCoreApplication::translate("ProductDialog", "\347\241\256\350\256\244\n"
"\344\277\256\346\224\271", nullptr));
        labelCopySrc_7->setText(QCoreApplication::translate("ProductDialog", "\344\277\256\346\224\271\344\270\272", nullptr));
        editChangeDesName->setText(QString());
        btnConfirm->setText(QCoreApplication::translate("ProductDialog", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("ProductDialog", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductDialog: public Ui_ProductDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTDIALOG_H
