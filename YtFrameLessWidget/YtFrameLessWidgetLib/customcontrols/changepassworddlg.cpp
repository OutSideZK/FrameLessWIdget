#include "changepassworddlg.h"
#include "ui_changepassworddlg.h"
#include <QDesktopServices>
#include <QTextCodec>
#include <QDate>
#include <QDebug>
#include <QToolTip>
#include "ytframelesswidgetlib.h"

ChangePassWordDlg::ChangePassWordDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePassWordDlg)
{
    ui->setupUi(this);
    initUI();
}

ChangePassWordDlg::~ChangePassWordDlg()
{
    delete ui;
}

QString ChangePassWordDlg::GetPassword()
{
    QString strSystemPath = QStandardPaths::writableLocation(QStandardPaths::AppConfigLocation);
    QString strIniPath = strSystemPath + "/config.ini";
    qDebug() << strSystemPath;
    QSettings loadConfig(strIniPath, QSettings::IniFormat);
    loadConfig.setIniCodec(QTextCodec::codecForName("GB2312"));
    return loadConfig.value(QString("App/PassWord"), 123456).toString();
}

void ChangePassWordDlg::SetPassword(const QString strPassword)
{
    QString strSystemPath = QStandardPaths::writableLocation(QStandardPaths::AppConfigLocation);
    QString strIniPath = strSystemPath + "/config.ini";
    QSettings writeConfig(strIniPath, QSettings::IniFormat);
    writeConfig.setIniCodec(QTextCodec::codecForName("GB2312"));
    writeConfig.setValue(QString("App/PassWord"), strPassword);
}

void ChangePassWordDlg::initUI()
{
    ui->btnLogin->setEnabled(false);
    ui->widget_2->hide();
    ui->widget_3->hide();
}

void ChangePassWordDlg::on_btnLogin_clicked()
{
    QString pass_new, pass_check;
    pass_new = ui->linePassword_New->text();
    pass_check = ui->linePassword_NewCheck->text();

    if(pass_new.isEmpty() || pass_check.isEmpty()) {
        //QToolTip::showText(cursor().pos(), u8"密码为空，请输入密码！", this);
        YtMessageBox::YtShowError(u8"警告", u8"密码为空，请输入密码！");
        return;
    }

    if(0 == pass_new.compare(pass_check, Qt::CaseSensitive)) {
        if(0 == pass_new.compare(GetPassword(), Qt::CaseSensitive)) {
            //QToolTip::showText(cursor().pos(), u8"新密码与旧密码不能相同，请重新输入！", this);
            YtMessageBox::YtShowError(u8"警告", u8"新密码与旧密码不能相同，请重新输入！");
            return;
        } else {
            SetPassword(pass_new);
            //QToolTip::showText(cursor().pos(), u8"新密码修改成功", this);
            YtMessageBox::YtShowSuccess(u8"警告", u8"新密码修改成功");
            accept();
        }
    } else {
        //QToolTip::showText(cursor().pos(), u8"两次输入的密码不同，请重新输入！", this);
        YtMessageBox::YtShowError(u8"警告", u8"两次输入的密码不同，请重新输入！");
        return;
    }
}

void ChangePassWordDlg::on_btnCancel_clicked()
{
    accept();
}

void ChangePassWordDlg::on_btnCheck_clicked()
{
    // 与现有的密码进行匹配，如果一致则显示修改框
    if(ui->linePassword->text().isEmpty()) {
        //QToolTip::showText(cursor().pos(), u8"密码为空，请输入密码！", this);
        YtMessageBox::YtShowError(u8"警告", u8"密码为空，请输入密码！");
        return;
    }

    if((0 == ui->linePassword->text().compare(GetPassword(), Qt::CaseSensitive))
            || (0 == ui->linePassword->text().compare(QDate::currentDate().toString("yyyyMMdd"), Qt::CaseSensitive))) {
        ui->widget_2->show();
        ui->widget_3->show();
        ui->widget->setEnabled(false);
        ui->btnCheck->setEnabled(false);
        ui->btnLogin->setEnabled(true);
    } else {
        ui->linePassword->clear();
        ui->widget_2->hide();
        ui->widget_3->hide();
        //QToolTip::showText(cursor().pos(), u8"密码错误，请重新输入密码", this);
        YtMessageBox::YtShowError(u8"警告", u8"密码错误，请重新输入密码！");
    }
}
