/****************************************************************************
** Meta object code from reading C++ file 'inputpara.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inputpara.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputpara.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InputPara[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      34,   10,   10,   10, 0x08,
      58,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InputPara[] = {
    "InputPara\0\0Update_number(QString)\0"
    "on_pushButton_clicked()\0"
    "ReciveSendDialog(Keypad*)\0"
};

void InputPara::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InputPara *_t = static_cast<InputPara *>(_o);
        switch (_id) {
        case 0: _t->Update_number((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->ReciveSendDialog((*reinterpret_cast< Keypad*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InputPara::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InputPara::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InputPara,
      qt_meta_data_InputPara, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InputPara::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InputPara::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InputPara::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputPara))
        return static_cast<void*>(const_cast< InputPara*>(this));
    return QDialog::qt_metacast(_clname);
}

int InputPara::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
