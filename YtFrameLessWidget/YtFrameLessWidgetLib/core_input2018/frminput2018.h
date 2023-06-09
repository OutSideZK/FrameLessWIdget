﻿#ifndef FRMINPUT2018_H
#define FRMINPUT2018_H

#include <QtGui>
#if (QT_VERSION > QT_VERSION_CHECK(5,0,0))
#include <QtWidgets>
#endif

#include "googlepinyin.h"

namespace Ui
{
    class frmInput2018;
}

class frmInput2018 : public QWidget
{
    Q_OBJECT

public:
    //单例模式,保证一个程序只存在一个输入法实例对象
    explicit frmInput2018(QWidget *parent = 0);
    ~frmInput2018();
protected:
    //窗体显示重新刷新
    void showEvent(QShowEvent *);
    //鼠标拖动事件
    void mouseMoveEvent(QMouseEvent *);
    //鼠标按下事件
    void mousePressEvent(QMouseEvent *);
    //鼠标松开事件
    void mouseReleaseEvent(QMouseEvent *);

    //事件过滤器,处理鼠标在汉字标签处单击操作
    bool eventFilter(QObject *watched, QEvent *event);

private:
    Ui::frmInput2018 *ui;


    //窗体宽度+高度
    int frmWidth;
    int frmHeight;
    //桌面宽度+高度
    int deskWidth;
    int deskHeight;

    //图标宽度+高度
    int iconWidth;
    int iconHeight;
    //间距+顶部高度
    int spacing;
    int topHeight;

    //字库文件路径
    QString dbPath;
    //鼠标拖动自定义标题栏时的坐标
    QPoint mousePoint;
    //鼠标是否按下
    bool mousePressed;
    //当前大小写状态
    bool upper;

    //当前焦点的对象
    QWidget *currentWidget;
    //当前焦点的单行文本框
    QLineEdit *currentLineEdit;
    //当前焦点的多行文本框
    QTextEdit *currentTextEdit;
    //当前焦点的富文本框
    QPlainTextEdit *currentPlain;
    //当前焦点的文本浏览框
    QTextBrowser *currentBrowser;
    //当前焦点控件的类型
    QString currentType;
    //当前焦点控件属性
    QString currentFlag;

    //显示当前中英文状态
    QLabel *labStatus;
    //是否迷你模式
    bool mini;
    //是否数字键盘模式
    bool number;

    //当前输入法面板位置类型
    QString position;
    //当前输入法类型
    QString inputType;

    //汉字标签数组
    QList<QLabel *>labCh;

    //当前拼音索引
    int pinyinIndex;
    //当前显示的汉字标签的数量
    int pinyinCount;
    //所有拼音链表
    QStringList pinyinAll;

    //谷歌拼音内核
    GooglePinYin pinyinGoogle;

    //合法的输入控件,如果后面还发现其他控件也需要输入可以自行增加
    QStringList classNames;

private slots:
    //初始化属性
    void initProperty();
    //初始化数字小键盘
    void initNumber();
    //初始化窗体数据
    void initForm();
    //是否需要弹出输入法
    bool needInput();
    //初始化字库
    void initData();
    //初始化图标大小
    void initIconSize();

    //输入法面板按键处理
    void btnClicked();

    //焦点改变事件槽函数处理
    void focusChanged(QWidget *oldWidget, QWidget *nowWidget);
    //移动到合适的位置
    void movePosition();

    //查询汉字
    void selectChinese();
    //显示查询到的汉字
    void showChinese();

    //计算当前汉字长度自动隐藏标签
    void checkChinese();
    void setChVisible(int index);

    //插入值到当前焦点控件
    void insertValue(const QString &value);
    //删除当前焦点控件的一个字符
    void deleteValue();

    //设置当前汉字
    void setChinese(int index);
    //清空当前汉字信息
    void clearChinese();

public Q_SLOTS:
    //设置字库路径
    void setDbPath(const QString &dbPath);
    //设置字体名称及大小,包括按钮的字体大小和汉字部分的字体大小
    void setFontInfo(const QString &fontName, int btnFontSize, int labFontSize);

    //设置窗体尺寸
    void setFrmSize(int frmWidth, int frmHeight);
    //设置图标尺寸
    void setIconSize(int iconWidth, int iconHeight);

    //设置按钮之间的空隙间隔
    void setSpacing(int spacing);
    //设置顶部汉字区域高度
    void setTopHeight(int topHeight);

    //设置是否启用迷你模式,外接物理键盘时使用
    void setMini(bool mini);

    //设置输入法弹出位置
    void setPosition(const QString &position);

    //设置输入法颜色样式
    void setStyle(const QString &style);
    //改变输入法面板样式
    void setColor(const QString &mainBackgroundColor, const QString &mainTextColor,
                  const QString &btnBackgroundColor, const QString &btnHoveColor,
                  const QString &btnHoveTextColor, const QString &labHoveColor,
                  const QString &labHoveTextColor);

    //设置当前输入法类型
    void setInputType(const QString &inputType);
    //改变字母大小写
    void setUpper(bool isUpper);
    //按钮改变成特殊字符
    void showChar(bool isChar);

    //显示输入法面板
    void showPanel();
    //隐藏输入法面板
    void hidePanel();

    //切换正常模式+数字键盘模式
    void setMode(bool number = false);

signals:
    void receiveValue(const QString &value);
};

#endif // FRMINPUT2018_H
