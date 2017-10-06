/****************************************************************************
** Meta object code from reading C++ file 'purchasesouvenirs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/purchasesouvenirs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'purchasesouvenirs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_purchaseSouvenirs_t {
    QByteArrayData data[7];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_purchaseSouvenirs_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_purchaseSouvenirs_t qt_meta_stringdata_purchaseSouvenirs = {
    {
QT_MOC_LITERAL(0, 0, 17), // "purchaseSouvenirs"
QT_MOC_LITERAL(1, 18, 39), // "on_comboBox_college_currentIn..."
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 5), // "index"
QT_MOC_LITERAL(4, 65, 40), // "on_comboBox_souvenir_currentI..."
QT_MOC_LITERAL(5, 106, 25), // "on_pushButton_add_clicked"
QT_MOC_LITERAL(6, 132, 29) // "on_pushButton_receipt_clicked"

    },
    "purchaseSouvenirs\0"
    "on_comboBox_college_currentIndexChanged\0"
    "\0index\0on_comboBox_souvenir_currentIndexChanged\0"
    "on_pushButton_add_clicked\0"
    "on_pushButton_receipt_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_purchaseSouvenirs[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    0,   40,    2, 0x08 /* Private */,
       6,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void purchaseSouvenirs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        purchaseSouvenirs *_t = static_cast<purchaseSouvenirs *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_comboBox_college_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_comboBox_souvenir_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_add_clicked(); break;
        case 3: _t->on_pushButton_receipt_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject purchaseSouvenirs::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_purchaseSouvenirs.data,
      qt_meta_data_purchaseSouvenirs,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *purchaseSouvenirs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *purchaseSouvenirs::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_purchaseSouvenirs.stringdata0))
        return static_cast<void*>(const_cast< purchaseSouvenirs*>(this));
    return QDialog::qt_metacast(_clname);
}

int purchaseSouvenirs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
