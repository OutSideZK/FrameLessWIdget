#ifndef CHANGEPASSWORDDLG_H
#define CHANGEPASSWORDDLG_H

#include <QDialog>
#include <QMouseEvent>
#include <QSettings>
#include "ytframelesswidgetlib.h"

namespace Ui
{
    class ChangePassWordDlg;
}

class ChangePassWordDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePassWordDlg(QWidget *parent = 0);
    ~ChangePassWordDlg();

    static QString GetPassword();

    static void SetPassword(const QString strPassword);

private:
    void initUI();

private slots:
    void on_btnLogin_clicked();

    void on_btnCancel_clicked();

    void on_btnCheck_clicked();

private:
    Ui::ChangePassWordDlg *ui;
};

#endif // CHANGEPASSWORDDLG_H
