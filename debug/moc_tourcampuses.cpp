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
    QByteArrayData data[14];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tourCampuses_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tourCampuses_t qt_meta_stringdata_tourCampuses = {
    {
QT_MOC_LITERAL(0, 0, 12), // "tourCampuses"
QT_MOC_LITERAL(1, 13, 8), // "populate"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 23), // "on_back_to_main_clicked"
QT_MOC_LITERAL(4, 47, 35), // "on_pushButton_startColleges_c..."
QT_MOC_LITERAL(5, 83, 35), // "on_endingCollege_pushButton_c..."
QT_MOC_LITERAL(6, 119, 22), // "findDistanceTwoCollege"
QT_MOC_LITERAL(7, 142, 5), // "int[]"
QT_MOC_LITERAL(8, 148, 16), // "distanceColleges"
QT_MOC_LITERAL(9, 165, 23), // "displaySelectedColleges"
QT_MOC_LITERAL(10, 189, 34), // "on_distanceMode_pushButton_cl..."
QT_MOC_LITERAL(11, 224, 30), // "on_tripMode_pushButton_clicked"
QT_MOC_LITERAL(12, 255, 29), // "on_addColleges_button_clicked"
QT_MOC_LITERAL(13, 285, 32) // "on_deleteColleges_button_clicked"

    },
    "tourCampuses\0populate\0\0on_back_to_main_clicked\0"
    "on_pushButton_startColleges_clicked\0"
    "on_endingCollege_pushButton_clicked\0"
    "findDistanceTwoCollege\0int[]\0"
    "distanceColleges\0displaySelectedColleges\0"
    "on_distanceMode_pushButton_clicked\0"
    "on_tripMode_pushButton_clicked\0"
    "on_addColleges_button_clicked\0"
    "on_deleteColleges_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tourCampuses[] = {

 // content:
       7,       // revision
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
       5,    0,   67,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,
      12,    0,   74,    2, 0x08 /* Private */,
      13,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tourCampuses::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tourCampuses *_t = static_cast<tourCampuses *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->populate(); break;
        case 1: _t->on_back_to_main_clicked(); break;
        case 2: _t->on_pushButton_startColleges_clicked(); break;
        case 3: _t->on_endingCollege_pushButton_clicked(); break;
        case 4: _t->findDistanceTwoCollege((*reinterpret_cast< int(*)[]>(_a[1]))); break;
        case 5: _t->displaySelectedColleges(); break;
        case 6: _t->on_distanceMode_pushButton_clicked(); break;
        case 7: _t->on_tripMode_pushButton_clicked(); break;
        case 8: _t->on_addColleges_button_clicked(); break;
        case 9: _t->on_deleteColleges_button_clicked(); break;
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
QT_END_MOC_NAMESPACE
