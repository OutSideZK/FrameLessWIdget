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
    // 重写mousePressEvent事件
    virtual void mouseDoubleClickEvent(QMouseEvent *event)
    {
        if(event->button() == Qt::LeftButton) {
            emit signal_doubleClicked();
        }
    }

signals:
    // 自定义clicked()信号,在mousePressEvent事件发生时触发
    void signal_doubleClicked();
};

class ProductManage
{
public:
    explicit ProductManage()
    {
        m_mapUser.clear();
    }
    void ClearAllData(); // 清空所有的信息
    void toLoadData(const QString &path); // 加载信息
    void toSaveData(const QString &path); // 保存信息
    QVector<QString> toGetKeyList(); // 获取所有的配方号
    void toDeletDataByKey(const QString &key);  // 删除用户
    void toInsertData(const QString &key, const QString &productname);    // 添加用户信息
    QString toGetDataQStringVal(const QString &key);    // 获取用户对应的密码

public:
    QMap<QString, QString> m_mapUser;  // 保存所有的产品信息，配方号是key
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
    int _row_pos_record;    //当前选中的行数
    QMenu   *_show_menu;
    QAction *_action_opendir;
    QAction *_action_setbasic;

public:
    ProductManage _product_managerment_val;      // 产品配方号及产品名称信息
    int _curr_product_recipe;
    QString _curr_product_name;
};

#endif // PRODUCTDIALOG_H
