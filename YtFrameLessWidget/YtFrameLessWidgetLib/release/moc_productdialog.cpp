/****************************************************************************
** Meta object code from reading C++ file 'productdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../customcontrols/productdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'productdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyLineEdit_t {
    QByteArrayData data[3];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyLineEdit_t qt_meta_stringdata_MyLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MyLineEdit"
QT_MOC_LITERAL(1, 11, 20), // "signal_doubleClicked"
QT_MOC_LITERAL(2, 32, 0) // ""

    },
    "MyLineEdit\0signal_doubleClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyLineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void MyLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_doubleClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyLineEdit::signal_doubleClicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MyLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_MyLineEdit.data,
    qt_meta_data_MyLineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int MyLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MyLineEdit::signal_doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ProductDialog_t {
    QByteArrayData data[19];
    char stringdata0[395];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProductDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProductDialog_t qt_meta_stringdata_ProductDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ProductDialog"
QT_MOC_LITERAL(1, 14, 24), // "on_btnAddProduct_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 24), // "on_btnDelProduct_clicked"
QT_MOC_LITERAL(4, 65, 28), // "on_btnSetCurrProduct_clicked"
QT_MOC_LITERAL(5, 94, 23), // "on_btnStartCopy_clicked"
QT_MOC_LITERAL(6, 118, 25), // "on_btnExecuteCopy_clicked"
QT_MOC_LITERAL(7, 144, 21), // "on_btnConfirm_clicked"
QT_MOC_LITERAL(8, 166, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(9, 187, 24), // "on_btnExecuteAdd_clicked"
QT_MOC_LITERAL(10, 212, 27), // "on_btnExecuteChange_clicked"
QT_MOC_LITERAL(11, 240, 37), // "on_productTableView_itemDoubl..."
QT_MOC_LITERAL(12, 278, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(13, 296, 4), // "item"
QT_MOC_LITERAL(14, 301, 31), // "on_productTableView_itemClicked"
QT_MOC_LITERAL(15, 333, 11), // "toSetNewStr"
QT_MOC_LITERAL(16, 345, 22), // "onSlot_ShowContextMenu"
QT_MOC_LITERAL(17, 368, 3), // "pos"
QT_MOC_LITERAL(18, 372, 22) // "onSlot_ActionTriggered"

    },
    "ProductDialog\0on_btnAddProduct_clicked\0"
    "\0on_btnDelProduct_clicked\0"
    "on_btnSetCurrProduct_clicked\0"
    "on_btnStartCopy_clicked\0"
    "on_btnExecuteCopy_clicked\0"
    "on_btnConfirm_clicked\0on_btnCancel_clicked\0"
    "on_btnExecuteAdd_clicked\0"
    "on_btnExecuteChange_clicked\0"
    "on_productTableView_itemDoubleClicked\0"
    "QTableWidgetItem*\0item\0"
    "on_productTableView_itemClicked\0"
    "toSetNewStr\0onSlot_ShowContextMenu\0"
    "pos\0onSlot_ActionTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProductDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    1,   93,    2, 0x08 /* Private */,
      14,    1,   96,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,
      16,    1,  100,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   17,
    QMetaType::Void,

       0        // eod
};

void ProductDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProductDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnAddProduct_clicked(); break;
        case 1: _t->on_btnDelProduct_clicked(); break;
        case 2: _t->on_btnSetCurrProduct_clicked(); break;
        case 3: _t->on_btnStartCopy_clicked(); break;
        case 4: _t->on_btnExecuteCopy_clicked(); break;
        case 5: _t->on_btnConfirm_clicked(); break;
        case 6: _t->on_btnCancel_clicked(); break;
        case 7: _t->on_btnExecuteAdd_clicked(); break;
        case 8: _t->on_btnExecuteChange_clicked(); break;
        case 9: _t->on_productTableView_itemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->on_productTableView_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->toSetNewStr(); break;
        case 12: _t->onSlot_ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->onSlot_ActionTriggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProductDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ProductDialog.data,
    qt_meta_data_ProductDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProductDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProductDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProductDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ProductDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
