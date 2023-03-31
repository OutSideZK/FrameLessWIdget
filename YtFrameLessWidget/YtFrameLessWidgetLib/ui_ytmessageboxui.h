/********************************************************************************
** Form generated from reading UI file 'ytmessageboxui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YTMESSAGEBOXUI_H
#define UI_YTMESSAGEBOXUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YtMessageBoxUI
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_Image;
    QSpacerItem *verticalSpacer;
    QLabel *LabelMessage;
    QGridLayout *gridLayout_2;
    QPushButton *btnConfirm;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *YtMessageBoxUI)
    {
        if (YtMessageBoxUI->objectName().isEmpty())
            YtMessageBoxUI->setObjectName(QString::fromUtf8("YtMessageBoxUI"));
        YtMessageBoxUI->resize(300, 117);
        YtMessageBoxUI->setMinimumSize(QSize(300, 117));
        gridLayout = new QGridLayout(YtMessageBoxUI);
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_Image = new QLabel(YtMessageBoxUI);
        label_Image->setObjectName(QString::fromUtf8("label_Image"));
        label_Image->setMinimumSize(QSize(50, 50));
        label_Image->setMaximumSize(QSize(50, 50));

        verticalLayout->addWidget(label_Image);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        LabelMessage = new QLabel(YtMessageBoxUI);
        LabelMessage->setObjectName(QString::fromUtf8("LabelMessage"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LabelMessage->sizePolicy().hasHeightForWidth());
        LabelMessage->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        LabelMessage->setFont(font);

        horizontalLayout->addWidget(LabelMessage);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btnConfirm = new QPushButton(YtMessageBoxUI);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnConfirm->sizePolicy().hasHeightForWidth());
        btnConfirm->setSizePolicy(sizePolicy1);
        btnConfirm->setMinimumSize(QSize(70, 40));
        btnConfirm->setMaximumSize(QSize(70, 40));

        gridLayout_2->addWidget(btnConfirm, 0, 1, 1, 1);

        btnCancel = new QPushButton(YtMessageBoxUI);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        sizePolicy1.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy1);
        btnCancel->setMinimumSize(QSize(70, 40));
        btnCancel->setMaximumSize(QSize(70, 40));

        gridLayout_2->addWidget(btnCancel, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 1);


        retranslateUi(YtMessageBoxUI);

        QMetaObject::connectSlotsByName(YtMessageBoxUI);
    } // setupUi

    void retranslateUi(QWidget *YtMessageBoxUI)
    {
        YtMessageBoxUI->setWindowTitle(QCoreApplication::translate("YtMessageBoxUI", "Form", nullptr));
#if QT_CONFIG(whatsthis)
        YtMessageBoxUI->setWhatsThis(QCoreApplication::translate("YtMessageBoxUI", "running", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_Image->setText(QCoreApplication::translate("YtMessageBoxUI", "pix", nullptr));
        LabelMessage->setText(QString());
        btnConfirm->setText(QCoreApplication::translate("YtMessageBoxUI", "\347\241\256\350\256\244", nullptr));
        btnCancel->setText(QCoreApplication::translate("YtMessageBoxUI", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YtMessageBoxUI: public Ui_YtMessageBoxUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YTMESSAGEBOXUI_H
