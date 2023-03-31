#include "ytpassworduiex.h"
#include "qpushbutton.h"
#include "ui_ytpassworduiex.h"
#include "ytframelesswidgetlib.h"

YtPassworduiEx::YtPassworduiEx(QWidget *parent, bool bVirtualKeyBoard, bool bUserName) :
    QDialog(parent),
    ui(new Ui::YtPassworduiEx)
{
    ui->setupUi(this);

    m_bUserName = bUserName;
    if(!m_bUserName) {
        ui->labelUserName->hide();
        ui->lineUserName->hide();
    }

    ui->labelUserManagement->setText(u8"<a style='color: white;' href = �û����� >�û�����</a>");

    if(!bVirtualKeyBoard) {
        ui->WDNumber->hide();
    }
    QList<QPushButton *> button = ui->WDNumber->findChildren<QPushButton *>();
    for(int i = 0; i < button.count(); i++) {
        //ͨ��i�ķ�Χȷ����Ҫ������Щbutton
        connect(button.at(i), &QPushButton::clicked, this, &YtPassworduiEx::ButtonDo);
    }
    ui->linePassword->setFocus();
    m_iCurrentCursorPos = 0;
    m_pManagementPasswordDlg = new ManagementPasswordDlg(this, m_bUserName);
}

YtPassworduiEx::~YtPassworduiEx()
{
    if(m_pManagementPasswordDlg != nullptr) {
        delete m_pManagementPasswordDlg;
        m_pManagementPasswordDlg = nullptr;
    }
    delete ui;
}

void YtPassworduiEx::on_btnLogin_clicked()
{
    QString strUserName = ui->lineUserName->text();
    QString strPassward = ui->linePassword->text();
    if(strPassward.isEmpty()) {
        YtMessageBox::YtShowWarning("ϵͳ��ʾ", "���벻��Ϊ��");
        return;
    }

    if(m_bUserName) {
        // ��Ҫ��֤�û���
        if(strUserName.isEmpty()) {
            YtMessageBox::YtShowWarning("ϵͳ��ʾ", "�û�������Ϊ��");
            return;
        }
    }

    int nAuthority = m_pManagementPasswordDlg->checkUserPassword(strUserName, strPassward);
    if(nAuthority <= 0) {
        YtMessageBox::YtShowError("ϵͳ��ʾ", "�������");
    } else {
        done(nAuthority);
    }

    ui->lineUserName->clear();
    ui->linePassword->clear();
}

void YtPassworduiEx::on_btnCancel_clicked()
{
    done(0);
}

void YtPassworduiEx::ButtonDo()
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

void YtPassworduiEx::on_labelUserManagement_linkActivated(const QString &link)
{
    Q_UNUSED(link);
    QString strUserName = ui->lineUserName->text();
    QString strPassward = ui->linePassword->text();
    if(strPassward.isEmpty()) {
        YtMessageBox::YtShowWarning("ϵͳ��ʾ", "���벻��Ϊ��");
        return;
    }

    if(m_bUserName) {
        // ��Ҫ��֤�û���
        if(strUserName.isEmpty()) {
            YtMessageBox::YtShowWarning("ϵͳ��ʾ", "�û�������Ϊ��");
            return;
        }
    }

    int nAuthority = m_pManagementPasswordDlg->checkUserPassword(strUserName, strPassward);
    if(nAuthority <= 0) {
        YtMessageBox::YtShowError("ϵͳ��ʾ", "�������");
        return;
    }

    if(nAuthority < kAdministrator) {
        YtMessageBox::YtShowWarning("ϵͳ��ʾ", "��ǰ�û�Ȩ�޲��㣡");
        return;
    }
    ui->lineUserName->clear();
    ui->linePassword->clear();

    m_pManagementPasswordDlg->initUi();
    YtFrameLessWidgetLib::YtSetShowForm(m_pManagementPasswordDlg, "", QPoint(0, 0), false, false, true, false, false, true);
}

void YtPassworduiEx::on_linePassword_cursorPositionChanged(int arg1, int arg2)
{
    Q_UNUSED(arg1)
    m_iCurrentCursorPos = arg2;
}
