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
    void ClearAllData(); // ������е���Ϣ
    void toLoadData(const QString &path); // ������Ϣ
    void toSaveData(const QString &path); // ������Ϣ
    QVector<QString> toGetKeyList(); // ��ȡ���е��û�����
    void toDeletDataByKey(const QString &key);  // ɾ���û�
    void toInsertData(const QString &key, const QString &pass, const QString &type);    // ����û���Ϣ
    QString toGetKeyInfo(const QString &key);   // ��ȡ��Ӧ�û���Ȩ��
    QString toGetDataQStringVal(const QString &key);    // ��ȡ�û���Ӧ������

public:
    QMap<QString, TYP_USER_INFO> m_mapUser;  // �������е��û���Ϣ���û�����key
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

    // ��ʼ������
    void initUi();

    // ��֤�û�������
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
    ManageUser m_valUesrManagement;     // �û�����
    bool m_bDarkMode;
    bool m_bUserName;
    int m_nTableRowRecord;            // ��ǰTable����
    int m_nDelRowRecord;              // Ҫɾ����Table����
    int m_nCurrAuthority;             // ��ǰ�û�Ȩ��
    QString m_strValPath;             // �û��������ݴ洢λ��
    QMap<int, QString> m_mapAuthority;

};

#endif // MANAGEMENTPASSWORDDLG_H
