#include "ytmessageboxui.h"
#include "qdebug.h"
#include "ui_ytmessageboxui.h"

YtMessageBoxUI::YtMessageBoxUI(QWidget *parent, int icon, QString message) :
    QDialog(parent),
    ui(new Ui::YtMessageBoxUI)
{
    ui->setupUi(this);

    QPixmap pixmap;
    switch(icon) {
        case 0:
            ui->btnCancel->hide();
            pixmap.load(":/messagebox/image/messagebox/success.png");
            break;
        case 1:
            ui->btnCancel->hide();
            pixmap.load(":/messagebox/image/messagebox/error.png");
            break;
        case 2:
            pixmap.load(":/messagebox/image/messagebox/question.png");
            break;
        case 3:
            ui->btnCancel->hide();
            pixmap.load(":/messagebox/image/messagebox/warning.png");
            break;
    }

    ui->label_Image->setPixmap(pixmap);
    ui->label_Image->setFixedSize(35, 35);
    ui->label_Image->setScaledContents(true);
    ui->LabelMessage->setText(message);
}

YtMessageBoxUI::~YtMessageBoxUI()
{
    delete ui;
}

void YtMessageBoxUI::on_btnConfirm_clicked()
{
    accept();
}


void YtMessageBoxUI::on_btnCancel_clicked()
{
    reject();
}

