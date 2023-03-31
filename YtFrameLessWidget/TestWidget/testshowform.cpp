#include "testshowform.h"
#include "ui_testshowform.h"
#include <QDateTime>

testshowform::testshowform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::testshowform)
{
    ui->setupUi(this);
}

testshowform::~testshowform()
{
    delete ui;
}

void testshowform::on_pushButton_clicked()
{
    ui->label->setText(QDateTime::currentDateTime().toString("yyyyMMdd hhmmsszzz"));
    ui->checkBox_2->setChecked(!ui->checkBox_2->isChecked());
    ui->radioButton->setChecked(!ui->radioButton->isChecked());
    ui->radioButton_2->setChecked(!ui->radioButton_2->isChecked());
}

