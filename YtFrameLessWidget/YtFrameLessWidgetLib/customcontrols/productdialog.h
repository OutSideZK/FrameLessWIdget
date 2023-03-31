#ifndef PRODUCTDIALOG_H
#define PRODUCTDIALOG_H

#include <QDialog>
#include <QTableWidgetItem>
#include <QLineEdit>
#include <QMouseEvent>
#include <QMenu>
#include <QDesktopServices>
#include <QUrl>

#pragma execution_character_set("utf-8")

#define _PRODUCT_LOG_  QString("PRODUCT_LOG")

namespace Ui
{
    class ProductDialog;
}

class MyLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit MyLineEdit(QWidget *parent = nullptr) : QLineEdit(parent) {}

protected:
    // ��дmousePressEvent�¼�
    virtual void mouseDoubleClickEvent(QMouseEvent *event)
    {
        if(event->button() == Qt::LeftButton) {
            emit signal_doubleClicked();
        }
    }

signals:
    // �Զ���clicked()�ź�,��mousePressEvent�¼�����ʱ����
    void signal_doubleClicked();
};

class ProductManage
{
public:
    explicit ProductManage()
    {
        m_mapUser.clear();
    }
    void ClearAllData(); // ������е���Ϣ
    void toLoadData(const QString &path); // ������Ϣ
    void toSaveData(const QString &path); // ������Ϣ
    QVector<QString> toGetKeyList(); // ��ȡ���е��䷽��
    void toDeletDataByKey(const QString &key);  // ɾ���û�
    void toInsertData(const QString &key, const QString &productname);    // ����û���Ϣ
    QString toGetDataQStringVal(const QString &key);    // ��ȡ�û���Ӧ������

public:
    QMap<QString, QString> m_mapUser;  // �������еĲ�Ʒ��Ϣ���䷽����key
};

class ProductDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProductDialog(QWidget *parent = 0);
    ~ProductDialog();

    bool QueryProduct(const int product_recipe, QString &product_name);

    void UpdateCurrProduct(int &product_recipe, QString &product_name);

private slots:
    void on_btnAddProduct_clicked();

    void on_btnDelProduct_clicked();

    void on_btnSetCurrProduct_clicked();

    void on_btnStartCopy_clicked();

    void on_btnExecuteCopy_clicked();

    void on_btnConfirm_clicked();

    void on_btnCancel_clicked();

    void on_btnExecuteAdd_clicked();

    void on_btnExecuteChange_clicked();

    void on_productTableView_itemDoubleClicked(QTableWidgetItem *item);

    void on_productTableView_itemClicked(QTableWidgetItem *item);

    void toSetNewStr();

    void onSlot_ShowContextMenu(const QPoint &pos);

    void onSlot_ActionTriggered();

public:
    void initUI();

private:
    Ui::ProductDialog *ui;
    int _row_pos_record;    //��ǰѡ�е�����
    QMenu   *_show_menu;
    QAction *_action_opendir;
    QAction *_action_setbasic;

public:
    ProductManage _product_managerment_val;      // ��Ʒ�䷽�ż���Ʒ������Ϣ
    int _curr_product_recipe;
    QString _curr_product_name;
};

#endif // PRODUCTDIALOG_H
