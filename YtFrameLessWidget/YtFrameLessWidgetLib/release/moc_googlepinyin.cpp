/****************************************************************************
** Meta object code from reading C++ file 'googlepinyin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../core_input2018/googlepinyin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'googlepinyin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GooglePinYin_t {
    QByteArrayData data[15];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GooglePinYin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GooglePinYin_t qt_meta_stringdata_GooglePinYin = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GooglePinYin"
QT_MOC_LITERAL(1, 13, 4), // "open"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 6), // "dbPath"
QT_MOC_LITERAL(4, 26, 5), // "close"
QT_MOC_LITERAL(5, 32, 6), // "cancel"
QT_MOC_LITERAL(6, 39, 5), // "flush"
QT_MOC_LITERAL(7, 45, 5), // "reset"
QT_MOC_LITERAL(8, 51, 6), // "select"
QT_MOC_LITERAL(9, 58, 6), // "pinyin"
QT_MOC_LITERAL(10, 65, 10), // "getChinese"
QT_MOC_LITERAL(11, 76, 5), // "index"
QT_MOC_LITERAL(12, 82, 12), // "deleteSelect"
QT_MOC_LITERAL(13, 95, 3), // "pos"
QT_MOC_LITERAL(14, 99, 11) // "getPosition"

    },
    "GooglePinYin\0open\0\0dbPath\0close\0cancel\0"
    "flush\0reset\0select\0pinyin\0getChinese\0"
    "index\0deleteSelect\0pos\0getPosition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GooglePinYin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    0,   62,    2, 0x0a /* Public */,
       5,    0,   63,    2, 0x0a /* Public */,
       6,    0,   64,    2, 0x0a /* Public */,
       7,    0,   65,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
      10,    1,   69,    2, 0x0a /* Public */,
      12,    1,   72,    2, 0x0a /* Public */,
      14,    0,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,    9,
    QMetaType::QString, QMetaType::Int,   11,
    QMetaType::Int, QMetaType::Int,   13,
    QMetaType::Int,

       0        // eod
};

void GooglePinYin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GooglePinYin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->open((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->close(); break;
        case 2: _t->cancel(); break;
        case 3: _t->flush(); break;
        case 4: _t->reset(); break;
        case 5: { int _r = _t->select((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->getChinese((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->deleteSelect((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->getPosition();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GooglePinYin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GooglePinYin.data,
    qt_meta_data_GooglePinYin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GooglePinYin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GooglePinYin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GooglePinYin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GooglePinYin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
