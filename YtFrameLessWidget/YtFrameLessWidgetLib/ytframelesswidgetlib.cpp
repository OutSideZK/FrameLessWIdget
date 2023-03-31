#include "ytframelesswidgetlib.h"
#include <QDebug>
#include "ytframelessdlg.h"
#include "ytmessageboxui.h"
#include "ytpasswordui.h"
#include "ytpassworduiex.h"
#include "inputdlg.h"
#include "insertstringdlg.h"
#include "insertnumberdlg.h"
#include "productdialog.h"

int YtFrameLessWidgetLib::YtSetShowForm(QWidget *form, QString aboutstr, QPoint showpos, \
                                        bool isModality, bool isShowLogo, bool isShowTitle, \
                                        bool isShowMin, bool isShowMax, bool isShowClose, bool isFullScreen)
{
    YtFrameLessDlg dlg;
    dlg.YtsetWindowModality(isModality);
    dlg.YtSetShowForm(form, isShowLogo, isShowTitle, isShowMin, isShowMax, isShowClose, aboutstr, isFullScreen);
    if(!showpos.isNull() && !isFullScreen) {
        dlg.move(showpos);
    }
    return dlg.exec();
}

int YtMessageBox::YtShowSuccess(const QString &title, const QString &message)
{
    YtFrameLessDlg dlg;
    YtMessageBoxUI boxdlg(nullptr, 0, message);
    dlg.YtSetShowForm(&boxdlg, false, true, false, false, true);
    dlg.YtSetTitle(title);
    return dlg.exec();
}

int YtMessageBox::YtShowError(const QString &title, const QString &message)
{
    YtFrameLessDlg dlg;
    YtMessageBoxUI boxdlg(nullptr, 1, message);
    dlg.YtSetShowForm(&boxdlg, false, true, false, false, true);
    dlg.YtSetTitle(title);
    return dlg.exec();
}

int YtMessageBox::YtShowQuestion(const QString &title, const QString &message)
{
    YtFrameLessDlg dlg;
    YtMessageBoxUI boxdlg(nullptr, 2, message);
    dlg.YtSetShowForm(&boxdlg, false, true, false, false, true);
    dlg.YtSetTitle(title);
    return dlg.exec();
}

int YtMessageBox::YtShowWarning(const QString &title, const QString &message)
{
    YtFrameLessDlg dlg;
    YtMessageBoxUI boxdlg(nullptr, 3, message);
    dlg.YtSetShowForm(&boxdlg, false, true, false, false, true);
    dlg.YtSetTitle(title);
    return dlg.exec();
}

int YtPasswardDlg::YtShowPassword(QWidget *parent, QString strTargetPassword, bool bVirtualKeyBoard, bool bDarkMode)
{
    Q_UNUSED(bDarkMode)
    YtFrameLessDlg dlg;
    YtPasswordui passdlg(parent, strTargetPassword, bVirtualKeyBoard);
    dlg.YtSetShowForm(&passdlg, false, true, false, false, true);
    return dlg.exec();
}

int YtPasswardDlg::YtShowPasswordEx(QWidget *parent, bool bVirtualKeyBoard, bool bDarkMode, bool bUserName)
{
    Q_UNUSED(bDarkMode)
    YtFrameLessDlg dlg;
    YtPassworduiEx passdlg(parent, bVirtualKeyBoard, bUserName);
    dlg.YtSetShowForm(&passdlg, false, true, false, false, true);
    return dlg.exec();
}

bool toGetNewChineseQString(QString Oldstr, QString &Newstr, QString title)
{
    YtFrameLessDlg dlg;
    InputDlg input(nullptr, Oldstr);
    dlg.YtSetShowForm(&input, true, true, false, false, true);
    if(QDialog::Accepted == dlg.exec()) {
        Newstr = input.m_TargetStr;
        return true;
    }
    return false;
}

bool toGetNewQStringNumberAll(QString TitleStr, QString Oldstr, QString &Newstr)
{
    YtFrameLessDlg dlg;
    InsertNumberDlg input(nullptr, Oldstr);
    dlg.YtSetShowForm(&input, true, true, false, false, true);
    if(QDialog::Accepted == dlg.exec()) {
        Newstr = input.m_TargetStr;
        return true;
    }
    return false;
}

bool toGetNewQStringAll(QString TitleStr, QString Oldstr, QString &Newstr)
{
    YtFrameLessDlg dlg;
    InsertStringDlg input(nullptr, Oldstr);
    dlg.YtSetShowForm(&input, true, true, false, false, true);
    if(QDialog::Accepted == dlg.exec()) {
        Newstr = input.m_TargetStr;
        return true;
    }
    return false;
}

bool YtShowInputDlg(QString InitStr, QString &RefStr, bool bIsNumber)
{
    YtFrameLessDlg dlg;
    InputDlg input(nullptr, InitStr, bIsNumber);
    dlg.YtSetShowForm(&input, true, true, false, false, true);
    if(QDialog::Accepted == dlg.exec()) {
        RefStr = input.m_TargetStr;
        return true;
    }
    return false;
}

void YtProductDlg::YtShowProductDialog()
{
    YtFrameLessDlg dlg;
    ProductDialog product;
    product._product_managerment_val.toLoadData(QDir::currentPath() + "/PluginModels/ProductManagerment.data");
    product.initUI();
    dlg.YtSetShowForm(&product, true, true, false, false, false);
    dlg.exec();
}

bool YtProductDlg::YtQueryProduct(const int product_recipe, QString &product_name)
{
    YtFrameLessDlg dlg;
    return true;
}

void YtProductDlg::YtUpdateCurrProduct(int &product_recipe, QString &product_name)
{
    YtFrameLessDlg dlg;
}
