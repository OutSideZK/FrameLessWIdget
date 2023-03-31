#ifndef MAINDLG_H
#define MAINDLG_H

#include "ytframelesswidgetlib.h"
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainDlg;
}
QT_END_NAMESPACE

class MainDlg : public QWidget
{
    Q_OBJECT

public:
    MainDlg(QWidget *parent = nullptr);
    ~MainDlg();

private slots:
    void on_btnShowWidget_clicked();

    void on_btnShowDialog_clicked();

    void on_btnShowuccess_clicked();

    void on_btnShowError_clicked();

    void on_btnShowQuestion_clicked();

    void on_btnShowWarning_clicked();

    void on_btnShowPass_clicked();

    void on_btnShowUserLogin_clicked();

    void on_btnnputNum_clicked();

    void on_btnInputchar_clicked();

    void on_btnnputNum_2_clicked();

    void on_btnInputchar_2_clicked();

    void on_btnroduct_clicked();

private:
    Ui::MainDlg *ui;
};
#endif // MAINDLG_H
