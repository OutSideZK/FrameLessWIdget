#ifndef INSERTNUMBERDLG_H
#define INSERTNUMBERDLG_H

#include <QDialog>

namespace Ui
{
    class InsertNumberDlg;
}

class InsertNumberDlg : public QDialog
{
    Q_OBJECT

public:
    explicit InsertNumberDlg(QWidget *parent = nullptr, QString InitStr = "");
    ~InsertNumberDlg();

private slots:
    void on_PB_Confirm_clicked();

    void on_PB_Cancle_clicked();
    void ButtonDo();


private:
    Ui::InsertNumberDlg *ui;

public:
    QString m_TargetStr;   //目标设置的密码
};

#endif // INSERTNUMBERDLG_H
