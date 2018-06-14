/****************************************************************************
** Meta object code from reading C++ file 'utilisateur.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/utilisateur.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'utilisateur.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Utilisateur_t {
    QByteArrayData data[12];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Utilisateur_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Utilisateur_t qt_meta_stringdata_Utilisateur = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Utilisateur"
QT_MOC_LITERAL(1, 12, 19), // "on_Question_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "onItemClick"
QT_MOC_LITERAL(4, 45, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 62, 10), // "changeName"
QT_MOC_LITERAL(6, 73, 10), // "changePass"
QT_MOC_LITERAL(7, 84, 14), // "removeOneScore"
QT_MOC_LITERAL(8, 99, 13), // "PushButtonID*"
QT_MOC_LITERAL(9, 113, 13), // "desactiveUser"
QT_MOC_LITERAL(10, 127, 10), // "activeUser"
QT_MOC_LITERAL(11, 138, 10) // "deleteUser"

    },
    "Utilisateur\0on_Question_clicked\0\0"
    "onItemClick\0QListWidgetItem*\0changeName\0"
    "changePass\0removeOneScore\0PushButtonID*\0"
    "desactiveUser\0activeUser\0deleteUser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Utilisateur[] = {

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
       3,    1,   55,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    2,   60,    2, 0x08 /* Private */,
       9,    0,   65,    2, 0x08 /* Private */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Utilisateur::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Utilisateur *_t = static_cast<Utilisateur *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Question_clicked(); break;
        case 1: _t->onItemClick((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->changeName(); break;
        case 3: _t->changePass(); break;
        case 4: _t->removeOneScore((*reinterpret_cast< PushButtonID*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->desactiveUser(); break;
        case 6: _t->activeUser(); break;
        case 7: _t->deleteUser(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PushButtonID* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Utilisateur::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Utilisateur.data,
      qt_meta_data_Utilisateur,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Utilisateur::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utilisateur::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Utilisateur.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Utilisateur::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
