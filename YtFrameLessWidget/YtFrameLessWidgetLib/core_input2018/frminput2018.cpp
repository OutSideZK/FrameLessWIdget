#include "frminput2018.h"
#include "ui_frminput2018.h"

#if (QT_VERSION >= QT_VERSION_CHECK(5,0,0))
    #include "qscreen.h"
    #define deskGeometry qApp->primaryScreen()->geometry()
    #define deskGeometry2 qApp->primaryScreen()->availableGeometry()
#else
    #include "qdesktopwidget.h"
    #define deskGeometry qApp->desktop()->geometry()
    #define deskGeometry2 qApp->desktop()->availableGeometry()
#endif

#pragma execution_character_set("utf-8")
#define TIMEMS QTime::currentTime().toString("HH:mm:ss zzz")

frmInput2018::frmInput2018(QWidget *parent) : QWidget(parent), ui(new Ui::frmInput2018)
{
    ui->setupUi(this);
    this->initProperty();
    this->initNumber();
    this->initForm();
    QTimer::singleShot(100, this, SLOT(initData()));
}

frmInput2018::~frmInput2018()
{
    delete ui;
}

void frmInput2018::showEvent(QShowEvent *)
{
    this->update();

    //首次加载设置图标尺寸
    static bool isShow = false;
    if (!isShow) {
        isShow = true;
        this->initIconSize();
    }
}

void frmInput2018::mouseMoveEvent(QMouseEvent *e)
{
    //bottom为固定的底部禁用拖动
    if (mousePressed && position != "bottom") {
        this->move(e->globalPos() - mousePoint);
        this->update();
        e->accept();
    }
}

void frmInput2018::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::LeftButton) {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
    }
}

void frmInput2018::mouseReleaseEvent(QMouseEvent *)
{
    mousePressed = false;
}

//事件过滤器,用于识别鼠标单击汉字标签处获取对应汉字
bool frmInput2018::eventFilter(QObject *watched, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonPress) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
        if (mouseEvent->button() == Qt::LeftButton) {
            QLabel *lab = (QLabel *)watched;
            int index = 0;
            if (labCh.contains(lab)) {
                index = lab->objectName().right(1).toInt();
            }

            if (index >= 1 && index <= 5) {
                setChinese(index - 1);
            } else {
                //处理鼠标按下,如果是浏览器控件则弹出输入法
                if (currentWidget != 0) {
                    if (!isVisible()) {
                        if (needInput()) {
                            showPanel();
                        }
                    }
                } else {
                    currentWidget = (QWidget *)watched;
                    if (!isVisible()) {
                        //解决首次就有焦点的控件弹出输入法
                        if (needInput()) {
                            showPanel();
                        }
                    }
                }
            }

            //return false;
        } else {
            if (isVisible()) {
                hidePanel();
            }
        }
    } else if (event->type() == QEvent::KeyPress) {
        //如果输入法窗体不可见,则不需要处理
        if (!isVisible() && !mini) {
            return QWidget::eventFilter(watched, event);
        }

        QString labText = ui->labPY->text();
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);

        //Shift切换输入法模式,esc键关闭输入法面板,空格取第一个汉字,退格键删除
        //中文模式下回车键取拼音,中文模式下当没有拼音时可以输入空格
        if (keyEvent->key() == Qt::Key_Space) {
            if (labText != "") {
                ui->labPY->setText("");
                setChinese(0);
                return true;
            } else {
                return false;
            }
        } else if (keyEvent->key() == Qt::Key_Return || keyEvent->key() == Qt::Key_Enter) {
            if (!labText.isEmpty()) {
                insertValue(labText);
                ui->labPY->setText("");
                selectChinese();
            } else {
                //如果不需要回车隐藏则注释下面这句
                hidePanel();
            }

            //return true;
        } else if (keyEvent->key() == Qt::Key_Control) {
            if (mini) {
                ui->btnType->click();
                return true;
            }
        } else if (keyEvent->key() == Qt::Key_Shift) {
            if (!mini) {
                ui->btnType->click();
                return true;
            }
        } else if (keyEvent->key() == Qt::Key_Escape) {
            ui->btnClose->click();
            return true;
        } else if (keyEvent->key() == Qt::Key_CapsLock) {
            ui->btnUpper->click();
            return true;
        } else if (keyEvent->key() == Qt::Key_Backspace) {
            if (inputType == "chinese") {
                int len = labText.length();
                if (len > 0) {
                    ui->labPY->setText(labText.left(len - 1));
                    selectChinese();
                    return true;
                }
            }
        } else if (keyEvent->text() == "+" || keyEvent->text() == "=") {
            if (!labText.isEmpty()) {
                ui->btnNext->click();
                return true;
            } else {
                return false;
            }
        } else if (keyEvent->text() == "-" || keyEvent->text() == "_") {
            if (!labText.isEmpty()) {
                ui->btnPre->click();
                return true;
            } else {
                return false;
            }
        } else {
            if (currentType == "QWidget") {
                return false;
            }

            QString key = keyEvent->text();
            if (inputType == "english") {
                key = upper ? key.toUpper() : key.toLower();
            }

            //限定单个字母而不是输入的汉字
            if (key.length() == 1 && inputType == "chinese") {
                QList<QPushButton *> btns = ui->widgetMain->findChildren<QPushButton *>();
                foreach (QPushButton *btn, btns) {
                    QString text = btn->text();
                    if (!text.isEmpty() && text == key) {
                        btn->click();
                        return true;
                    }
                }
            }
        }

        return false;
    } else if (event->type() == QEvent::RequestSoftwareInputPanel) {
        showPanel();
    } else if (event->type() == QEvent::CloseSoftwareInputPanel) {
        hidePanel();
    }

    return QWidget::eventFilter(watched, event);
}

void frmInput2018::initProperty()
{
    QList<QPushButton *> btns;
    btns << ui->widgetMain->findChildren<QPushButton *>();
    foreach (QPushButton *btn, btns) {
        //通过对象名来区分设置不同的属性
        QString text = btn->text();
        if (text.isEmpty()) {
            btn->setProperty("btnOther", true);
            continue;
        }

        QChar value = text.at(0);
        if (value >= (QChar)48 && value <= (QChar)57) {
            //btn0-btn9
            btn->setProperty("btnNum", true);
        } else if (value >= (QChar)97 && value <= (QChar)122) {
            //btna-btnz
            btn->setProperty("btnLetter", true);
        } else {
            //btnDot btnSpace btnEnter ...
            btn->setProperty("btnOther", true);
        }
    }

    labCh << ui->labCh1;
    labCh << ui->labCh2;
    labCh << ui->labCh3;
    labCh << ui->labCh4;
    labCh << ui->labCh5;

    //设置所有按钮输入法不可用
    btns.clear();
    btns << this->findChildren<QPushButton *>();
    foreach (QPushButton *btn, btns) {
        btn->setFocusPolicy(Qt::NoFocus);
        btn->setProperty("noinput", true);
        btn->setAutoRepeat(true);
        btn->setAutoRepeatDelay(500);
    }
}

void frmInput2018::initForm()
{
    deskWidth = deskGeometry2.width();
    deskHeight = deskGeometry2.height();

    dbPath = qApp->applicationDirPath() + "/dict";
    mousePoint = QPoint();
    mousePressed = false;
    upper = false;
    pinyinCount = 5;

    currentWidget = 0;
    currentLineEdit = 0;
    currentTextEdit = 0;
    currentPlain = 0;
    currentBrowser = 0;
    currentType = "";

    //右下角输入法图标
    labStatus = new QLabel;
    labStatus->setAttribute(Qt::WA_TranslucentBackground);
    labStatus->setAlignment(Qt::AlignCenter);
    labStatus->setPixmap(QPixmap(":/image/status_en.png"));
    labStatus->setFixedSize(53, 27);
    labStatus->move(deskWidth - 58, deskHeight - 30);

#if (QT_VERSION > QT_VERSION_CHECK(5,0,0))
    setWindowFlags(Qt::Tool | Qt::WindowDoesNotAcceptFocus | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint | Qt::X11BypassWindowManagerHint);
    labStatus->setWindowFlags(Qt::Tool | Qt::WindowDoesNotAcceptFocus | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint | Qt::X11BypassWindowManagerHint);
#else
    setWindowFlags(Qt::Tool | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint | Qt::X11BypassWindowManagerHint);
    labStatus->setWindowFlags(Qt::Tool | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint | Qt::X11BypassWindowManagerHint);
#endif

    //输入法面板的字体名称和按钮字体大小即汉字区域字体大小
    setFontInfo(this->font().family(), 11, 10);

    //输入法面板的固定大小
    setFrmSize(500, 200);
    //图标固定大小
    setIconSize(20, 20);
    //按钮之间的间隔
    setSpacing(6);
    //顶部汉字区域高度
    setTopHeight(40);

    //当前完整模式 false--完整模式有整个按键面板 true--迷你模式只有中英状态悬浮条和汉字备选栏
    setMini(false);

    //输入法面板的显示位置  control--显示在对应输入框的正下方 bottom--填充显示在底部  center--窗体居中显示
    setPosition("control");

    //输入法面板的样式  blue--淡蓝色   black--黑色  brown--灰黑色  gray--灰色  silvery--银色
    setStyle("black");

    //输入法模式 english--英文模式  chinese--中文模式  handwrite--手写模式  char--特殊字符模式
    setInputType("english");

    //设置默认普通模式
    number = true;
    setMode(false);

    //绑定按钮到事件
    QList<QPushButton *> btns = ui->widgetMain->findChildren<QPushButton *>();
    btns << ui->btnPre << ui->btnNext << ui->btnDash;
    foreach (QPushButton *btn, btns) {
        connect(btn, SIGNAL(clicked()), this, SLOT(btnClicked()));
    }

    //绑定全局改变焦点信号槽
    connect(qApp, SIGNAL(focusChanged(QWidget *, QWidget *)), this, SLOT(focusChanged(QWidget *, QWidget *)));

    //绑定按键事件过滤器
    qApp->installEventFilter(this);

    //合法的输入控件,如果后面还发现其他控件也需要输入可以自行增加
    classNames << "QLineEdit" << "QTextEdit" << "QPlainTextEdit" << "QAbstractSpinBox" << "QComboBox";
    classNames << "QQuickWidget" << "QWebView" << "QtWebEngineCore::RenderWidgetHostViewQtDelegateWidget";
}

bool frmInput2018::needInput()
{
    //查找当前焦点控件是否属于合法输入的控件
    bool exist = false;
    foreach (QString className, classNames) {
        if (currentWidget->inherits(className.toLatin1().constData())) {
            //如果当前是下拉框则判断下拉框可编辑属性是否为真
            //下面这个判断很巧妙哦,即能识别除了下拉框以外的控件还能识别可编辑的下拉框
            if (className != "QComboBox" || currentWidget->property("editable").toBool()) {
                exist = true;
                break;
            }
        }
    }
    return exist;
}

void frmInput2018::initNumber()
{
    //将按钮按下关联到对应的按钮
    connect(ui->btnNumber0, SIGNAL(clicked(bool)), ui->btn0, SLOT(click()));
    connect(ui->btnNumber1, SIGNAL(clicked(bool)), ui->btn1, SLOT(click()));
    connect(ui->btnNumber2, SIGNAL(clicked(bool)), ui->btn2, SLOT(click()));
    connect(ui->btnNumber3, SIGNAL(clicked(bool)), ui->btn3, SLOT(click()));
    connect(ui->btnNumber4, SIGNAL(clicked(bool)), ui->btn4, SLOT(click()));
    connect(ui->btnNumber5, SIGNAL(clicked(bool)), ui->btn5, SLOT(click()));
    connect(ui->btnNumber6, SIGNAL(clicked(bool)), ui->btn6, SLOT(click()));
    connect(ui->btnNumber7, SIGNAL(clicked(bool)), ui->btn7, SLOT(click()));
    connect(ui->btnNumber8, SIGNAL(clicked(bool)), ui->btn8, SLOT(click()));
    connect(ui->btnNumber9, SIGNAL(clicked(bool)), ui->btn9, SLOT(click()));
    connect(ui->btnNumberDot, SIGNAL(clicked(bool)), ui->btnDot, SLOT(click()));
    connect(ui->btnNumberDelete, SIGNAL(clicked(bool)), ui->btnDelete, SLOT(click()));
    connect(ui->btnNumberSpace, SIGNAL(clicked(bool)), ui->btnSpace, SLOT(click()));
    connect(ui->btnNumberClose, SIGNAL(clicked(bool)), ui->btnClose, SLOT(click()));
    connect(ui->btnNumberEnter, SIGNAL(clicked(bool)), ui->btnEnter, SLOT(click()));
}

void frmInput2018::initData()
{
    pinyinGoogle.open(dbPath);
}

void frmInput2018::initIconSize()
{
    QSize icoSize(iconWidth, iconHeight);
    QSize icoSize2(iconWidth - 5, iconHeight - 5);
    QSize icoSize3(iconWidth + 3, iconHeight + 3);

    ui->btnSpace->setIconSize(icoSize);
    ui->btnClose->setIconSize(icoSize);
    ui->btnType->setIconSize(icoSize);
    ui->btnEnter->setIconSize(icoSize2);
    ui->btnUpper->setIconSize(icoSize2);
    ui->btnDelete->setIconSize(icoSize3);

    ui->btnNumberSpace->setIconSize(icoSize);
    ui->btnNumberClose->setIconSize(icoSize);
    ui->btnNumberEnter->setIconSize(icoSize2);
    ui->btnNumberDelete->setIconSize(icoSize3);
}

void frmInput2018::btnClicked()
{
    //如果当前焦点控件类型为空,则返回不需要继续处理
    if (currentType.isEmpty()) {
        return;
    }

    QString labText = ui->labPY->text();
    QPushButton *btn = (QPushButton *)sender();
    QString objectName = btn->objectName();

    if (objectName == "btnType") {
        if (inputType == "english") {
            setInputType("chinese");
        } else if (inputType == "chinese") {
            if (mini) {
                setInputType("english");
            } else {
                setInputType("char");
            }
        } else if (inputType == "char") {
            setInputType("english");
        }

        upper = false;
        setUpper(upper);
    } else if (objectName == "btnUpper") {
        //大小写模式都要切换到英文状态
        setInputType("english");

        upper = !upper;
        setUpper(upper);
    } else if (objectName == "btnDelete") {
        //如果当前是中文模式,则删除对应拼音,删除完拼音之后再删除对应文本输入框的内容
        if (inputType == "chinese") {
            int len = labText.length();
            if (len > 0) {
                ui->labPY->setText(labText.left(len - 1));
                selectChinese();
            } else {
                deleteValue();
            }
        } else {
            deleteValue();
        }
    } else if (objectName == "btnPre") {
        int pyCount = pinyinAll.count();
        if (pinyinIndex >= (pinyinCount * 2)) {
            //每次最多显示汉字数量,所以每次向前的时候索引要减 数量 * 2
            if (pinyinIndex % pinyinCount == 0) {
                pinyinIndex -= (pinyinCount * 2);
            } else {
                pinyinIndex = pyCount - (pyCount % pinyinCount) - pinyinCount;
            }
        } else {
            pinyinIndex = 0;
        }

        showChinese();
    } else if (objectName == "btnNext") {
        if (pinyinIndex < pinyinAll.count() - 1) {
            showChinese();
        }
    } else if (objectName == "btnClose") {
        hidePanel();
        clearChinese();
        ui->labPY->setText("");
    } else if (objectName == "btnSpace") {
        //如果中文模式而且有待输入字母,判断是否有中文则插入第一个中文否则插入字母
        if (inputType == "chinese" && labText != "") {
            if (ui->labCh1->text().isEmpty()) {
                insertValue(labText);
            } else {
                setChinese(0);
            }
        } else {
            insertValue(" ");
        }
    } else if (objectName == "btnEnter") {
        //如果中文模式而且有待输入字母则立即插入字母
        if (inputType == "chinese" && labText != "") {
            insertValue(labText);
        }

        if (currentWidget != 0) {
            //如果手动指定了属性隐藏,或者不是多行文本则自动隐藏
            //如果单行文本不希望回车隐藏则设置属性 ui->txt->setProperty("enterhide", false);
            QVariant enterHide = currentWidget->property("enterhide");
            if (enterHide.isValid()) {
                if (enterHide.toBool()) {
                    hidePanel();
                }
            } else {
                if (!currentWidget->inherits("QTextEdit") && !currentWidget->inherits("QPlainTextEdit") && !currentWidget->inherits("QTextBrowser")) {
                    hidePanel();
                }
            }

            //插入回车符
            QKeyEvent keyPress(QEvent::KeyPress, Qt::Key_Enter, Qt::NoModifier, QString("\n"));
            //发送回车信号
            QApplication::sendEvent(currentWidget, &keyPress);
        } else {
            insertValue("\n");
        }
    } else {
        //如果是&按钮，因为对应&被过滤,所以真实的text为去除前面一个&字符
        QString value = btn->text();
        if (value == "&&") {
            value = "&";
        }

        //当前不是中文模式,则单击按钮对应text为传递参数
        if (inputType != "chinese") {
            insertValue(value);
        } else {
            //中文模式下,不允许输入特殊字符,单击对应数字按键取得当前索引的汉字
            if (btn->property("btnOther").toBool()) {
                if (labText.length() == 0) {
                    insertValue(value);
                }
            } else if (btn->property("btnNum").toBool()) {
                int index = objectName.right(1).toInt();
                if (labText.length() == 0) {
                    insertValue(value);
                } else if (index >= 1 && index <= 5) {
                    setChinese(index - 1);
                }
            } else if (btn->property("btnLetter").toBool()) {
                ui->labPY->setText(labText + value);
                selectChinese();
            }
        }
    }
}

void frmInput2018::focusChanged(QWidget *oldWidget, QWidget *nowWidget)
{
    //qDebug() << TIMEMS << "oldWidget:" << oldWidget << "nowWidget:" << nowWidget;
    this->currentWidget = nowWidget;
    //新焦点控件=0需要隐藏
    if (nowWidget == 0) {
        hidePanel();
        return;
    }

    if (nowWidget != 0 && !this->isAncestorOf(nowWidget)) {
        //在Qt5和linux系统中(嵌入式linux除外),当输入法面板关闭时,焦点会变成无,然后焦点会再次移到焦点控件处
        //这样导致输入法面板的关闭按钮不起作用,关闭后马上有控件获取焦点又显示.
        //为此,增加判断,当焦点是从有对象转为无对象再转为有对象时不要显示.
        //这里又要多一个判断,万一首个窗体的第一个焦点就是落在可输入的对象中,则要过滤掉
        static bool isFirst = true;
#ifndef __arm__
        if (oldWidget == 0x0 && !isFirst) {
            currentWidget = 0;
            QTimer::singleShot(1, this, SLOT(hidePanel()));
            return;
        }
#endif

        //如果对应属性noinput为真则不显示
        if (nowWidget->property("noinput").toBool() || nowWidget->property("readOnly").toBool()) {
            currentType.clear();
            currentWidget = 0;
            QTimer::singleShot(0, this, SLOT(hidePanel()));
            return;
        }

        isFirst = false;
        currentFlag = nowWidget->property("flag").toString();

        if (nowWidget->inherits("QLineEdit")) {
            currentLineEdit = (QLineEdit *)nowWidget;
            if (!currentLineEdit->isReadOnly()) {
                currentType = "QLineEdit";
                showPanel();
            } else {
                currentType = "";
                hidePanel();
            }
        } else if (nowWidget->inherits("QTextEdit")) {
            currentTextEdit = (QTextEdit *)nowWidget;
            if (!currentTextEdit->isReadOnly()) {
                currentType = "QTextEdit";
                showPanel();
            } else {
                currentType = "";
                hidePanel();
            }
        } else if (nowWidget->inherits("QPlainTextEdit")) {
            currentPlain = (QPlainTextEdit *)nowWidget;
            if (!currentPlain->isReadOnly()) {
                currentType = "QPlainTextEdit";
                showPanel();
            } else {
                currentType = "";
                hidePanel();
            }
        } else if (nowWidget->inherits("QTextBrowser")) {
            currentBrowser = (QTextBrowser *)nowWidget;
            if (!currentBrowser->isReadOnly()) {
                currentType = "QTextBrowser";
                showPanel();
            } else {
                currentType = "";
                hidePanel();
            }
        } else if (nowWidget->inherits("QComboBox")) {
            //只有当下拉选择框处于编辑模式才可以输入
            QComboBox *cbox = (QComboBox *)nowWidget;
            if (cbox->isEditable()) {
                currentLineEdit = cbox->lineEdit() ;
                currentType = "QLineEdit";
                showPanel();
            } else {
                currentType = "";
                hidePanel();
            }
        } else if (nowWidget->inherits("QWidget")) {
            if (nowWidget->inherits("QAbstractSpinBox") || nowWidget->inherits("QQuickWidget") || nowWidget->inherits("QWebView") || nowWidget->inherits("QtWebEngineCore::RenderWidgetHostViewQtDelegateWidget")) {
                currentType = "QWidget";
                showPanel();
            } else {
                currentType = "";
                hidePanel();
            }
        } else {
            //需要将输入法切换到最初的原始状态--小写,同时将之前的对象指针置为零
            currentWidget = 0;
            currentLineEdit = 0;
            currentTextEdit = 0;
            currentPlain = 0;
            currentBrowser = 0;
            currentType = "";

            setInputType("english");
            hidePanel();
        }

        movePosition();
    }
}

void frmInput2018::movePosition()
{
    if (currentType.isEmpty()) {
        return;
    }

    //根据用户选择的输入法位置设置-居中显示-底部填充-显示在输入框正下方
    int width = this->width();
    int height = this->height();
    if (number) {
        width = frmWidth / 2.5;
        height = frmHeight - topHeight;
    }

    if (position == "center") {
        QPoint pos = QPoint(deskWidth / 2 - width / 2, deskHeight / 2 - height / 2);
        this->setGeometry(pos.x(), pos.y(), width, height);
    } else if (position == "bottom") {
        this->setGeometry(0, deskHeight - height, deskWidth, height);
    } else if (position == "control") {
        QRect rect = currentWidget->rect();
        QPoint pos = QPoint(rect.left(), rect.bottom() + 2);
        pos = currentWidget->mapToGlobal(pos);

        //如果输入控件的X坐标+输入法的宽度大于桌面宽度说明右侧部分被遮住,需要X坐标往左平移
        int x = pos.x();
        if (x + width > deskWidth) {
            x = deskWidth - width;
        }

        //如果输入控件的Y坐标+输入法的高度大于桌面高度说明下侧部分被遮住,需要显示在控件上方
        int y = pos.y();
        if (y + height > deskHeight) {
            y = y - height - rect.height() - 2;
        }

        //如果XY为负数说明被遮住了部分则居中显示否则按照自动计算的XY值显示
        if (x < 0 || y < 0) {
            QPoint pos = QPoint(deskWidth / 2 - width / 2, deskHeight / 2 - height / 2);
            this->setGeometry(pos.x(), pos.y(), width, height);
        } else {
            this->setGeometry(x, y, width, height);
        }
    }

    //立即刷新界面防止残影,部分嵌入式linux硬件性能差需要刷新
    this->update();
}

void frmInput2018::selectChinese()
{
    //清空汉字
    clearChinese();

    QString pinyin = ui->labPY->text();
    if (pinyin.length() > 12) {
        qDebug() << "input too long";
        return;
    }

    int count = pinyinGoogle.select(pinyin);
    QStringList list;
    for (int i = 0; i < count; i++) {
        QString str = pinyinGoogle.getChinese(i);
        list << str;
    }

    foreach (QString txt, list) {
        if (txt.length() > 0) {
            pinyinAll << txt;
        }
    }

    //自动计算汉字长度隐藏多余标签 注释掉以后永远按照标签的数量显示
    checkChinese();
    //显示汉字
    showChinese();
}

void frmInput2018::showChinese()
{
    //每个版面最多显示汉字数量
    for (int i = 0; i < labCh.count(); i++) {
        labCh.at(i)->setText("");
    }

    int count = 0;
    int pyCount = pinyinAll.count();
    for (int i = pinyinIndex; i < pyCount; i++) {
        QString txt = QString("%1. %2").arg(count + 1).arg(pinyinAll.at(pinyinIndex));
        labCh.at(count)->setText(txt);
        count++;
        pinyinIndex++;
        if (count == pinyinCount) {
            break;
        }
    }
}

void frmInput2018::checkChinese()
{
    //根据当前拼音长度自动隐藏标签
    int len = ui->labPY->text().length();
    int maxCountCh = 5;
    if (len > 8) {
        setChVisible(maxCountCh - 4);
    } else if (len > 6) {
        setChVisible(maxCountCh - 3);
    } else if (len > 4) {
        setChVisible(maxCountCh - 2);
    } else if (len > 2) {
        setChVisible(maxCountCh - 1);
    } else {
        setChVisible(maxCountCh);
    }
}

void frmInput2018::setChVisible(int index)
{
    pinyinCount = index;
    for (int i = 0; i < labCh.count(); i++) {
        labCh.at(i)->setVisible(i < index);
    }
}

void frmInput2018::insertValue(const QString &v)
{
    if (currentType.isEmpty()) {
        return;
    }

    QString value = currentWidget->property("upper").toBool() ? v.toUpper() : v;
    if (currentType == "QLineEdit") {
        currentLineEdit->insert(value);
    } else if (currentType == "QTextEdit") {
        currentTextEdit->insertPlainText(value);
    } else if (currentType == "QPlainTextEdit") {
        currentPlain->insertPlainText(value);
    } else if (currentType == "QTextBrowser") {
        currentBrowser->insertPlainText(value);
    } else if (currentType == "QWidget") {
        QStringList list = value.split("");
        foreach (QString str, list) {
            if (!str.isEmpty()) {
                QKeyEvent keyPress(QEvent::KeyPress, 0, Qt::NoModifier, QString(str));
                QApplication::sendEvent(currentWidget, &keyPress);
            }
        }
    }

    //将所有汉字标签可见
    setChVisible(5);
    ui->labPY->setText("");
}

void frmInput2018::deleteValue()
{
    if (currentType.isEmpty()) {
        return;
    }

    QKeyEvent keyPress(QEvent::KeyPress, Qt::Key_Backspace, Qt::NoModifier, QString());
    QApplication::sendEvent(currentWidget, &keyPress);
}

void frmInput2018::setChinese(int index)
{
    QString text = labCh.at(index)->text();
    text = text.split(" ").last();
    if (!text.isEmpty()) {
        insertValue(text);
        //添加完一个汉字后,清空当前汉字信息,等待重新输入
        clearChinese();
        ui->labPY->setText("");
    }
}

void frmInput2018::clearChinese()
{
    //清空汉字,重置索引
    for (int i = 0; i < labCh.count(); i++) {
        labCh.at(i)->setText("");
    }

    pinyinAll.clear();
    pinyinIndex = 0;
}

void frmInput2018::setDbPath(const QString &dbPath)
{
    this->dbPath = dbPath;
}

void frmInput2018::setFontInfo(const QString &fontName, int btnFontSize, int labFontSize)
{
    QFont btnFont(fontName, btnFontSize);
    QFont labFont(fontName, labFontSize);

    QList<QPushButton *> btns = this->findChildren<QPushButton *>();
    foreach (QPushButton *btn, btns) {
        btn->setFont(btnFont);
    }

    QList<QLabel *> labs = ui->widgetTop->findChildren<QLabel *>();
    foreach (QLabel *lab, labs) {
        lab->setFont(labFont);
    }

    ui->btnPre->setFont(btnFont);
    ui->btnNext->setFont(btnFont);
}

void frmInput2018::setFrmSize(int frmWidth, int frmHeight)
{
    this->frmWidth = frmWidth;
    this->frmHeight = frmHeight;
    this->setMinimumSize(frmWidth, frmHeight);
}

void frmInput2018::setIconSize(int iconWidth, int iconHeight)
{
    this->iconWidth = iconWidth;
    this->iconHeight = iconHeight;
}

void frmInput2018::setSpacing(int spacing)
{
    this->spacing = spacing;
    ui->widgetMain->layout()->setSpacing(spacing);
    ui->widgetPreNext->layout()->setSpacing(spacing);
    ui->widgetNumber->layout()->setSpacing(spacing);
}

void frmInput2018::setTopHeight(int topHeight)
{
    this->topHeight = topHeight;
    ui->widgetTop->setFixedHeight(topHeight);
}

void frmInput2018::setMini(bool mini)
{
    this->mini = mini;
    if (mini) {
        labStatus->setVisible(true);
        ui->widgetMain->setVisible(false);
        ui->widgetPreNext->setVisible(false);
        ui->widgetNumber->setVisible(false);
        ui->widgetTop->layout()->setContentsMargins(9, 9, 9, 9);
        ui->verticalSpacer->changeSize(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
    } else {
        labStatus->setVisible(false);
        ui->widgetMain->setVisible(true);
        ui->widgetPreNext->setVisible(true);
        ui->widgetTop->layout()->setContentsMargins(9, 9, 9, 0);
        ui->verticalSpacer->changeSize(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);
    }
}

void frmInput2018::setPosition(const QString &position)
{
    this->position = position;
}

void frmInput2018::setStyle(const QString &style)
{
    QString iconType = "white";
    if (style == "blue") {
        setColor("#444a58", "#F3F3F3", "#4189D3", "#386487", "#F3F3F3", "#386487", "#F3F3F3");
    } else if (style == "gray") {
        setColor("#989898", "#FFFFFF", "#A2A2A2", "#333333", "#F3F3F3", "#2E2E2E", "#F3F3F3");
    } else if (style == "black") {
        setColor("#444a58", "#F3F3F3", "#313131", "#4189D3", "#F3F3F3", "#F95717", "#F3F3F3");
    } else if (style == "brown") {
        setColor("#667481", "#F3F3F3", "#566373", "#4189D3", "#F3F3F3", "#4189D3", "#F3F3F3");
    } else if (style == "silvery") {
        setColor("#868690", "#000002", "#C3C2C7", "#F0F0F0", "#000002", "#F0F0F0", "#000002");
        iconType = "black";
    }

    QString icon_upper = QString(":/image/upper_%1.png").arg(iconType);
    QString icon_delete = QString(":/image/delete_%1.png").arg(iconType);
    QString icon_enter = QString(":/image/enter_%1.png").arg(iconType);
    QString icon_close = QString(":/image/close_%1.png").arg(iconType);
    QString icon_space = QString(":/image/space_%1.png").arg(iconType);

    ui->btnSpace->setIcon(QIcon(icon_space));
    ui->btnClose->setIcon(QIcon(icon_close));
    ui->btnEnter->setIcon(QIcon(icon_enter));
    ui->btnUpper->setIcon(QIcon(icon_upper));
    ui->btnDelete->setIcon(QIcon(icon_delete));

    ui->btnNumberSpace->setIcon(QIcon(icon_space));
    ui->btnNumberClose->setIcon(QIcon(icon_close));
    ui->btnNumberEnter->setIcon(QIcon(icon_enter));
    ui->btnNumberDelete->setIcon(QIcon(icon_delete));
}

void frmInput2018::setColor(const QString &mainBackgroundColor, const QString &mainTextColor, const QString &btnBackgroundColor,
                            const QString &btnHoveColor, const QString &btnHoveTextColor, const QString &labHoveColor, const QString &labHoveTextColor)
{
    QStringList qss;
    qss << QString("QWidget#widgetPreNext{background:none;}");
    qss << QString("QWidget#widgetMain,QWidget#widgetTop,QWidget#widgetNumber{background-color:%1;}").arg(mainBackgroundColor);
    qss << QString("QPushButton{border-width:0px;border-radius:3px;color:%1;}").arg(mainTextColor);
    qss << QString("QPushButton{padding:0px;background-color:%1;}").arg(btnBackgroundColor);
    //如果仅仅是触摸屏请用下面这句
    //qss << QString("QPushButton:pressed{background-color:%1;color:%2;}").arg(btnHoveColor).arg(btnHoveTextColor);
    qss << QString("QPushButton:pressed,QPushButton:hover{background-color:%1;color:%2;}").arg(btnHoveColor).arg(btnHoveTextColor);
    qss << QString("QLabel{padding:0px 8px 0px 8px;border-width:0px;border-radius:3px;color:%1;background:none;}").arg(mainTextColor);
    qss << QString("QLabel:pressed,QLabel:hover{background-color:%1;color:%2;}").arg(labHoveColor).arg(labHoveTextColor);

    if (mini) {
        qss << QString("QWidget#widgetTop{border-radius:5px;}");
    }

    this->setStyleSheet(qss.join(""));
    qApp->processEvents();
}

void frmInput2018::setInputType(const QString &inputType)
{
    this->inputType = inputType;
    if (inputType == "english") {
        ui->btnType->setText("En");
        ui->widgetTop->setEnabled(false);
        showChar(false);
        labStatus->setPixmap(QPixmap(":/image/status_en.png"));

        if (mini) {
            hide();
        }
    } else if (inputType == "chinese") {
        ui->btnType->setText("中");
        ui->widgetTop->setEnabled(true);
        showChar(false);
        labStatus->setPixmap(QPixmap(":/image/status_ch.png"));

        if (mini) {
            show();
        }
    } else if (inputType == "char") {
        ui->btnType->setText("符");
        ui->widgetTop->setEnabled(false);
        showChar(true);
    }

    //每次切换到模式,都要执行清空之前中文模式下的信息
    clearChinese();
    ui->labPY->setText("");
}

void frmInput2018::setUpper(bool isUpper)
{
    QList<QPushButton *> btn = ui->widgetMain->findChildren<QPushButton *>();
    foreach (QPushButton *b, btn) {
        if (b->property("btnLetter").toBool()) {
            QString text = isUpper ? b->text().toUpper() : b->text().toLower();
            b->setText(text);
        }
    }
}

void frmInput2018::showChar(bool isChar)
{
    QStringList chars;
    if (isChar) {
        chars << "!" << "@" << "#" << "$" << "%" << "^" << "&&" << "*" << "(" << ")";
        chars << "~" << "`" << "-" << "_" << "+" << "=" << "{" << "}" << "[" << "]";
        chars << "|" << "\\" << ":" << ";" << "\"" << "'" << "<" << ">" << "?";
        chars << "," << "/" << "：" << "，" << "。" << "？" << "；";
    } else {
        chars << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "0";
        chars << "q" << "w" << "e" << "r" << "t" << "y" << "u" << "i" << "o" << "p";
        chars << "a" << "s" << "d" << "f" << "g" << "h" << "j" << "k" << "l";
        chars << "z" << "x" << "c" << "v" << "b" << "n" << "m";
    }

    QList<QPushButton *> btns;
    btns << ui->btn1 << ui->btn2 << ui->btn3 << ui->btn4 << ui->btn5 << ui->btn6 << ui->btn7 << ui->btn8 << ui->btn9 << ui->btn0;
    btns << ui->btnq << ui->btnw << ui->btne << ui->btnr << ui->btnt << ui->btny << ui->btnu << ui->btni << ui->btno << ui->btnp;
    btns << ui->btna << ui->btns << ui->btnd << ui->btnf << ui->btng << ui->btnh << ui->btnj << ui->btnk << ui->btnl;
    btns << ui->btnz << ui->btnx << ui->btnc << ui->btnv << ui->btnb << ui->btnn << ui->btnm;
    for (int i = 0; i < btns.count(); ++i) {
        btns.at(i)->setText(chars.at(i));
    }
}

void frmInput2018::showPanel()
{
    if (!isEnabled() || currentWidget == 0) {
        return;
    }

    if (mini && inputType == "english") {
        return;
    }

    //根据控件弱属性设置是否显示为数字小键盘
    currentFlag = currentWidget->property("flag").toString();
    if (currentWidget->inherits("QAbstractSpinBox")) {
        currentFlag = "number";
    }

    //如果是父控件中的子控件需要过滤,比如表格控件自动出现的文本框,需要判断是否设置了number
    if (currentFlag != "number") {
        QWidget *father = (QWidget *)currentWidget->parent();
        if (father != 0) {
            father = (QWidget *)father->parent();
            if (father != 0) {
                currentFlag = father->property("flag").toString();
            }
        }
    }

    setMode(currentFlag == "number");

    this->setVisible(true);
    int width = ui->btna->width();
    width = width > 35 ? width : 35;
    ui->btnPre->setFixedWidth(width);
    ui->btnNext->setFixedWidth(width);
}

void frmInput2018::hidePanel()
{
    this->setVisible(false);
}

void frmInput2018::setMode(bool number)
{
    //只有键盘模式改变了才需要切换,否则会产生闪烁
    if (this->number != number && !mini) {
        this->number = number;

        //先隐藏下防止闪烁
        if (position != "bottom") {
            this->setVisible(false);
        }

        ui->widgetTop->setVisible(!number);
        ui->widgetMain->setVisible(!number);
        ui->widgetNumber->setVisible(number);
        setIconSize(iconWidth, iconHeight);

        //清空原有汉字
        clearChinese();
        ui->labPY->setText("");

        if (position != "bottom") {
            if (number) {
                setFixedSize(frmWidth / 2.5, frmHeight - topHeight);
            } else {
                setFixedSize(frmWidth, frmHeight);
            }
        }
    }
}
