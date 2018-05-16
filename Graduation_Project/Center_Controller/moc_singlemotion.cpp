/****************************************************************************
** Meta object code from reading C++ file 'singlemotion.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Src/singlemotion/singlemotion.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'singlemotion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_singlemotion[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      19,   13,   13,   13, 0x05,
      26,   13,   13,   13, 0x05,
      37,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   48,   13,   13, 0x08,
      78,   13,   13,   13, 0x08,
     107,   13,   13,   13, 0x08,
     134,   13,   13,   13, 0x08,
     167,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_singlemotion[] = {
    "singlemotion\0\0up()\0down()\0location()\0"
    "drilling()\0,\0clicked_pushButton(int,int)\0"
    "on_pushButton_down_clicked()\0"
    "on_pushButton_up_clicked()\0"
    "on_pushButton_location_clicked()\0"
    "on_pushButton_drilling_clicked()\0"
};

void singlemotion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        singlemotion *_t = static_cast<singlemotion *>(_o);
        switch (_id) {
        case 0: _t->up(); break;
        case 1: _t->down(); break;
        case 2: _t->location(); break;
        case 3: _t->drilling(); break;
        case 4: _t->clicked_pushButton((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_pushButton_down_clicked(); break;
        case 6: _t->on_pushButton_up_clicked(); break;
        case 7: _t->on_pushButton_location_clicked(); break;
        case 8: _t->on_pushButton_drilling_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData singlemotion::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject singlemotion::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_singlemotion,
      qt_meta_data_singlemotion, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &singlemotion::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *singlemotion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *singlemotion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_singlemotion))
        return static_cast<void*>(const_cast< singlemotion*>(this));
    return QWidget::qt_metacast(_clname);
}

int singlemotion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void singlemotion::up()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void singlemotion::down()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void singlemotion::location()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void singlemotion::drilling()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
