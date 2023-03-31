#include "testdialog.h"
#include "ui_testdialog.h"
#include "ytframelesswidgetlib.h"

testDialog::testDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testDialog)
{
    ui->setupUi(this);
}

testDialog::~testDialog()
{
    delete ui;
}

void testDialog::on_checkBox_clicked(bool checked)
{
    if(checked) {
        setWhatsThis("Running");
    } else {
        setWhatsThis("Stop");
    }
}


void testDialog::on_pushButton_clicked()
{
    ui->checkBox->setEnabled(!ui->checkBox->isEnabled());
}


void testDialog::on_btn_Input_clicked()
{
    QString getstr;
    if(toGetNewChineseQString("12345", getstr, "")) {
        YtMessageBox::YtShowSuccess("test", getstr);
    }
}

