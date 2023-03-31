#include "insertnumberdlg.h"
#include "ui_insertnumberdlg.h"

InsertNumberDlg::InsertNumberDlg(QWidget *parent, QString InitStr) :
    QDialog(parent),
    ui(new Ui::InsertNumberDlg)
{
    ui->setupUi(this);

    ui->lineEdit->setText(InitStr);
    QList<QPushButton *> button = ui->WDNumber->findChildren<QPushButton *>();

    for(int i = 0; i < button.count(); i++) { //通过i的范围确定需要设置哪些button
        connect(button.at(i), &QPushButton::clicked, this, &InsertNumberDlg::ButtonDo);
    }
}

InsertNumberDlg::~InsertNumberDlg()
{
    delete ui;
}

void InsertNumberDlg::on_PB_Confirm_clicked()
{
    m_TargetStr = ui->lineEdit->text();
    accept();
}


void InsertNumberDlg::on_PB_Cancle_clicked()
{
    reject();
}

void InsertNumberDlg::ButtonDo()
{
    QPushButton *btn = qobject_cast<QPushButton *>(sender());
    QString temstr = ui->lineEdit->text();
    if(btn->text() == "Clear") {
        temstr = "";
    } else if(btn->text() == "-") {
        if(!temstr.contains("-")) {
            temstr = "-" + temstr;
        }
    } else if(btn->text() == "+") {
        if(temstr.contains("-")) {
            temstr = temstr.mid(1, -1);
        }
    } else if(btn->text() == "<-") {
        int tlen = temstr.length();
        if(tlen > 1) {
            temstr = temstr.mid(0, tlen - 1);
        }
    } else {
        ui->lineEdit->insert(btn->text());

    }
    temstr = ui->lineEdit->text();

}


