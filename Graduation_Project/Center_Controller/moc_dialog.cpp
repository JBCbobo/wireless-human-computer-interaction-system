/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      25,    7,    7,    7, 0x05,
      39,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,    7,    7,    7, 0x0a,
      84,    7,    7,    7, 0x0a,
     115,    7,    7,    7, 0x0a,
     142,    7,    7,    7, 0x0a,
     170,    7,    7,    7, 0x0a,
     193,    7,    7,    7, 0x0a,
     207,    7,    7,    7, 0x0a,
     236,  230,    7,    7, 0x0a,
     261,    7,    7,    7, 0x0a,
     275,    7,    7,    7, 0x08,
     302,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0\0Rx_flag(QString)\0Motion_stop()\0"
    "Keyvalue(QString)\0on_pushButton_f2_clicked()\0"
    "on_pushButton_cancel_clicked()\0"
    "on_pushButton_no_clicked()\0"
    "on_pushButton_yes_clicked()\0"
    "Disp_Rx_value(QString)\0Getkeyvalue()\0"
    "Update_number(QString)\0event\0"
    "timerEvent(QTimerEvent*)\0timerUpdate()\0"
    "on_pushButton_11_clicked()\0"
    "on_pushButton_10_clicked()\0"
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dialog *_t = static_cast<Dialog *>(_o);
        switch (_id) {
        case 0: _t->Rx_flag((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->Motion_stop(); break;
        case 2: _t->Keyvalue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_f2_clicked(); break;
        case 4: _t->on_pushButton_cancel_clicked(); break;
        case 5: _t->on_pushButton_no_clicked(); break;
        case 6: _t->on_pushButton_yes_clicked(); break;
        case 7: _t->Disp_Rx_value((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->Getkeyvalue(); break;
        case 9: _t->Update_number((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 11: _t->timerUpdate(); break;
        case 12: _t->on_pushButton_11_clicked(); break;
        case 13: _t->on_pushButton_10_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog,
      qt_meta_data_Dialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Dialog::Rx_flag(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dialog::Motion_stop()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Dialog::Keyvalue(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
