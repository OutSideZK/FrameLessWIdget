#ifndef YTFRAMELESSDLG_H
#define YTFRAMELESSDLG_H

#include <QDialog>

enum Edge {
    Edge_No,
    Edge_Left,
    Edge_BottomLeft,
    Edge_Bottom,
    Edge_BottomRight,
    Edge_Right,
    Edge_TopRight,
    Edge_Top,
    Edge_TopLeft,
};

namespace Ui
{
    class YtFrameLessDlg;
}

class YtFrameLessDlg : public QDialog
{
    Q_OBJECT

public:
    explicit YtFrameLessDlg(QWidget *parent = nullptr);
    ~YtFrameLessDlg();
    void YtsetWindowModality(bool flag = false);
    void YtSetTitle(const QString &title);
    void YtSetShowForm(QWidget *showform, bool isShowLogo = true, bool isShowTitle = true, \
                       bool isShowMin = true, bool isShowMax = true, bool isShowClose = true, \
                       QString strAbout = "", bool isFullScreen = false);

protected:
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void leaveEvent(QEvent *event) override;
    void showEvent(QShowEvent *event) override;  //解决最小化窗口导致的界面假死问题
    void closeEvent(QCloseEvent *event) override;
    bool eventFilter(QObject *obj, QEvent *event) override;

private:
    Edge edge(const QPointF &pos);
    void setMouseTracking(QWidget *widget);
    void toSetWidgetShow(QWidget *widget, bool state);

private slots:
    void on_btnMin_clicked();

    void on_btnMax_clicked();

    void on_btnClose_clicked();

    void onSlot_Finish(int result);

private:
    Ui::YtFrameLessDlg *ui;
    QPointF m_pressedPoint;
    bool m_titlePressed = false;
    bool m_edgePressed = false;
    Edge m_edge = Edge_No;

    // 控制控件显示
    bool m_bIsShowLogo = true;
    bool m_bIsShowTitle = true;
    bool m_bIsShowMin = true;
    bool m_bIsShowMax = true;
    bool m_bIsShowClose = true;
    int m_iWidgetReturn = 0;
    QString m_strAbout = "";

    QWidget *m_ShowWidget = nullptr;
};

#endif // YTFRAMELESSDLG_H
