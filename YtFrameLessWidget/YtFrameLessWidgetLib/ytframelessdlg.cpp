#include "ytframelessdlg.h"
#include "ui_ytframelessdlg.h"
#include <QEvent>
#include <QMouseEvent>
#include <QDebug>
#include <QToolTip>
#include <QDesktopWidget>
#include <QApplication>
#include <QPainter>
#include <QToolTip>

YtFrameLessDlg::YtFrameLessDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::YtFrameLessDlg)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint, true);

    ui->btnClose->setFocusPolicy(Qt::NoFocus);
    ui->btnMin->setFocusPolicy(Qt::NoFocus);
    ui->btnMax->setFocusPolicy(Qt::NoFocus);
    ui->btnTooltip->setFocusPolicy(Qt::NoFocus);
    ui->btnTooltip->setEnabled(false);

    // 开启鼠标悬停事件
    ui->btnTooltip->setAttribute(Qt::WA_Hover, true);
    ui->btnTooltip->installEventFilter(this);
}

YtFrameLessDlg::~YtFrameLessDlg()
{
    if(m_ShowWidget) {
        ui->gridLayout->removeWidget(m_ShowWidget);
        m_ShowWidget->setParent(0);
        m_ShowWidget = nullptr;
    }
    delete ui;
}

void YtFrameLessDlg::YtsetWindowModality(bool flag)
{
    if(flag) {
        setWindowModality(Qt::WindowModal);
    }
}

void YtFrameLessDlg::YtSetTitle(const QString &title)
{
    ui->labelTitle->setText(title);
}

void YtFrameLessDlg::YtSetShowForm(QWidget *showform, bool isShowLogo, bool isShowTitle, \
                                   bool isShowMin, bool isShowMax, bool isShowClose, \
                                   QString strAbout, bool isFullScreen)
{
    if(nullptr == showform) {
        return;
    }
    if(m_ShowWidget) {
        ui->gridLayout->removeWidget(m_ShowWidget);
        m_ShowWidget->setParent(0);
        m_ShowWidget = nullptr;
    }

    m_bIsShowLogo = isShowLogo;
    m_bIsShowTitle = isShowTitle;
    m_bIsShowMin = isShowMin;
    m_bIsShowMax = isShowMax;
    m_bIsShowClose = isShowClose;

    toSetWidgetShow(ui->labelLogo, isShowLogo);
    toSetWidgetShow(ui->labelTitle, isShowTitle);
    toSetWidgetShow(ui->btnMin, isShowMin);
    toSetWidgetShow(ui->btnMax, isShowMax);
    toSetWidgetShow(ui->btnClose, isShowClose);

    m_strAbout = strAbout;
    if(m_strAbout.isEmpty()) {
        toSetWidgetShow(ui->btnTooltip, false);
    }

    QString objectname = QString(showform->metaObject()->superClass()->className());
    if(objectname == "QDialog") {
        connect((QDialog *)showform, &QDialog::finished, this, &YtFrameLessDlg::onSlot_Finish);
    }

    ui->gridLayout->addWidget(showform);
    ui->gridLayout->setGeometry(showform->geometry());
    setFixedSize(QSize(showform->width(), showform->height()));
    this->setWindowIcon(showform->windowIcon());
    this->setWindowTitle(showform->windowTitle());
    if(showform->windowIcon().isNull()) {
        ui->labelLogo->hide();
    } else {
        ui->labelLogo->setPixmap(showform->windowIcon().pixmap(showform->windowIcon().actualSize(QSize(30, 30))));
    }

    ui->labelTitle->setText(showform->windowTitle());
    m_ShowWidget = showform;
    if(isFullScreen) {
        on_btnMax_clicked();
    }
}

void YtFrameLessDlg::mouseDoubleClickEvent(QMouseEvent *event)
{
    if(m_bIsShowMax) {
        if (ui->TitleWidget->geometry().contains(event->localPos().toPoint()) && event->button() == Qt::LeftButton) {
            on_btnMax_clicked();
        }
    }
}

void YtFrameLessDlg::mouseMoveEvent(QMouseEvent *event)
{
    if (!isMaximized()) {
        edge(event->localPos());
        if (m_edgePressed) {
            auto _old = geometry();
            auto _newX = event->globalPos().x();
            auto _newY = event->globalPos().y();
            switch (m_edge) {
                case Edge_No:
                    break;
                case Edge_Right:
                    _old.setRight(_newX);
                    break;
                case Edge_BottomRight:
                    _old.setBottom(_newY);
                    _old.setRight(_newX);
                    break;
                case Edge_Bottom:
                    _old.setBottom(_newY);
                    break;
                case Edge_BottomLeft:
                    _old.setBottom(_newY);
                    _old.setLeft(_newX);
                    if (_old.width() < minimumWidth()) {
                        _old.setLeft(_newX - minimumWidth() + _old.width());
                    }
                    break;
                case Edge_Left:
                    _old.setLeft(_newX);
                    if (_old.width() < minimumWidth()) {
                        _old.setLeft(_newX - minimumWidth() + _old.width());
                    }
                    break;
                case Edge_TopLeft:
                    _old.setTop(_newY);
                    if (_old.height() < minimumHeight()) {
                        _old.setTop(_newY - minimumHeight() + _old.height());
                    }
                    _old.setLeft(_newX);
                    if (_old.width() < minimumWidth()) {
                        _old.setLeft(_newX - minimumWidth() + _old.width());
                    }
                    break;
                case Edge_Top:
                    _old.setTop(_newY);
                    if (_old.height() < minimumHeight()) {
                        _old.setTop(_newY - minimumHeight() + _old.height());
                    }
                    break;
                case Edge_TopRight:
                    _old.setTop(_newY);
                    if (_old.height() < minimumHeight()) {
                        _old.setTop(_newY - minimumHeight() + _old.height());
                    }
                    _old.setRight(_newX);
                    break;
                default:
                    break;
            }
            setGeometry(_old);
        } else if (m_titlePressed) {
            auto _newPoint = event->globalPos() - m_pressedPoint.toPoint();
            auto _old = geometry();
            _old.moveTopLeft(_newPoint);
            setGeometry(_old);
        }
    }
}

void YtFrameLessDlg::mousePressEvent(QMouseEvent *event)
{
    m_edge = edge(event->localPos());
    if (m_edge != Edge_No) {
        m_edgePressed = true;
        m_pressedPoint = event->globalPos();
    } else if (ui->TitleWidget->geometry().contains(event->localPos().toPoint())) {
        m_titlePressed = true;
        m_pressedPoint = event->localPos();
    }
}

void YtFrameLessDlg::mouseReleaseEvent(QMouseEvent *event)
{
    edge(event->localPos());
    m_titlePressed = false;
    m_edgePressed = false;
}

void YtFrameLessDlg::leaveEvent(QEvent *event)
{
    Q_UNUSED(event)
    setCursor(Qt::ArrowCursor);
    m_titlePressed = false;
}

void YtFrameLessDlg::showEvent(QShowEvent *event)
{
    setAttribute(Qt::WA_Mapped);
    QWidget::showEvent(event);
}

void YtFrameLessDlg::closeEvent(QCloseEvent *event)
{
    if("Running" == m_ShowWidget->whatsThis()) {
        QToolTip::showText(this->cursor().pos(), u8"软件正在运行！！！", this);
        event->ignore();
        return;
    }
    done(m_iWidgetReturn);
}

bool YtFrameLessDlg::eventFilter(QObject *obj, QEvent *event)
{
    if("btnTooltip" == obj->objectName()) {
        if(QEvent::ToolTip == event->type()) {
            QToolTip::showText(cursor().pos(), m_strAbout, this);
        }
    }
    return QDialog::eventFilter(obj, event);
}

Edge YtFrameLessDlg::edge(const QPointF &pos)
{
    if (ui->btnClose->geometry().contains(pos.toPoint()) ||
            ui->btnMax->geometry().contains(pos.toPoint()) ||
            ui->btnMin->geometry().contains(pos.toPoint())) {
        setCursor(Qt::ArrowCursor);
        return Edge_No;
    }
    bool _top = false;
    bool _left = false;
    bool _bottom = false;
    bool _right = false;
    auto _rect = rect();
    if (qAbs(_rect.left() - pos.x()) < 5) {
        _left = true;
    }
    if (qAbs(_rect.right() - pos.x()) < 5) {
        _right = true;
    }
    if (qAbs(_rect.bottom() - pos.y()) < 5) {
        _bottom = true;
    }
    if (qAbs(_rect.top() - pos.y()) < 5) {
        _top = true;
    }
    if (_bottom && _left) {
        setCursor(Qt::SizeBDiagCursor);
        return Edge_BottomLeft;
    } else if (_bottom && _right) {
        setCursor(Qt::SizeFDiagCursor);
        return Edge_BottomRight;
    } else if (_bottom) {
        setCursor(Qt::SizeVerCursor);
        return Edge_Bottom;
    }
    if (_top && _left) {
        setCursor(Qt::SizeFDiagCursor);
        return Edge_TopLeft;
    } else if (_top && _right) {
        setCursor(Qt::SizeBDiagCursor);
        return Edge_TopRight;
    } else if (_top) {
        setCursor(Qt::SizeVerCursor);
        return Edge_Top;
    } else if (_left) {
        setCursor(Qt::SizeHorCursor);
        return Edge_Left;
    } else if (_right) {
        setCursor(Qt::SizeHorCursor);
        return Edge_Right;
    } else {
        setCursor(Qt::ArrowCursor);
        return Edge_No;
    }
}

void YtFrameLessDlg::setMouseTracking(QWidget *widget)
{
    widget->setMouseTracking(true);
    for (auto obj : widget->children()) {
        auto _widget = qobject_cast<QWidget *>(obj);
        if (_widget) {
            setMouseTracking(_widget);
        }
    }
}

void YtFrameLessDlg::toSetWidgetShow(QWidget *widget, bool state)
{
    if(state) {
        widget->show();
    } else {
        widget->hide();
    }
}

void YtFrameLessDlg::on_btnMin_clicked()
{
    showMinimized();
}

void YtFrameLessDlg::on_btnMax_clicked()
{
    if (isMaximized()) {
        ui->btnMax->setIcon(QIcon(":/btnicon/image/btnicon/max_new.png"));
        showNormal();
    } else {
        ui->btnMax->setIcon(QIcon(":/btnicon/image/btnicon/res_new.png"));
        showMaximized();
    }
}

void YtFrameLessDlg::on_btnClose_clicked()
{
    close();
}

void YtFrameLessDlg::onSlot_Finish(int result)
{
    m_iWidgetReturn = result;
    close();
}

