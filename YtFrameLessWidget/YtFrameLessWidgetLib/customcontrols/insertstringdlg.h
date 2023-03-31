#ifndef INSERTSTRINGDLG_H
#define INSERTSTRINGDLG_H

#include <QDialog>

namespace Ui
{
    class InsertStringDlg;
}

class InsertStringDlg : public QDialog
{
    Q_OBJECT

public:
    explicit InsertStringDlg(QWidget *parent = nullptr, QString InitStr = "");
    ~InsertStringDlg();

private slots:
    void on_btn_clear_clicked();

    void on_btn_del_clicked();

    void on_btn_confirm_clicked();

    void on_btn_cancel_clicked();

    void ButtonDo();

public:
    QString m_TargetStr;   //目标设置的密码

private:
    Ui::InsertStringDlg *ui;
};

#endif // INSERTSTRINGDLG_H
