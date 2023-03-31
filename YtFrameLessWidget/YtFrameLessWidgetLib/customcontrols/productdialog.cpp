#include "productdialog.h"
#include "ui_productdialog.h"
#include "Windows.h"
#include <QDir>
#include <QFileInfoList>
#include <QToolTip>
#include <QDebug>
#include <QDir>
#include "ytframelesswidgetlib.h"

bool YtCopyDirectoryFiles(const QString &src_dir, const QString &tgt_dir, bool flag_coverfile_ifexist)
{
    QDir sourceDir(src_dir);
    QDir targetDir(tgt_dir);
    if(!sourceDir.exists()) {
        return false;
    }

    if(!targetDir.exists()) {
        //���Ŀ��Ŀ¼�����ڣ�����д���
        if(!targetDir.mkdir(targetDir.absolutePath())) {
            return false;
        }
    }

    sourceDir.setFilter(QDir::AllEntries | QDir::NoDotAndDotDot);
    QFileInfoList fileInfoList = sourceDir.entryInfoList();
    foreach(QFileInfo fileInfo, fileInfoList) {
        //if(fileInfo.fileName() == "." || fileInfo.fileName() == "..")
        //    continue;

        //������Ŀ¼
        if(fileInfo.isDir()) {
            //�ݹ���ÿ���
            if(!YtCopyDirectoryFiles(fileInfo.filePath(), targetDir.filePath(fileInfo.fileName()), flag_coverfile_ifexist)) {
                return false;
            }
        }
        //�������ļ�
        else {
            if(flag_coverfile_ifexist && targetDir.exists(fileInfo.fileName())) {
                targetDir.remove(fileInfo.fileName());
            }
            if(!QFile::copy(fileInfo.filePath(), targetDir.filePath(fileInfo.fileName()))) {
                return false;
            }
        }
    }
    return true;
}
ProductDialog::ProductDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductDialog)
{
    ui->setupUi(this);

    _row_pos_record = -1;
    _curr_product_recipe = 0;
    _curr_product_name = "";

    initUI();
    connect(ui->editAddDesName, &MyLineEdit::signal_doubleClicked, this, &ProductDialog::toSetNewStr);
    connect(ui->editChangeDesName, &MyLineEdit::signal_doubleClicked, this, &ProductDialog::toSetNewStr);
    ui->btnConfirm->hide();
}

ProductDialog::~ProductDialog()
{
    if(_action_opendir) {
        delete _action_opendir;
        _action_opendir = nullptr;
    }

    if(_action_setbasic) {
        delete _action_setbasic;
        _action_setbasic = nullptr;
    }

    if(_show_menu) {
        delete _show_menu;
        _show_menu = nullptr;
    }
    delete ui;
}

bool ProductDialog::QueryProduct(const int product_recipe, QString &product_name)
{
    if(!_product_managerment_val.toGetKeyList().contains(QString::number(product_recipe))) {
        return false;
    }

    product_name = _product_managerment_val.toGetDataQStringVal(QString::number(product_recipe));
    return true;
}

void ProductDialog::UpdateCurrProduct(int &product_recipe, QString &product_name)
{
    product_recipe = _curr_product_recipe;
    product_name = _curr_product_name;
}

void ProductDialog::initUI()
{
    ui->stackedWidget->hide();
    ui->editChangeSrcNum->hide();

    // set table view
    ui->productTableView->horizontalHeader()->setStretchLastSection(true); //���ó�������
    ui->productTableView->horizontalHeader()->setFixedHeight(38); //���ñ�ͷ�ĸ߶�
    // ֻ�ܵ�ѡ
    ui->productTableView->setSelectionMode(QAbstractItemView::SingleSelection);
    // ������Ϊѡ���׼
    ui->productTableView->setSelectionBehavior(QAbstractItemView::QAbstractItemView::SelectRows);
    // ��ֱ��ͷ����
    ui->productTableView->verticalHeader()->hide();
    // ����ͷ�ɱ��������������¼�
    ui->productTableView->horizontalHeader()->setSectionsClickable(false);
    // ���ñ�񲻿ɱ༭
    ui->productTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // ���ÿ����Ҽ������˵�
    ui->productTableView->setContextMenuPolicy(Qt::CustomContextMenu);
    //��ȡ���л��ļ�
    _product_managerment_val.toLoadData(QDir::currentPath() + "/PluginModels/ProductManagerment.data");
    QVector<QString> vec_product_recipe = _product_managerment_val.toGetKeyList();
    ui->productTableView->setRowCount(vec_product_recipe.size());
    for(int i = 0; i < vec_product_recipe.size(); i++) {
        QString recipe = vec_product_recipe.at(i);
        ui->productTableView->setItem(i, 0, new QTableWidgetItem(recipe));
        ui->productTableView->item(i, 0)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ui->productTableView->setItem(i, 1, new QTableWidgetItem(_product_managerment_val.toGetDataQStringVal(recipe)));
        ui->productTableView->item(i, 1)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }
    _show_menu = new QMenu(ui->productTableView);
    _action_opendir = new QAction(_show_menu);
    _action_opendir->setText("�򿪲�Ʒ�ļ���");
    connect(_action_opendir, &QAction::triggered, this, &ProductDialog::onSlot_ActionTriggered);
    _show_menu->addAction(_action_opendir);
    _action_setbasic = new QAction(_show_menu);
    _action_setbasic->setText("����Ϊ��׼ģ��");
    connect(_action_setbasic, &QAction::triggered, this, &ProductDialog::onSlot_ActionTriggered);
    _show_menu->addAction(_action_setbasic);

    connect(ui->productTableView, &QTableWidget::customContextMenuRequested, this, &ProductDialog::onSlot_ShowContextMenu);
}

void ProductDialog::on_btnAddProduct_clicked()
{
    ui->sbAddDesNo->setValue(1);
    ui->editAddDesName->clear();

    ui->stackedWidget->setCurrentIndex(1);
    ui->stackedWidget->show();
}

void ProductDialog::on_btnExecuteAdd_clicked()
{
    if(ui->editAddDesName->text().trimmed().isEmpty()) {
        QToolTip::showText(cursor().pos(), "��Ʒ���Ʋ���Ϊ�գ�");
        return;
    }

    if(_product_managerment_val.toGetKeyList().contains(QString::number(ui->sbAddDesNo->value()))) {
        YtMessageBox::YtShowError("��ʾ", "�䷽���ظ����޷�����������¼��");
        return;
    }

    int row_count = ui->productTableView->rowCount(); //��ñ������
    int find = -1;
    for(int i = 0; i != row_count; i++) {
        if(ui->productTableView->item(i, 0)->text() == ui->sbAddDesNo->value()) {
            find = i;
            break;
        }
    }
    if(-1 != find) {
        YtMessageBox::YtShowError("��ʾ", "�䷽���ظ����޷�����������¼��");
        return;
    }
    ui->productTableView->setRowCount(row_count + 1);
    int i = row_count;
    _product_managerment_val.toInsertData(QString::number(ui->sbAddDesNo->value()), ui->editAddDesName->text());
    ui->productTableView->setItem(i, 0, new QTableWidgetItem(QString::number(ui->sbAddDesNo->value())));
    ui->productTableView->item(i, 0)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->productTableView->setItem(i, 1, new QTableWidgetItem(ui->editAddDesName->text()));
    ui->productTableView->item(i, 1)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->productTableView->scrollToBottom();

    QString path = QString("%1/%2_%3").
            arg(QDir::currentPath() + "/PluginModels").
            arg(ui->sbAddDesNo->value()).
            arg(ui->editAddDesName->text());

    QDir dir(path);
    if(!dir.exists()) {
        dir.mkpath(path);
    }
    if(ui->productTableView->rowCount()>1)
    {
        QString Srcpath = QString("%1/%2_%3").
                arg(QDir::currentPath() + "/PluginModels").
                arg(ui->productTableView->item(0,0)->text()).
                arg(ui->productTableView->item(0,1)->text());
        YtCopyDirectoryFiles(Srcpath,path,true);
    }
    _product_managerment_val.toSaveData(QDir::currentPath() + "/PluginModels/ProductManagerment.data");
    ui->stackedWidget->hide();
}

void ProductDialog::on_btnDelProduct_clicked()
{
    int row = _row_pos_record;
    if(row == -1) {
        YtMessageBox::YtShowWarning("ϵͳ��ʾ", "����ѡ����Ҫɾ��������!");
        return;
    }

    if(1 == YtMessageBox::YtShowQuestion("ϵͳ��ʾ", "ȷ��ɾ����ǰ��Ʒ��")) {
        // ɾ����Ӧ�ļ���
        if(1 == YtMessageBox::YtShowWarning("��ʾ", "�Ƿ�ɾ����Ӧ�ļ��У�")) {
            int iProductNo = ui->productTableView->item(row, 0)->text().toInt();
            QString strProductName = ui->productTableView->item(row, 1)->text();
            QString path = QString("%1/%2_%3").
                    arg(QDir::currentPath() + "/PluginModels").
                    arg(iProductNo).
                    arg(strProductName);

            QDir dir(path);
            if(dir.exists()) {
                dir.removeRecursively();
            }
        }
        _product_managerment_val.toDeletDataByKey(ui->productTableView->item(row, 0)->text());
        _product_managerment_val.toSaveData(QDir::currentPath() + "/PluginModels/ProductManagerment.data");
        ui->productTableView->removeRow(row);
        _row_pos_record = -1; //ɾ���ɹ���������λ�ü�¼
    }
}

void ProductDialog::on_btnSetCurrProduct_clicked()
{
    if(_row_pos_record < 0) {
        YtMessageBox::YtShowWarning("ϵͳ��ʾ", "����ѡ����Ҫ�趨�Ĳ�Ʒ!");
        return;
    }

    int res = YtMessageBox::YtShowQuestion("ϵͳ��ʾ", QString("ȷ��Ҫ���ò�Ʒ��%1-%2��Ϊ��ǰ������Ʒ��")
                                           .arg(ui->productTableView->item(_row_pos_record, 0)->text())
                                           .arg(ui->productTableView->item(_row_pos_record, 1)->text()));
    if(res == 1) {
        _curr_product_recipe = ui->productTableView->item(_row_pos_record, 0)->text().toInt();
        _curr_product_name = ui->productTableView->item(_row_pos_record, 1)->text();
    }
}

void ProductDialog::on_btnStartCopy_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->comboCopySrc->clear();
    ui->editCopyDesName->clear();
    ui->sbCopyDesNo->setValue(1);

    for(int i = 0; i != ui->productTableView->rowCount(); i++) {
        ui->comboCopySrc->addItem(QString("%1 & %2")
                                  .arg(ui->productTableView->item(i, 0)->text())
                                  .arg(ui->productTableView->item(i, 1)->text()));
    }
    ui->comboCopySrc->setCurrentIndex(_row_pos_record);
    ui->stackedWidget->show();
}

void ProductDialog::on_btnExecuteCopy_clicked()
{
    if(ui->productTableView->rowCount() <= 0) {
        QToolTip::showText(cursor().pos(), "��Ʒ�������ݣ�");
        return;
    }

    int current_index = ui->comboCopySrc->currentIndex();
    if(current_index < 0) {
        QToolTip::showText(cursor().pos(), "δѡ������Դ���ݣ�");
        return;
    }

    if(ui->editCopyDesName->text().trimmed().isEmpty()) {
        QToolTip::showText(cursor().pos(), "��Ʒ���Ʋ���Ϊ�գ�");
        return;
    }

    if(_product_managerment_val.toGetKeyList().contains(QString::number(ui->sbCopyDesNo->value()))) {
        YtMessageBox::YtShowError("��ʾ", "�䷽���Ѵ��ڣ��޷���ɲ�����");
        return;
    }

    _product_managerment_val.toInsertData(QString::number(ui->sbCopyDesNo->value()), ui->editCopyDesName->text());
    _product_managerment_val.toSaveData(QDir::currentPath() + "/PluginModels/ProductManagerment.data");
    int i = ui->productTableView->rowCount();
    ui->productTableView->setRowCount(i + 1);
    ui->productTableView->setItem(i, 0, new QTableWidgetItem(QString::number(ui->sbCopyDesNo->value())));
    ui->productTableView->item(i, 0)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->productTableView->setItem(i, 1, new QTableWidgetItem(ui->editCopyDesName->text()));
    ui->productTableView->item(i, 1)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

    // �����㷨�ļ�
    QString src_path = QString("%1/%2_%3").
            arg(QDir::currentPath() + "/PluginModels").
            arg(ui->comboCopySrc->currentText().split("&").at(0).trimmed()).
            arg(ui->comboCopySrc->currentText().split("&").at(1).trimmed());
    QString tgt_path = QString("%1/%2_%3").
            arg(QDir::currentPath() + "/PluginModels").
            arg(QString::number(ui->sbCopyDesNo->value())).
            arg(ui->editCopyDesName->text());

    if(YtCopyDirectoryFiles(src_path, tgt_path,true)) {

    } else {

    }
    ui->stackedWidget->hide();
}

void ProductDialog::on_btnConfirm_clicked()
{
    accept();
}

void ProductDialog::on_btnCancel_clicked()
{
    reject();
}

void ProductDialog::on_btnExecuteChange_clicked()
{
    if(ui->editChangeDesName->text().trimmed().isEmpty()) {
        QToolTip::showText(cursor().pos(), "��Ʒ���Ʋ���Ϊ�գ�");
        return;
    }

    QString src_path = QString("%1/%2_%3").
            arg(QDir::currentPath() + "/PluginModels").
            arg(ui->editChangeSrcNum->text()).
            arg(ui->editChangeSrcName->text());

    QString tgt_path = QString("%1/%2_%3").
            arg(QDir::currentPath() + "/PluginModels").
            arg(ui->editChangeSrcNum->text()).
            arg(ui->editChangeDesName->text());

    ui->productTableView->item(_row_pos_record, 1)->setText(ui->editChangeDesName->text());

    QDir dir(src_path);
    if(!dir.rename(src_path, tgt_path)) {
        YtMessageBox::YtShowError("��ʾ", "��Ʒ�����޸�ʧ��-2");
        return;
    }
    _product_managerment_val.toInsertData(ui->editChangeSrcNum->text(), ui->editChangeDesName->text());
    _product_managerment_val.toSaveData(QDir::currentPath() + "/PluginModels/ProductManagerment.data");

    ui->stackedWidget->hide();
}


void ProductDialog::on_productTableView_itemDoubleClicked(QTableWidgetItem *item)
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->editChangeSrcNum->clear();
    ui->editChangeSrcName->clear();
    ui->editChangeDesName->clear();
    _row_pos_record = ui->productTableView->currentRow();
    ui->editChangeSrcNum->setText(ui->productTableView->item(_row_pos_record, 0)->text());
    ui->editChangeSrcName->setText(ui->productTableView->item(_row_pos_record, 1)->text());

    ui->stackedWidget->show();
}

void ProductDialog::on_productTableView_itemClicked(QTableWidgetItem *item)
{
    _row_pos_record = ui->productTableView->currentRow();
}

void ProductDialog::toSetNewStr()
{
    QLineEdit *btn = qobject_cast<QLineEdit *>(sender());
    QString tro;
    //if(toGetNewQStringAll(btn->text(),tro))
    //{
    //    btn->setText(tro);
    //}

}

void ProductDialog::onSlot_ShowContextMenu(const QPoint &pos)
{
    if(ui->productTableView->rowCount() <= 0) {
        return;
    }
    QModelIndex index = ui->productTableView->indexAt(pos);
    if(index.isValid()) {
        _action_opendir->setData(index.row());
        _action_setbasic->setData(index.row());
        _show_menu->move(QCursor::pos());
        _show_menu->show();
    }
}

void ProductDialog::onSlot_ActionTriggered()
{
    QAction *pEven = qobject_cast<QAction *>(this->sender()); //this->sender()���Ƿ��ź��� QAction
    //��ȡ��������
    int currentRow = pEven->data().toInt();
    QString recipe = ui->productTableView->item(currentRow, 0)->text();
    QString product = ui->productTableView->item(currentRow, 1)->text();

    if("�򿪲�Ʒ�ļ���" == pEven->text()) {
        QString modelpath = QString("file:%1\\PluginModels\\%2_%3\\").arg(QDir::currentPath()).arg(recipe).arg(product);
        QDesktopServices::openUrl(QUrl(modelpath, QUrl::TolerantMode));
    } else if("����Ϊ��׼ģ��" == pEven->text()) {

    }
}

void ProductManage::ClearAllData()
{
    m_mapUser.clear();
}

void ProductManage::toLoadData(const QString &path)
{
    m_mapUser.clear();
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly)) {
        return;
    }
    QDataStream in(&file);
    int size = 0;
    QString recipe = "";
    QString product = "";
    in >> size;
    for(int i = 0; i < size; i++) {
        in >> recipe;
        in >> product;
        toInsertData(recipe, product);
    }
    file.close();
}

void ProductManage::toSaveData(const QString &path)
{
    QFile file(path);
    if(!file.open(QIODevice::WriteOnly)) {
        return;
    }
    QDataStream out(&file);
    out << m_mapUser.size();
    QMap<QString, QString>::ConstIterator it = m_mapUser.constBegin();
    while (it != m_mapUser.constEnd()) {
        out << it.key() << it.value();
        ++it;
    }

    file.close();
}

QVector<QString> ProductManage::toGetKeyList()
{
    QVector<QString> value;
    value.clear();
    QMap<QString, QString>::const_iterator it = m_mapUser.constBegin();
    while (it != m_mapUser.constEnd()) {
        value.push_back(it.key());
        ++it;
    }
    return value;
}

void ProductManage::toDeletDataByKey(const QString &key)
{
    if(m_mapUser.isEmpty()) {
        return;
    }
    if(m_mapUser.contains(key)) {
        m_mapUser.remove(key);
    }
}

void ProductManage::toInsertData(const QString &key, const QString &productname)
{
    m_mapUser.insert(key, productname);
}

QString ProductManage::toGetDataQStringVal(const QString &key)
{
    return m_mapUser.value(key);
}
