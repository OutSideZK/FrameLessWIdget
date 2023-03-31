#ifndef MANAGEMENTPASSWORDDLG_H
#define MANAGEMENTPASSWORDDLG_H

#pragma execution_character_set("utf-8")

#include <QDialog>
#include <QMap>
#include <QTableWidgetItem>

struct TYP_USER_INFO {
    QString PassWord;
    QString type;
};

class ManageUser
{
public:
    explicit ManageUser()
    {
        m_mapUser.clear();
    }
    void ClearAllData(); // 清空所有的信息
    void toLoadData(const QString &path); // 加载信息
    void toSaveData(const QString &path); // 保存信息
    QVector<QString> toGetKeyList(); // 获取所有的用户名称
    void toDeletDataByKey(const QString &key);  // 删除用户
    void toInsertData(const QString &key, const QString &pass, const QString &type);    // 添加用户信息
    QString toGetKeyInfo(const QString &key);   // 获取对应用户的权限
    QString toGetDataQStringVal(const QString &key);    // 获取用户对应的密码

public:
    QMap<QString, TYP_USER_INFO> m_mapUser;  // 保存所有的用户信息，用户名是key
};

namespace Ui
{
    class ManagementPasswordDlg;
}

class ManagementPasswordDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ManagementPasswordDlg(QDialog *parent = 0, const bool bUserName = false);
    ~ManagementPasswordDlg();

    // 初始化界面
    void initUi();

    // 验证用户名密码
    int checkUserPassword(const QString strUserName, const QString strPassword);

private slots:
    void on_btnAdd_clicked();

    void on_btnConfirmAdd_clicked();

    void on_btnDel_clicked();

    void on_tableWidget_itemDoubleClicked(QTableWidgetItem *item);

    void on_btnConfirmChange_clicked();

    void on_tableWidget_itemClicked(QTableWidgetItem *item);

    void on_btnSave_clicked();

    void on_btnCancel_clicked();

    void on_cbbChangeUserAuthority_currentIndexChanged(int index);

    void on_cbbAddUserAuthority_currentIndexChanged(int index);

private:
    Ui::ManagementPasswordDlg *ui;
    ManageUser m_valUesrManagement;     // 用户管理
    bool m_bDarkMode;
    bool m_bUserName;
    int m_nTableRowRecord;            // 当前Table行数
    int m_nDelRowRecord;              // 要删除得Table行数
    int m_nCurrAuthority;             // 当前用户权限
    QString m_strValPath;             // 用户管理数据存储位置
    QMap<int, QString> m_mapAuthority;

};

#endif // MANAGEMENTPASSWORDDLG_H
