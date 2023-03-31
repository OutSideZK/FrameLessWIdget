/****************************************************************************
** Meta object code from reading C++ file 'ytpasswordui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../customcontrols/ytpasswordui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ytpasswordui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_YtPasswordui_t {
    QByteArrayData data[10];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_YtPasswordui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_YtPasswordui_t qt_meta_stringdata_YtPasswordui = {
    {
QT_MOC_LITERAL(0, 0, 12), // "YtPasswordui"
QT_MOC_LITERAL(1, 13, 19), // "on_btnLogin_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(4, 55, 8), // "ButtonDo"
QT_MOC_LITERAL(5, 64, 36), // "on_labelPasswordChange_linkAc..."
QT_MOC_LITERAL(6, 101, 4), // "link"
QT_MOC_LITERAL(7, 106, 37), // "on_linePassword_cursorPositio..."
QT_MOC_LITERAL(8, 144, 4), // "arg1"
QT_MOC_LITERAL(9, 149, 4) // "arg2"

    },
    "YtPasswordui\0on_btnLogin_clicked\0\0"
    "on_btnCancel_clicked\0ButtonDo\0"
    "on_labelPasswordChange_linkActivated\0"
    "link\0on_linePassword_cursorPositionChanged\0"
    "arg1\0arg2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_YtPasswordui[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    2,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,

       0        // eod
};

void YtPasswordui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<YtPasswordui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnLogin_clicked(); break;
        case 1: _t->on_btnCancel_clicked(); break;
        case 2: _t->ButtonDo(); break;
        case 3: _t->on_labelPasswordChange_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_linePassword_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject YtPasswordui::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_YtPasswordui.data,
    qt_meta_data_YtPasswordui,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *YtPasswordui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *YtPasswordui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_YtPasswordui.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int YtPasswordui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
