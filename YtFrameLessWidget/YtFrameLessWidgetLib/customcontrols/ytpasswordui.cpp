#include "ytpasswordui.h"
#include "changepassworddlg.h"
#include "qdatetime.h"
#include "qdebug.h"
#include "ui_ytpasswordui.h"
#include <QToolTip>
#include "ytframelesswidgetlib.h"

YtPasswordui::YtPasswordui(QWidget *parent, QString strTargetPassword, bool bVirtualKeyBoard) :
    QDialog(parent),
    ui(new Ui::YtPasswordui)
{
    ui->setupUi(this);

    m_strTargetPassward = strTargetPassword;
    if(!m_strTargetPassward.isEmpty()) {
        ui->labelPasswordChange->hide();
    }

    if(!bVirtualKeyBoard) {
        ui->WDNumber->hide();
    }
    ui->labelPasswordChange->setText(u8"<a style='color: white;' href = 修改密码 >修改密码</a>");

    QList<QPushButton *> button = ui->WDNumber->findChildren<QPushButton *>();
    for(int i = 0; i < button.count(); i++) {
        //通过i的范围确定需要设置哪些button
        connect(button.at(i), &QPushButton::clicked, this, &YtPasswordui::ButtonDo);
    }
    ui->linePassword->setFocus();
    m_iCurrentCursorPos = 0;
}

YtPasswordui::~YtPasswordui()
{
    delete ui;
}

void YtPasswordui::on_btnLogin_clicked()
{
    QString strPassward = ui->linePassword->text();
    if(strPassward.isEmpty()) {
        //QToolTip::showText(this->cursor().pos(), u8"密码不能为空", this);
        YtMessageBox::YtShowError(u8"警告", u8"密码不能为空");
        return;
    }

    QString strTargetPassward = "";
    if(!m_strTargetPassward.isEmpty()) {
        strTargetPassward = m_strTargetPassward;
    }

    if((0 == strPassward.compare(strTargetPassward, Qt::CaseInsensitive))) {
        // 工程师
        done(1);
    } else if((0 == strPassward.compare(QDate::currentDate().toString("yyyyMMdd"), Qt::CaseInsensitive))) {
        // 超级用户
        done(4);
    } else {
        //QToolTip::showText(cursor().pos(), u8"密码错误", this);
        YtMessageBox::YtShowError(u8"警告", u8"密码错误");
    }
    ui->linePassword->clear();
}

void YtPasswordui::on_btnCancel_clicked()
{
    reject();
}

void YtPasswordui::ButtonDo()
{
    QPushButton *btn = qobject_cast<QPushButton *>(sender());
    QString temstr = ui->linePassword->text();
    int itemppos = 0;
    if(btn->text() == "Clear") {
        temstr = "";
        itemppos = 0;
    } else if(btn->text() == "<-") {
        temstr.remove(m_iCurrentCursorPos - 1, 1);
        itemppos = m_iCurrentCursorPos - 1;
    } else {
        temstr.insert(m_iCurrentCursorPos, btn->text());
        itemppos = m_iCurrentCursorPos + 1;
    }
    ui->linePassword->setText(temstr);
    ui->linePassword->setCursorPosition(itemppos);
}

void YtPasswordui::on_labelPasswordChange_linkActivated(const QString &link)
{
    Q_UNUSED(link);
    ChangePassWordDlg changePasswordDlg(this);
    YtFrameLessWidgetLib::YtSetShowForm(&changePasswordDlg, "", QPoint(0, 0), false, false, true, false, false, true);
}


void YtPasswordui::on_linePassword_cursorPositionChanged(int arg1, int arg2)
{
    Q_UNUSED(arg1);
    m_iCurrentCursorPos = arg2;
}
