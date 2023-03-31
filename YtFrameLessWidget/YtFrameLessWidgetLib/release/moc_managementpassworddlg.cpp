/****************************************************************************
** Meta object code from reading C++ file 'managementpassworddlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../customcontrols/managementpassworddlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'managementpassworddlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ManagementPasswordDlg_t {
    QByteArrayData data[15];
    char stringdata0[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ManagementPasswordDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ManagementPasswordDlg_t qt_meta_stringdata_ManagementPasswordDlg = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ManagementPasswordDlg"
QT_MOC_LITERAL(1, 22, 17), // "on_btnAdd_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 24), // "on_btnConfirmAdd_clicked"
QT_MOC_LITERAL(4, 66, 17), // "on_btnDel_clicked"
QT_MOC_LITERAL(5, 84, 32), // "on_tableWidget_itemDoubleClicked"
QT_MOC_LITERAL(6, 117, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(7, 135, 4), // "item"
QT_MOC_LITERAL(8, 140, 27), // "on_btnConfirmChange_clicked"
QT_MOC_LITERAL(9, 168, 26), // "on_tableWidget_itemClicked"
QT_MOC_LITERAL(10, 195, 18), // "on_btnSave_clicked"
QT_MOC_LITERAL(11, 214, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(12, 235, 45), // "on_cbbChangeUserAuthority_cur..."
QT_MOC_LITERAL(13, 281, 5), // "index"
QT_MOC_LITERAL(14, 287, 42) // "on_cbbAddUserAuthority_curren..."

    },
    "ManagementPasswordDlg\0on_btnAdd_clicked\0"
    "\0on_btnConfirmAdd_clicked\0on_btnDel_clicked\0"
    "on_tableWidget_itemDoubleClicked\0"
    "QTableWidgetItem*\0item\0"
    "on_btnConfirmChange_clicked\0"
    "on_tableWidget_itemClicked\0"
    "on_btnSave_clicked\0on_btnCancel_clicked\0"
    "on_cbbChangeUserAuthority_currentIndexChanged\0"
    "index\0on_cbbAddUserAuthority_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ManagementPasswordDlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    1,   71,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    1,   76,    2, 0x08 /* Private */,
      14,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void ManagementPasswordDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ManagementPasswordDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnAdd_clicked(); break;
        case 1: _t->on_btnConfirmAdd_clicked(); break;
        case 2: _t->on_btnDel_clicked(); break;
        case 3: _t->on_tableWidget_itemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_btnConfirmChange_clicked(); break;
        case 5: _t->on_tableWidget_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->on_btnSave_clicked(); break;
        case 7: _t->on_btnCancel_clicked(); break;
        case 8: _t->on_cbbChangeUserAuthority_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_cbbAddUserAuthority_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ManagementPasswordDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ManagementPasswordDlg.data,
    qt_meta_data_ManagementPasswordDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ManagementPasswordDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManagementPasswordDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ManagementPasswordDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ManagementPasswordDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
