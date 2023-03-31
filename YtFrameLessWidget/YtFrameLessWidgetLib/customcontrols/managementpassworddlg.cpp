#include "managementpassworddlg.h"
#include "ui_managementpassworddlg.h"
#include <QDesktopServices>
#include <QDir>
#include <QDebug>
#include <QToolTip>
#include <QDateTime>
#include "ytframelesswidgetlib.h"
#include <QToolTip>

ManagementPasswordDlg::ManagementPasswordDlg(QDialog *parent, const bool bUserName) :
    QDialog(parent),
    ui(new Ui::ManagementPasswordDlg)
{
    ui->setupUi(this);
    m_bUserName = bUserName;
    m_nTableRowRecord = -1;
    m_nDelRowRecord = -1;
    m_nCurrAuthority = kOperator;
    m_mapAuthority.clear();
    m_mapAuthority = {
        {kOperator, "操作员"},
        {kEngineer, "工程师"},
        {kAdministrator, "管理员"},
        {kSuperUser, "超级管理员"}
    };

    QString strSystemPath = QStandardPaths::writableLocation(QStandardPaths::AppConfigLocation);
    QDir dir(strSystemPath);
    if(!dir.exists()) {
        dir.mkpath(strSystemPath);
    }
    m_strValPath = strSystemPath + "/NewUserManagerment.data";

    // init ui
    initUi();
}

ManagementPasswordDlg::~ManagementPasswordDlg()
{
    delete ui;
}

void ManagementPasswordDlg::initUi()
{
    ui->stackedWidget->hide();
    if(m_nCurrAuthority == kSuperUser) {
        ui->lineEditAddPassword->setEchoMode(QLineEdit::Normal);
        ui->lineEditAddPasswordConfirm->setEchoMode(QLineEdit::Normal);
        ui->lineEditChangePassword->setEchoMode(QLineEdit::Normal);
        ui->lineEditChangePasswordConfirm->setEchoMode(QLineEdit::Normal);
    } else {
        ui->lineEditAddPassword->setEchoMode(QLineEdit::Password);
        ui->lineEditAddPasswordConfirm->setEchoMode(QLineEdit::Password);
        ui->lineEditChangePassword->setEchoMode(QLineEdit::Password);
        ui->lineEditChangePasswordConfirm->setEchoMode(QLineEdit::Password);
    }

    if(!m_bUserName) {
        ui->lineEditAddUserName->setEnabled(false);
        ui->lineEditChangeUserName->setEnabled(false);
    }

    // 清除表格
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(2);
    QStringList listHeaders;
    listHeaders.clear();
    listHeaders << "用户名称" << "用户权限";
    ui->tableWidget->setHorizontalHeaderLabels(listHeaders);
    // set table view
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    ui->tableWidget->horizontalHeader()->setFixedHeight(38); //设置表头的高度
    // 只能单选
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    // 以行作为选择标准
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::QAbstractItemView::SelectRows);
    // 垂直行头隐藏
    ui->tableWidget->verticalHeader()->hide();
    // 让列头可被点击，触发点击事件
    ui->tableWidget->horizontalHeader()->setSectionsClickable(false);
    // 设置表格不可编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // 读取序列化文件
    m_valUesrManagement.ClearAllData();
    m_valUesrManagement.toLoadData(m_strValPath);
    QVector<QString> vecUserNames = m_valUesrManagement.toGetKeyList();
    ui->tableWidget->setRowCount(vecUserNames.size());
    for(int i = 0; i < vecUserNames.size(); i++) {
        QString strUserName = vecUserNames.at(i);
        int nAuthority = m_valUesrManagement.toGetKeyInfo(strUserName).toInt();
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(strUserName));
        ui->tableWidget->item(i, 0)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(m_mapAuthority.value(nAuthority)));
        ui->tableWidget->item(i, 1)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }

    ui->tableWidget->setColumnWidth(0, 300);
}

int ManagementPasswordDlg::checkUserPassword(const QString strUserName, const QString strPassword)
{
    int nAuthority = -1;
    if(strPassword.isEmpty()) {
        return nAuthority;
    }

    if(m_bUserName) {
        // 需要验证用户名
        QString strDesPassword = m_valUesrManagement.toGetDataQStringVal(strUserName);
        if(strDesPassword == strPassword) {
            nAuthority = m_valUesrManagement.toGetKeyInfo(strUserName).toInt();
        }
    } else {
        // 不需要验证用户名
        QVector<QString> vecUserNames = m_valUesrManagement.toGetKeyList();
        foreach(QString strUserNameT, vecUserNames) {
            QString strDesPassword = m_valUesrManagement.toGetDataQStringVal(strUserNameT);
            if(strDesPassword == strPassword) {
                nAuthority = m_valUesrManagement.toGetKeyInfo(strUserNameT).toInt();
                break;
            }
        }
    }

    // 超级管理员验证
    QString strSuperPassword = QDateTime::currentDateTime().toString("yyyyMMdd");
    if(0 == strPassword.compare(strSuperPassword, Qt::CaseInsensitive)) {
        nAuthority = kSuperUser;
    }

    m_nCurrAuthority = nAuthority;
    return nAuthority;
}

void ManagementPasswordDlg::on_btnAdd_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->show();

    ui->lineEditAddUserName->clear();
    ui->lineEditAddPassword->clear();
    ui->lineEditAddPasswordConfirm->clear();
    ui->cbbAddUserAuthority->setCurrentIndex(1);
    ui->cbbAddUserAuthority->setCurrentIndex(0);
}

void ManagementPasswordDlg::on_btnConfirmAdd_clicked()
{
    QString strUserName = ui->lineEditAddUserName->text().trimmed();
    QString strPassword = ui->lineEditAddPassword->text().trimmed();
    QString strPasswordConfirm = ui->lineEditAddPasswordConfirm->text().trimmed();
    int nAuthority = ui->cbbAddUserAuthority->currentIndex() + 1;

    if(strUserName.isEmpty()
            || strPassword.isEmpty()
            || strPasswordConfirm.isEmpty()) {
        YtMessageBox::YtShowError("系统提示", "用户名或者密码不能为空！");
        return;
    }

    QVector<QString> vecUserNames = m_valUesrManagement.toGetKeyList();
    if(vecUserNames.contains(strUserName)) {
        YtMessageBox::YtShowError("系统提示", "用户名已存在！");
        return;
    }

    if(strPassword != strPasswordConfirm) {
        YtMessageBox::YtShowError("系统提示", "两次输入的密码不同，请重新输入！");
        return;
    }

    int nRowCount = ui->tableWidget->rowCount(); //获得表的行数
    ui->tableWidget->setRowCount(nRowCount + 1);
    m_valUesrManagement.toInsertData(strUserName, strPassword, QString::number(nAuthority));
    ui->tableWidget->setItem(nRowCount, 0, new QTableWidgetItem(strUserName));
    ui->tableWidget->item(nRowCount, 0)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->setItem(nRowCount, 1, new QTableWidgetItem(m_mapAuthority.value(nAuthority)));
    ui->tableWidget->item(nRowCount, 1)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->scrollToBottom();
    ui->stackedWidget->hide();
}

void ManagementPasswordDlg::on_btnDel_clicked()
{
    if(m_nDelRowRecord == -1) {
        YtMessageBox::YtShowWarning("系统提示", "请先选择需要删除的用户!");
        return;
    }

    if(1 == YtMessageBox::YtShowQuestion("系统提示", "确定删除当前用户吗？")) {
        m_valUesrManagement.toDeletDataByKey(ui->tableWidget->item(m_nDelRowRecord, 0)->text());
        ui->tableWidget->removeRow(m_nDelRowRecord);
        //删除成功则重置行位置记录
        m_nDelRowRecord = -1;
        m_nTableRowRecord = -1;
    }
    ui->stackedWidget->hide();
}

void ManagementPasswordDlg::on_tableWidget_itemDoubleClicked(QTableWidgetItem *item)
{
    Q_UNUSED(item);
    m_nTableRowRecord = ui->tableWidget->currentRow();
    QString strUserName = ui->tableWidget->item(m_nTableRowRecord, 0)->text();
    int nAuthority = kOperator;
    QMap<int, QString>::iterator it = m_mapAuthority.begin();
    for(; it != m_mapAuthority.end(); it++) {
        if(it.value() == ui->tableWidget->item(m_nTableRowRecord, 1)->text()) {
            nAuthority = it.key();
            break;
        }
    }

    ui->lineEditChangeUserName->setText(strUserName);
    ui->cbbChangeUserAuthority->setCurrentIndex(nAuthority - 1);
    ui->lineEditChangePassword->setText(m_valUesrManagement.toGetDataQStringVal(strUserName));
    ui->lineEditChangePasswordConfirm->setText(m_valUesrManagement.toGetDataQStringVal(strUserName));

    ui->stackedWidget->setCurrentIndex(1);
    ui->stackedWidget->show();
}

void ManagementPasswordDlg::on_btnConfirmChange_clicked()
{
    if(m_nTableRowRecord == -1) {
        YtMessageBox::YtShowWarning("系统提示", "请先选择需要修改的内容!");
        return;
    }
    QString strSrcUserName = ui->tableWidget->item(m_nTableRowRecord, 0)->text();
    QString strDesUserName = ui->lineEditChangeUserName->text().trimmed();
    QString strDesPassword = ui->lineEditChangePassword->text().trimmed();
    QString strDesPasswordConfirm = ui->lineEditChangePasswordConfirm->text().trimmed();
    int nAuthority = ui->cbbChangeUserAuthority->currentIndex() + 1;

    if(strDesUserName.isEmpty()
            || strDesPassword.isEmpty()
            || strDesPasswordConfirm.isEmpty()) {
        YtMessageBox::YtShowError("系统提示", "用户名或者密码不能为空！！");
        return;
    }

    if(strDesPassword != strDesPasswordConfirm) {
        YtMessageBox::YtShowError("系统提示", "两次输入的密码不同，请重新输入！");
        return;
    }

    if(strSrcUserName != strDesUserName) {
        // 名称作为Key，要修改名称需要先删除再添加，并且判断要修改的名称是否存在
        QVector<QString> vecUserNames = m_valUesrManagement.toGetKeyList();
        if(vecUserNames.contains(strDesUserName)) {
            YtMessageBox::YtShowError("系统提示", "用户名已存在！");
            return;
        }

        m_valUesrManagement.toDeletDataByKey(strSrcUserName);
        m_valUesrManagement.toInsertData(strDesUserName, strDesPassword, QString::number(nAuthority));
    } else {
        // 不修改名称
//        m_valUesrManagement.toSetData(strDesPassword, strDesUserName);
//        m_valUesrManagement.toSetInfoData(QString::number(nAuthority), strDesUserName);
        m_valUesrManagement.toInsertData(strDesUserName, strDesPassword, QString::number(nAuthority));
    }
    ui->tableWidget->item(m_nTableRowRecord, 0)->setText(strDesUserName);
    ui->tableWidget->item(m_nTableRowRecord, 1)->setText(m_mapAuthority.value(nAuthority));

    ui->stackedWidget->hide();
}

void ManagementPasswordDlg::on_tableWidget_itemClicked(QTableWidgetItem *item)
{
    Q_UNUSED(item);
    m_nDelRowRecord = ui->tableWidget->currentRow();
}

void ManagementPasswordDlg::on_btnSave_clicked()
{
    m_valUesrManagement.toSaveData(m_strValPath);
    accept();
}

void ManagementPasswordDlg::on_btnCancel_clicked()
{
    reject();
}

void ManagementPasswordDlg::on_cbbChangeUserAuthority_currentIndexChanged(int index)
{
    if(!m_bUserName) {
        ui->lineEditChangeUserName->setText(m_mapAuthority.value(index + 1));
    }
}

void ManagementPasswordDlg::on_cbbAddUserAuthority_currentIndexChanged(int index)
{
    if(!m_bUserName) {
        ui->lineEditAddUserName->setText(m_mapAuthority.value(index + 1));
    }
}

void ManageUser::ClearAllData()
{
    m_mapUser.clear();
}

void ManageUser::toLoadData(const QString &path)
{
    m_mapUser.clear();
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly)) {
        return;
    }
    QDataStream in(&file);
    int size = 0;
    QString User = "";
    QString Pass = "";
    QString type = "";
    in >> size;
    for(int i = 0; i < size; i++) {
        in >> User;
        in >> Pass;
        in >> type;
        toInsertData(User, Pass, type);
    }
    file.close();
}

void ManageUser::toSaveData(const QString &path)
{
    QFile file(path);
    if(!file.open(QIODevice::WriteOnly)) {
        return;
    }
    QDataStream out(&file);
    out << m_mapUser.size();
    QMap<QString, TYP_USER_INFO>::ConstIterator it = m_mapUser.constBegin();
    while (it != m_mapUser.constEnd()) {
        out << it.key() << it.value().PassWord << it.value().type;
        ++it;
    }

    file.close();
}

QVector<QString> ManageUser::toGetKeyList()
{
    QVector<QString> value;
    value.clear();
    if(m_mapUser.isEmpty()) {
        return value;
    }
    QMap<QString, TYP_USER_INFO>::ConstIterator it = m_mapUser.constBegin();
    while (it != m_mapUser.constEnd()) {
        value.push_back(it.key());
        ++it;
    }
    return value;
}

void ManageUser::toDeletDataByKey(const QString &key)
{
    if(m_mapUser.contains(key)) {
        m_mapUser.remove(key);
    }
}

void ManageUser::toInsertData(const QString &key, const QString &pass, const QString &type)
{
    if(m_mapUser.contains(key)) {
        return;
    }
    m_mapUser.insert(key, {pass, type});
}

QString ManageUser::toGetKeyInfo(const QString &key)
{
    QString value;
    value.clear();

    if(m_mapUser.contains(key)) {
        value = m_mapUser.value(key).type;
    }

    return value;
}

QString ManageUser::toGetDataQStringVal(const QString &key)
{
    QString value;
    value.clear();

    if(m_mapUser.contains(key)) {
        value = m_mapUser.value(key).PassWord;
    }

    return value;
}
