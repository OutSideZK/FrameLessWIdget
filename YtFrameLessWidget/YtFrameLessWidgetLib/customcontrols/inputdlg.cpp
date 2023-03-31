#include "inputdlg.h"
#include "ui_inputdlg.h"
#include <QDir>

#define Dict_Pinyin    QString("dict_pinyin.dat")
#define Dict_User      QString("dict_pinyin_user.dat")

InputDlg::InputDlg(QWidget *parent, QString InitStr, bool bIsNumber) :
    QDialog(parent),
    ui(new Ui::InputDlg)
{
    ui->setupUi(this);
    ui->lineEdit->setText(InitStr);

    // 首先判断一下当前软件下面的字库文件是否存在，如果不存在则进行拷贝
    QString dictpath = QString("%1/dict/").arg(QApplication::applicationDirPath());
    QDir dir(dictpath);
    if(!dir.exists()) {
        if(dir.mkdir(dir.absolutePath())) {
            // 创建成功直接拷贝文件
            QFile::copy(":/datfile/image/dict_pinyin.dat", dictpath + Dict_Pinyin);
            QFile::copy(":/datfile/image/dict_pinyin_user.dat", dictpath + Dict_User);
        }
    } else {
        // 如果文件夹存在，则先判断一下字库文件是否存在
        QFile file(dictpath + Dict_Pinyin);
        if(!file.exists()) {
            QFile::copy(":/datfile/image/dict_pinyin.dat", dictpath + Dict_Pinyin);
            QFile::copy(":/datfile/image/dict_pinyin_user.dat", dictpath + Dict_User);
        }
    }

    m_frmInput2018 = new frmInput2018(this);
    m_frmInput2018->setStyle("blue");

    // 如果是数字输入，则设置属性直接显示数字输入框
    if(bIsNumber) {
        ui->lineEdit->setProperty("flag", "number");
    }
}

InputDlg::~InputDlg()
{
    if(m_frmInput2018) {
        delete m_frmInput2018;
        m_frmInput2018 = nullptr;
    }
    delete ui;
}

void InputDlg::on_PB_Confirm_clicked()
{
    m_TargetStr = ui->lineEdit->text();
    accept();
}

void InputDlg::on_PB_Cancle_clicked()
{
    reject();
}
