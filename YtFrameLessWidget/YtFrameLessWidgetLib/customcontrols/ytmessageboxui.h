#ifndef YTMESSAGEBOXUI_H
#define YTMESSAGEBOXUI_H

#include <QDialog>

namespace Ui
{
    class YtMessageBoxUI;
}

class YtMessageBoxUI : public QDialog
{
    Q_OBJECT

public:
    explicit YtMessageBoxUI(QWidget *parent = nullptr, int icon = 0, QString message = "");
    ~YtMessageBoxUI();

private slots:
    void on_btnConfirm_clicked();

    void on_btnCancel_clicked();

private:
    Ui::YtMessageBoxUI *ui;
};

#endif // YTMESSAGEBOXUI_H
