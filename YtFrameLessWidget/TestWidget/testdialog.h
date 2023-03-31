#ifndef TESTDIALOG_H
#define TESTDIALOG_H

#include <QDialog>

namespace Ui
{
    class testDialog;
}

class testDialog : public QDialog
{
    Q_OBJECT

public:
    explicit testDialog(QWidget *parent = nullptr);
    ~testDialog();

private slots:
    void on_checkBox_clicked(bool checked);

    void on_pushButton_clicked();

    void on_btn_Input_clicked();

private:
    Ui::testDialog *ui;
};

#endif // TESTDIALOG_H
