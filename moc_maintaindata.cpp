/****************************************************************************
** Meta object code from reading C++ file 'maintaindata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maintaindata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintaindata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MaintainData_t {
    QByteArrayData data[13];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaintainData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaintainData_t qt_meta_stringdata_MaintainData = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MaintainData"
QT_MOC_LITERAL(1, 13, 22), // "on_data_change_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 23), // "on_data_refresh_clicked"
QT_MOC_LITERAL(4, 61, 22), // "on_data_delete_clicked"
QT_MOC_LITERAL(5, 84, 19), // "on_data_add_clicked"
QT_MOC_LITERAL(6, 104, 25), // "on_data_deleteAll_clicked"
QT_MOC_LITERAL(7, 130, 15), // "onHeaderClicked"
QT_MOC_LITERAL(8, 146, 4), // "load"
QT_MOC_LITERAL(9, 151, 14), // "QList<Product>"
QT_MOC_LITERAL(10, 166, 4), // "list"
QT_MOC_LITERAL(11, 171, 27), // "on_dateEdit_userDateChanged"
QT_MOC_LITERAL(12, 199, 4) // "date"

    },
    "MaintainData\0on_data_change_clicked\0"
    "\0on_data_refresh_clicked\0"
    "on_data_delete_clicked\0on_data_add_clicked\0"
    "on_data_deleteAll_clicked\0onHeaderClicked\0"
    "load\0QList<Product>\0list\0"
    "on_dateEdit_userDateChanged\0date"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaintainData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
      11,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QDate,   12,

       0        // eod
};

void MaintainData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MaintainData *_t = static_cast<MaintainData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_data_change_clicked(); break;
        case 1: _t->on_data_refresh_clicked(); break;
        case 2: _t->on_data_delete_clicked(); break;
        case 3: _t->on_data_add_clicked(); break;
        case 4: _t->on_data_deleteAll_clicked(); break;
        case 5: _t->onHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->load((*reinterpret_cast< QList<Product>(*)>(_a[1]))); break;
        case 7: _t->on_dateEdit_userDateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MaintainData::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MaintainData.data,
      qt_meta_data_MaintainData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MaintainData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaintainData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MaintainData.stringdata0))
        return static_cast<void*>(const_cast< MaintainData*>(this));
    return QWidget::qt_metacast(_clname);
}

int MaintainData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
