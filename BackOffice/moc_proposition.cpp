/****************************************************************************
** Meta object code from reading C++ file 'proposition.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/proposition.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'proposition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Proposition_t {
    QByteArrayData data[13];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Proposition_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Proposition_t qt_meta_stringdata_Proposition = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Proposition"
QT_MOC_LITERAL(1, 12, 22), // "on_Utilisateur_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 17), // "changeProposition"
QT_MOC_LITERAL(4, 54, 11), // "TextEditID*"
QT_MOC_LITERAL(5, 66, 3), // "txt"
QT_MOC_LITERAL(6, 70, 2), // "id"
QT_MOC_LITERAL(7, 73, 22), // "changePropositionState"
QT_MOC_LITERAL(8, 96, 13), // "PushButtonID*"
QT_MOC_LITERAL(9, 110, 3), // "but"
QT_MOC_LITERAL(10, 114, 17), // "deleteProposition"
QT_MOC_LITERAL(11, 132, 14), // "addProposition"
QT_MOC_LITERAL(12, 147, 7) // "toTheme"

    },
    "Proposition\0on_Utilisateur_clicked\0\0"
    "changeProposition\0TextEditID*\0txt\0id\0"
    "changePropositionState\0PushButtonID*\0"
    "but\0deleteProposition\0addProposition\0"
    "toTheme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Proposition[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    2,   45,    2, 0x08 /* Private */,
       7,    2,   50,    2, 0x08 /* Private */,
      10,    2,   55,    2, 0x08 /* Private */,
      11,    0,   60,    2, 0x08 /* Private */,
      12,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    2,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Proposition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Proposition *_t = static_cast<Proposition *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Utilisateur_clicked(); break;
        case 1: _t->changeProposition((*reinterpret_cast< TextEditID*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->changePropositionState((*reinterpret_cast< PushButtonID*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->deleteProposition((*reinterpret_cast< PushButtonID*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->addProposition(); break;
        case 5: _t->toTheme(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TextEditID* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PushButtonID* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PushButtonID* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Proposition::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Proposition.data,
      qt_meta_data_Proposition,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Proposition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Proposition::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Proposition.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Proposition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
