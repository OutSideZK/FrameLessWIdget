#include "insertstringdlg.h"
#include "ui_insertstringdlg.h"
#include <qdebug.h>

InsertStringDlg::InsertStringDlg(QWidget *parent, QString InitStr) :
    QDialog(parent),
    ui(new Ui::InsertStringDlg)
{
    ui->setupUi(this);
    ui->lineEdit->setText(InitStr);

    QList<QPushButton *> button = ui->WDNumber->findChildren<QPushButton *>();
    for(int i = 0; i < button.count(); i++) { //通过i的范围确定需要设置哪些button
        connect(button.at(i), &QPushButton::clicked, this, &InsertStringDlg::ButtonDo);
    }
}

InsertStringDlg::~InsertStringDlg()
{
    delete ui;
}

void InsertStringDlg::ButtonDo()
{

    QPushButton *btn = qobject_cast<QPushButton *>(sender());
    QString temstr = ui->lineEdit->text();
    qDebug() <<  temstr;
    if(btn->text() == "Space") {
        temstr += " ";
    } else {
        temstr = temstr + btn->text();
    }
    ui->lineEdit->setText(temstr);
}

void InsertStringDlg::on_btn_clear_clicked()
{
    ui->lineEdit->setText("");
}

void InsertStringDlg::on_btn_del_clicked()
{
    QString temstr = ui->lineEdit->text();
    temstr = temstr.left(temstr.length() - 1);
    ui->lineEdit->setText(temstr);
}


void InsertStringDlg::on_btn_confirm_clicked()
{
    m_TargetStr = ui->lineEdit->text();
    accept();
}


void InsertStringDlg::on_btn_cancel_clicked()
{
    reject();
}

