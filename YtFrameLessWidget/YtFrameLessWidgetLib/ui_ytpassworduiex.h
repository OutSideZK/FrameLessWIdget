/********************************************************************************
** Form generated from reading UI file 'ytpassworduiex.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YTPASSWORDUIEX_H
#define UI_YTPASSWORDUIEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YtPassworduiEx
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QLineEdit *linePassword;
    QLabel *labelUserName;
    QLineEdit *lineUserName;
    QWidget *WDNumber;
    QGridLayout *gridLayout_6;
    QPushButton *PB_8;
    QPushButton *PB_7;
    QPushButton *PB_9;
    QPushButton *PB_10;
    QPushButton *PB_0;
    QPushButton *PB_3;
    QPushButton *PB_5;
    QPushButton *PB_4;
    QPushButton *PB_6;
    QPushButton *PB_1;
    QPushButton *PB_2;
    QPushButton *PB_11;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QPushButton *btnLogin;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelUserManagement;

    void setupUi(QDialog *YtPassworduiEx)
    {
        if (YtPassworduiEx->objectName().isEmpty())
            YtPassworduiEx->setObjectName(QString::fromUtf8("YtPassworduiEx"));
        YtPassworduiEx->resize(313, 497);
        gridLayout = new QGridLayout(YtPassworduiEx);
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setContentsMargins(6, 6, 6, 6);
        widget_3 = new QWidget(YtPassworduiEx);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_5 = new QGridLayout(widget_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 9, 0, 0);
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 45));
        label->setMaximumSize(QSize(16777215, 45));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label, 1, 0, 1, 1);

        linePassword = new QLineEdit(widget_3);
        linePassword->setObjectName(QString::fromUtf8("linePassword"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(linePassword->sizePolicy().hasHeightForWidth());
        linePassword->setSizePolicy(sizePolicy);
        linePassword->setMinimumSize(QSize(200, 32));
        linePassword->setMaximumSize(QSize(16777215, 45));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        linePassword->setFont(font1);
        linePassword->setStyleSheet(QString::fromUtf8("/*QLineEdit {\n"
"border: 2px solid #464646;\n"
"}*/"));
        linePassword->setFrame(false);
        linePassword->setEchoMode(QLineEdit::Password);
        linePassword->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(linePassword, 1, 1, 1, 1);

        labelUserName = new QLabel(widget_3);
        labelUserName->setObjectName(QString::fromUtf8("labelUserName"));
        labelUserName->setMinimumSize(QSize(0, 45));
        labelUserName->setMaximumSize(QSize(16777215, 45));
        labelUserName->setFont(font);
        labelUserName->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelUserName, 0, 0, 1, 1);

        lineUserName = new QLineEdit(widget_3);
        lineUserName->setObjectName(QString::fromUtf8("lineUserName"));
        sizePolicy.setHeightForWidth(lineUserName->sizePolicy().hasHeightForWidth());
        lineUserName->setSizePolicy(sizePolicy);
        lineUserName->setMinimumSize(QSize(200, 32));
        lineUserName->setMaximumSize(QSize(16777215, 45));
        lineUserName->setFont(font1);
        lineUserName->setStyleSheet(QString::fromUtf8("/*QLineEdit {\n"
"border: 2px solid #464646;\n"
"}*/"));
        lineUserName->setFrame(false);
        lineUserName->setEchoMode(QLineEdit::Password);
        lineUserName->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineUserName, 0, 1, 1, 1);


        gridLayout->addWidget(widget_3, 0, 0, 1, 1);

        WDNumber = new QWidget(YtPassworduiEx);
        WDNumber->setObjectName(QString::fromUtf8("WDNumber"));
        WDNumber->setMinimumSize(QSize(0, 300));
        WDNumber->setMaximumSize(QSize(16777215, 300));
        gridLayout_6 = new QGridLayout(WDNumber);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        PB_8 = new QPushButton(WDNumber);
        PB_8->setObjectName(QString::fromUtf8("PB_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PB_8->sizePolicy().hasHeightForWidth());
        PB_8->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        PB_8->setFont(font2);

        gridLayout_6->addWidget(PB_8, 2, 1, 1, 1);

        PB_7 = new QPushButton(WDNumber);
        PB_7->setObjectName(QString::fromUtf8("PB_7"));
        sizePolicy1.setHeightForWidth(PB_7->sizePolicy().hasHeightForWidth());
        PB_7->setSizePolicy(sizePolicy1);
        PB_7->setFont(font2);

        gridLayout_6->addWidget(PB_7, 2, 0, 1, 1);

        PB_9 = new QPushButton(WDNumber);
        PB_9->setObjectName(QString::fromUtf8("PB_9"));
        sizePolicy1.setHeightForWidth(PB_9->sizePolicy().hasHeightForWidth());
        PB_9->setSizePolicy(sizePolicy1);
        PB_9->setFont(font2);

        gridLayout_6->addWidget(PB_9, 2, 3, 1, 1);

        PB_10 = new QPushButton(WDNumber);
        PB_10->setObjectName(QString::fromUtf8("PB_10"));
        sizePolicy1.setHeightForWidth(PB_10->sizePolicy().hasHeightForWidth());
        PB_10->setSizePolicy(sizePolicy1);
        PB_10->setFont(font2);

        gridLayout_6->addWidget(PB_10, 3, 0, 1, 1);

        PB_0 = new QPushButton(WDNumber);
        PB_0->setObjectName(QString::fromUtf8("PB_0"));
        sizePolicy1.setHeightForWidth(PB_0->sizePolicy().hasHeightForWidth());
        PB_0->setSizePolicy(sizePolicy1);
        PB_0->setFont(font2);

        gridLayout_6->addWidget(PB_0, 3, 1, 1, 1);

        PB_3 = new QPushButton(WDNumber);
        PB_3->setObjectName(QString::fromUtf8("PB_3"));
        sizePolicy1.setHeightForWidth(PB_3->sizePolicy().hasHeightForWidth());
        PB_3->setSizePolicy(sizePolicy1);
        PB_3->setFont(font2);

        gridLayout_6->addWidget(PB_3, 0, 3, 1, 1);

        PB_5 = new QPushButton(WDNumber);
        PB_5->setObjectName(QString::fromUtf8("PB_5"));
        sizePolicy1.setHeightForWidth(PB_5->sizePolicy().hasHeightForWidth());
        PB_5->setSizePolicy(sizePolicy1);
        PB_5->setFont(font2);

        gridLayout_6->addWidget(PB_5, 1, 1, 1, 1);

        PB_4 = new QPushButton(WDNumber);
        PB_4->setObjectName(QString::fromUtf8("PB_4"));
        sizePolicy1.setHeightForWidth(PB_4->sizePolicy().hasHeightForWidth());
        PB_4->setSizePolicy(sizePolicy1);
        PB_4->setFont(font2);

        gridLayout_6->addWidget(PB_4, 1, 0, 1, 1);

        PB_6 = new QPushButton(WDNumber);
        PB_6->setObjectName(QString::fromUtf8("PB_6"));
        sizePolicy1.setHeightForWidth(PB_6->sizePolicy().hasHeightForWidth());
        PB_6->setSizePolicy(sizePolicy1);
        PB_6->setFont(font2);

        gridLayout_6->addWidget(PB_6, 1, 3, 1, 1);

        PB_1 = new QPushButton(WDNumber);
        PB_1->setObjectName(QString::fromUtf8("PB_1"));
        sizePolicy1.setHeightForWidth(PB_1->sizePolicy().hasHeightForWidth());
        PB_1->setSizePolicy(sizePolicy1);
        PB_1->setFont(font2);

        gridLayout_6->addWidget(PB_1, 0, 0, 1, 1);

        PB_2 = new QPushButton(WDNumber);
        PB_2->setObjectName(QString::fromUtf8("PB_2"));
        sizePolicy1.setHeightForWidth(PB_2->sizePolicy().hasHeightForWidth());
        PB_2->setSizePolicy(sizePolicy1);
        PB_2->setFont(font2);

        gridLayout_6->addWidget(PB_2, 0, 1, 1, 1);

        PB_11 = new QPushButton(WDNumber);
        PB_11->setObjectName(QString::fromUtf8("PB_11"));
        sizePolicy1.setHeightForWidth(PB_11->sizePolicy().hasHeightForWidth());
        PB_11->setSizePolicy(sizePolicy1);
        PB_11->setFont(font2);

        gridLayout_6->addWidget(PB_11, 3, 3, 1, 1);


        gridLayout->addWidget(WDNumber, 1, 0, 1, 1);

        widget_2 = new QWidget(YtPassworduiEx);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 6, 6, 0);
        btnLogin = new QPushButton(widget_2);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        sizePolicy.setHeightForWidth(btnLogin->sizePolicy().hasHeightForWidth());
        btnLogin->setSizePolicy(sizePolicy);
        btnLogin->setMinimumSize(QSize(100, 45));
        btnLogin->setMaximumSize(QSize(100, 45));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setItalic(false);
        btnLogin->setFont(font3);

        gridLayout_3->addWidget(btnLogin, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);

        btnCancel = new QPushButton(widget_2);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        sizePolicy.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy);
        btnCancel->setMinimumSize(QSize(100, 45));
        btnCancel->setMaximumSize(QSize(100, 45));
        btnCancel->setFont(font3);

        gridLayout_3->addWidget(btnCancel, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 4, 1, 1);


        gridLayout->addWidget(widget_2, 2, 0, 1, 1);

        widget = new QWidget(YtPassworduiEx);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 20));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(9);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 0, 9, 3);
        horizontalSpacer_3 = new QSpacerItem(258, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        labelUserManagement = new QLabel(widget);
        labelUserManagement->setObjectName(QString::fromUtf8("labelUserManagement"));
        labelUserManagement->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        labelUserManagement->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelUserManagement);


        gridLayout->addWidget(widget, 3, 0, 1, 1);


        retranslateUi(YtPassworduiEx);

        QMetaObject::connectSlotsByName(YtPassworduiEx);
    } // setupUi

    void retranslateUi(QDialog *YtPassworduiEx)
    {
        YtPassworduiEx->setWindowTitle(QCoreApplication::translate("YtPassworduiEx", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("YtPassworduiEx", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        linePassword->setText(QString());
        labelUserName->setText(QCoreApplication::translate("YtPassworduiEx", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineUserName->setText(QString());
        PB_8->setText(QCoreApplication::translate("YtPassworduiEx", "8", nullptr));
        PB_7->setText(QCoreApplication::translate("YtPassworduiEx", "7", nullptr));
        PB_9->setText(QCoreApplication::translate("YtPassworduiEx", "9", nullptr));
        PB_10->setText(QCoreApplication::translate("YtPassworduiEx", "<-", nullptr));
        PB_0->setText(QCoreApplication::translate("YtPassworduiEx", "0", nullptr));
        PB_3->setText(QCoreApplication::translate("YtPassworduiEx", "3", nullptr));
        PB_5->setText(QCoreApplication::translate("YtPassworduiEx", "5", nullptr));
        PB_4->setText(QCoreApplication::translate("YtPassworduiEx", "4", nullptr));
        PB_6->setText(QCoreApplication::translate("YtPassworduiEx", "6", nullptr));
        PB_1->setText(QCoreApplication::translate("YtPassworduiEx", "1", nullptr));
        PB_2->setText(QCoreApplication::translate("YtPassworduiEx", "2", nullptr));
        PB_11->setText(QCoreApplication::translate("YtPassworduiEx", "Clear", nullptr));
        btnLogin->setText(QCoreApplication::translate("YtPassworduiEx", "\347\231\273\345\275\225", nullptr));
        btnCancel->setText(QCoreApplication::translate("YtPassworduiEx", "\345\217\226\346\266\210", nullptr));
        labelUserManagement->setText(QCoreApplication::translate("YtPassworduiEx", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YtPassworduiEx: public Ui_YtPassworduiEx {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YTPASSWORDUIEX_H
