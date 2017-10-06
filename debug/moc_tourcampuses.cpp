/****************************************************************************
** Meta object code from reading C++ file 'tourcampuses.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/tourcampuses.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tourcampuses.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tourCampuses_t {
    QByteArrayData data[8];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tourCampuses_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tourCampuses_t qt_meta_stringdata_tourCampuses = {
    {
QT_MOC_LITERAL(0, 0, 12), // "tourCampuses"
QT_MOC_LITERAL(1, 13, 23), // "on_back_to_main_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 35), // "on_pushButton_startColleges_c..."
QT_MOC_LITERAL(4, 74, 35), // "on_endingCollege_pushButton_c..."
QT_MOC_LITERAL(5, 110, 22), // "findDistanceTwoCollege"
QT_MOC_LITERAL(6, 133, 5), // "int[]"
QT_MOC_LITERAL(7, 139, 16) // "distanceColleges"

    },
    "tourCampuses\0on_back_to_main_clicked\0"
    "\0on_pushButton_startColleges_clicked\0"
    "on_endingCollege_pushButton_clicked\0"
    "findDistanceTwoCollege\0int[]\0"
    "distanceColleges"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tourCampuses[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void tourCampuses::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tourCampuses *_t = static_cast<tourCampuses *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_back_to_main_clicked(); break;
        case 1: _t->on_pushButton_startColleges_clicked(); break;
        case 2: _t->on_endingCollege_pushButton_clicked(); break;
        case 3: _t->findDistanceTwoCollege((*reinterpret_cast< int(*)[]>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject tourCampuses::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tourCampuses.data,
      qt_meta_data_tourCampuses,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tourCampuses::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tourCampuses::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tourCampuses.stringdata0))
        return static_cast<void*>(const_cast< tourCampuses*>(this));
    return QDialog::qt_metacast(_clname);
}

int tourCampuses::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
