#include "maindlg.h"
#include "qdebug.h"
#include "ui_maindlg.h"
#include "testshowform.h"
#include "testdialog.h"

MainDlg::MainDlg(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainDlg)
{
    ui->setupUi(this);
}

MainDlg::~MainDlg()
{
    delete ui;
}


void MainDlg::on_btnShowWidget_clicked()
{
    testshowform form;
    YtFrameLessWidgetLib::YtSetShowForm(&form, YtStGetBuildTime, QPoint(10, 20), true, true, true, true, true, true, true);
}


void MainDlg::on_btnShowDialog_clicked()
{
    testDialog dlg;
    YtFrameLessWidgetLib::YtSetShowForm(&dlg, "this is testDialog", QPoint(10, 20), true, true, true, true, true, true, false);
}


void MainDlg::on_btnShowuccess_clicked()
{
    YtMessageBox::YtShowSuccess(u8"提示", u8"成功");
}


void MainDlg::on_btnShowError_clicked()
{
    YtMessageBox::YtShowError(u8"警告", u8"错误");
}


void MainDlg::on_btnShowQuestion_clicked()
{
    qDebug() << YtMessageBox::YtShowQuestion(u8"提示", u8"询问");
}


void MainDlg::on_btnShowWarning_clicked()
{
    YtMessageBox::YtShowWarning(u8"提示", u8"警告");
}


void MainDlg::on_btnShowPass_clicked()
{
    qDebug() << YtPasswardDlg::YtShowPassword(this, "", true);
}


void MainDlg::on_btnShowUserLogin_clicked()
{
    YtPasswardDlg::YtShowPasswordEx(this, true, false, true);
}


void MainDlg::on_btnnputNum_clicked()
{
    QString value;
    if(YtShowInputDlg("123456", value, true)) {
        YtMessageBox::YtShowSuccess("InputDlg", value);
    }
}

void MainDlg::on_btnInputchar_clicked()
{
    QString value;
    if(YtShowInputDlg("input message", value, false)) {
        YtMessageBox::YtShowSuccess("InputDlg", value);
    }
}


void MainDlg::on_btnnputNum_2_clicked()
{
    QString value;
    if(toGetNewQStringNumberAll("", "input message", value)) {
        YtMessageBox::YtShowSuccess("InputDlg", value);
    }
}


void MainDlg::on_btnInputchar_2_clicked()
{
    QString value;
    if(toGetNewQStringAll("", "input message", value)) {
        YtMessageBox::YtShowSuccess("InputDlg", value);
    }
}


void MainDlg::on_btnroduct_clicked()
{
    YtProductDlg::YtShowProductDialog();
}

