#ifndef YTPASSWORDUI_H
#define YTPASSWORDUI_H

#include <QDialog>

namespace Ui
{
    class YtPasswordui;
}

class YtPasswordui : public QDialog
{
    Q_OBJECT

public:
    explicit YtPasswordui(QWidget *parent = nullptr, QString strTargetPassword = "", bool bVirtualKeyBoard = false);
    ~YtPasswordui();

private slots:
    void on_btnLogin_clicked();

    void on_btnCancel_clicked();

    void ButtonDo();

    void on_labelPasswordChange_linkActivated(const QString &link);

    void on_linePassword_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::YtPasswordui *ui;
    QString m_strTargetPassward;   //目标设置的密码
    int m_iCurrentCursorPos;    // 当前的光标的位置
};

#endif // YTPASSWORDUI_H
