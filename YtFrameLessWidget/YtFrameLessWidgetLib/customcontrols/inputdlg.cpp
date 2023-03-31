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

    // �����ж�һ�µ�ǰ���������ֿ��ļ��Ƿ���ڣ��������������п���
    QString dictpath = QString("%1/dict/").arg(QApplication::applicationDirPath());
    QDir dir(dictpath);
    if(!dir.exists()) {
        if(dir.mkdir(dir.absolutePath())) {
            // �����ɹ�ֱ�ӿ����ļ�
            QFile::copy(":/datfile/image/dict_pinyin.dat", dictpath + Dict_Pinyin);
            QFile::copy(":/datfile/image/dict_pinyin_user.dat", dictpath + Dict_User);
        }
    } else {
        // ����ļ��д��ڣ������ж�һ���ֿ��ļ��Ƿ����
        QFile file(dictpath + Dict_Pinyin);
        if(!file.exists()) {
            QFile::copy(":/datfile/image/dict_pinyin.dat", dictpath + Dict_Pinyin);
            QFile::copy(":/datfile/image/dict_pinyin_user.dat", dictpath + Dict_User);
        }
    }

    m_frmInput2018 = new frmInput2018(this);
    m_frmInput2018->setStyle("blue");

    // ������������룬����������ֱ����ʾ���������
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
