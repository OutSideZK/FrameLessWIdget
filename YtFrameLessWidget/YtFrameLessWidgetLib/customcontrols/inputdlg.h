#ifndef INPUTDLG_H
#define INPUTDLG_H

#include "frminput2018.h"
#include <QDialog>

namespace Ui
{
    class InputDlg;
}

class InputDlg : public QDialog
{
    Q_OBJECT

public:
    explicit InputDlg(QWidget *parent = nullptr, QString InitStr = "", bool bIsNumber = false);
    ~InputDlg();

private slots:
    void on_PB_Confirm_clicked();

    void on_PB_Cancle_clicked();

private:
    Ui::InputDlg *ui;

public:
    QString m_TargetStr;   //目标设置的密码
    frmInput2018 *m_frmInput2018;
};

#endif // INPUTDLG_H
