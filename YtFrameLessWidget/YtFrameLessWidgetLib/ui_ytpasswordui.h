/********************************************************************************
** Form generated from reading UI file 'ytpasswordui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YTPASSWORDUI_H
#define UI_YTPASSWORDUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YtPasswordui
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_4;
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
    QWidget *widget_3;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QLineEdit *linePassword;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelPasswordChange;

    void setupUi(QDialog *YtPasswordui)
    {
        if (YtPasswordui->objectName().isEmpty())
            YtPasswordui->setObjectName(QString::fromUtf8("YtPasswordui"));
        YtPasswordui->resize(321, 439);
        gridLayout = new QGridLayout(YtPasswordui);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        frame = new QFrame(YtPasswordui);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        WDNumber = new QWidget(frame);
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
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        PB_8->setFont(font);

        gridLayout_6->addWidget(PB_8, 2, 1, 1, 1);

        PB_7 = new QPushButton(WDNumber);
        PB_7->setObjectName(QString::fromUtf8("PB_7"));
        sizePolicy1.setHeightForWidth(PB_7->sizePolicy().hasHeightForWidth());
        PB_7->setSizePolicy(sizePolicy1);
        PB_7->setFont(font);

        gridLayout_6->addWidget(PB_7, 2, 0, 1, 1);

        PB_9 = new QPushButton(WDNumber);
        PB_9->setObjectName(QString::fromUtf8("PB_9"));
        sizePolicy1.setHeightForWidth(PB_9->sizePolicy().hasHeightForWidth());
        PB_9->setSizePolicy(sizePolicy1);
        PB_9->setFont(font);

        gridLayout_6->addWidget(PB_9, 2, 3, 1, 1);

        PB_10 = new QPushButton(WDNumber);
        PB_10->setObjectName(QString::fromUtf8("PB_10"));
        sizePolicy1.setHeightForWidth(PB_10->sizePolicy().hasHeightForWidth());
        PB_10->setSizePolicy(sizePolicy1);
        PB_10->setFont(font);

        gridLayout_6->addWidget(PB_10, 3, 0, 1, 1);

        PB_0 = new QPushButton(WDNumber);
        PB_0->setObjectName(QString::fromUtf8("PB_0"));
        sizePolicy1.setHeightForWidth(PB_0->sizePolicy().hasHeightForWidth());
        PB_0->setSizePolicy(sizePolicy1);
        PB_0->setFont(font);

        gridLayout_6->addWidget(PB_0, 3, 1, 1, 1);

        PB_3 = new QPushButton(WDNumber);
        PB_3->setObjectName(QString::fromUtf8("PB_3"));
        sizePolicy1.setHeightForWidth(PB_3->sizePolicy().hasHeightForWidth());
        PB_3->setSizePolicy(sizePolicy1);
        PB_3->setFont(font);

        gridLayout_6->addWidget(PB_3, 0, 3, 1, 1);

        PB_5 = new QPushButton(WDNumber);
        PB_5->setObjectName(QString::fromUtf8("PB_5"));
        sizePolicy1.setHeightForWidth(PB_5->sizePolicy().hasHeightForWidth());
        PB_5->setSizePolicy(sizePolicy1);
        PB_5->setFont(font);

        gridLayout_6->addWidget(PB_5, 1, 1, 1, 1);

        PB_4 = new QPushButton(WDNumber);
        PB_4->setObjectName(QString::fromUtf8("PB_4"));
        sizePolicy1.setHeightForWidth(PB_4->sizePolicy().hasHeightForWidth());
        PB_4->setSizePolicy(sizePolicy1);
        PB_4->setFont(font);

        gridLayout_6->addWidget(PB_4, 1, 0, 1, 1);

        PB_6 = new QPushButton(WDNumber);
        PB_6->setObjectName(QString::fromUtf8("PB_6"));
        sizePolicy1.setHeightForWidth(PB_6->sizePolicy().hasHeightForWidth());
        PB_6->setSizePolicy(sizePolicy1);
        PB_6->setFont(font);

        gridLayout_6->addWidget(PB_6, 1, 3, 1, 1);

        PB_1 = new QPushButton(WDNumber);
        PB_1->setObjectName(QString::fromUtf8("PB_1"));
        sizePolicy1.setHeightForWidth(PB_1->sizePolicy().hasHeightForWidth());
        PB_1->setSizePolicy(sizePolicy1);
        PB_1->setFont(font);

        gridLayout_6->addWidget(PB_1, 0, 0, 1, 1);

        PB_2 = new QPushButton(WDNumber);
        PB_2->setObjectName(QString::fromUtf8("PB_2"));
        sizePolicy1.setHeightForWidth(PB_2->sizePolicy().hasHeightForWidth());
        PB_2->setSizePolicy(sizePolicy1);
        PB_2->setFont(font);

        gridLayout_6->addWidget(PB_2, 0, 1, 1, 1);

        PB_11 = new QPushButton(WDNumber);
        PB_11->setObjectName(QString::fromUtf8("PB_11"));
        sizePolicy1.setHeightForWidth(PB_11->sizePolicy().hasHeightForWidth());
        PB_11->setSizePolicy(sizePolicy1);
        PB_11->setFont(font);

        gridLayout_6->addWidget(PB_11, 3, 3, 1, 1);


        gridLayout_4->addWidget(WDNumber, 1, 0, 1, 1);

        widget_2 = new QWidget(frame);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 6, 6, 0);
        btnLogin = new QPushButton(widget_2);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnLogin->sizePolicy().hasHeightForWidth());
        btnLogin->setSizePolicy(sizePolicy2);
        btnLogin->setMinimumSize(QSize(100, 45));
        btnLogin->setMaximumSize(QSize(100, 45));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        btnLogin->setFont(font1);

        gridLayout_3->addWidget(btnLogin, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);

        btnCancel = new QPushButton(widget_2);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        sizePolicy2.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy2);
        btnCancel->setMinimumSize(QSize(100, 45));
        btnCancel->setMaximumSize(QSize(100, 45));
        btnCancel->setFont(font1);

        gridLayout_3->addWidget(btnCancel, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 4, 1, 1);


        gridLayout_4->addWidget(widget_2, 2, 0, 1, 1);

        widget_3 = new QWidget(frame);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_5 = new QGridLayout(widget_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 9, 0, 0);
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 45));
        label->setMaximumSize(QSize(16777215, 45));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        linePassword = new QLineEdit(widget_3);
        linePassword->setObjectName(QString::fromUtf8("linePassword"));
        sizePolicy2.setHeightForWidth(linePassword->sizePolicy().hasHeightForWidth());
        linePassword->setSizePolicy(sizePolicy2);
        linePassword->setMinimumSize(QSize(200, 32));
        linePassword->setMaximumSize(QSize(16777215, 45));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(false);
        linePassword->setFont(font3);
        linePassword->setStyleSheet(QString::fromUtf8("/*QLineEdit {\n"
"border: 2px solid #464646;\n"
"}*/"));
        linePassword->setFrame(false);
        linePassword->setEchoMode(QLineEdit::Password);
        linePassword->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(linePassword, 0, 1, 1, 1);


        gridLayout_4->addWidget(widget_3, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        widget = new QWidget(YtPasswordui);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 20));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(9);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 0, 9, 3);
        horizontalSpacer_3 = new QSpacerItem(258, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        labelPasswordChange = new QLabel(widget);
        labelPasswordChange->setObjectName(QString::fromUtf8("labelPasswordChange"));
        labelPasswordChange->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        labelPasswordChange->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelPasswordChange);


        gridLayout->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(YtPasswordui);

        QMetaObject::connectSlotsByName(YtPasswordui);
    } // setupUi

    void retranslateUi(QDialog *YtPasswordui)
    {
        YtPasswordui->setWindowTitle(QCoreApplication::translate("YtPasswordui", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        PB_8->setText(QCoreApplication::translate("YtPasswordui", "8", nullptr));
        PB_7->setText(QCoreApplication::translate("YtPasswordui", "7", nullptr));
        PB_9->setText(QCoreApplication::translate("YtPasswordui", "9", nullptr));
        PB_10->setText(QCoreApplication::translate("YtPasswordui", "<-", nullptr));
        PB_0->setText(QCoreApplication::translate("YtPasswordui", "0", nullptr));
        PB_3->setText(QCoreApplication::translate("YtPasswordui", "3", nullptr));
        PB_5->setText(QCoreApplication::translate("YtPasswordui", "5", nullptr));
        PB_4->setText(QCoreApplication::translate("YtPasswordui", "4", nullptr));
        PB_6->setText(QCoreApplication::translate("YtPasswordui", "6", nullptr));
        PB_1->setText(QCoreApplication::translate("YtPasswordui", "1", nullptr));
        PB_2->setText(QCoreApplication::translate("YtPasswordui", "2", nullptr));
        PB_11->setText(QCoreApplication::translate("YtPasswordui", "Clear", nullptr));
        btnLogin->setText(QCoreApplication::translate("YtPasswordui", "\347\231\273\345\275\225", nullptr));
        btnCancel->setText(QCoreApplication::translate("YtPasswordui", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("YtPasswordui", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        linePassword->setText(QString());
        labelPasswordChange->setText(QCoreApplication::translate("YtPasswordui", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YtPasswordui: public Ui_YtPasswordui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YTPASSWORDUI_H
