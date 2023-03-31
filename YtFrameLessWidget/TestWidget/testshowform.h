#ifndef TESTSHOWFORM_H
#define TESTSHOWFORM_H

#include <QWidget>

namespace Ui
{
    class testshowform;
}

class testshowform : public QWidget
{
    Q_OBJECT

public:
    explicit testshowform(QWidget *parent = nullptr);
    ~testshowform();

private slots:
    void on_pushButton_clicked();

private:
    Ui::testshowform *ui;
};

#endif // TESTSHOWFORM_H
