#ifndef YTPASSWORDUIEX_H
#define YTPASSWORDUIEX_H

#include "managementpassworddlg.h"
#include <QDialog>

namespace Ui
{
    class YtPassworduiEx;
}

class YtPassworduiEx : public QDialog
{
    Q_OBJECT

public:
    explicit YtPassworduiEx(QWidget *parent = nullptr, bool bVirtualKeyBoard = false, bool bUserName = false);
    ~YtPassworduiEx();

private slots:
    void on_btnLogin_clicked();

    void on_btnCancel_clicked();

    void ButtonDo();

    void on_labelUserManagement_linkActivated(const QString &link);

    void on_linePassword_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::YtPassworduiEx *ui;

    bool m_bUserName;
    int m_iCurrentCursorPos;    // 当前的光标的位置
    ManagementPasswordDlg *m_pManagementPasswordDlg;
};

#endif // YTPASSWORDUIEX_H
