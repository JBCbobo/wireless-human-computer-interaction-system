/****************************************************************************
** Meta object code from reading C++ file 'ringmold.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Src/ringmold/ringmold.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ringmold.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ringmold[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      22,    9,    9,    9, 0x05,
      33,    9,    9,    9, 0x05,
      42,    9,    9,    9, 0x05,
      52,    9,    9,    9, 0x05,
      59,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,    9,    9,    9, 0x08,
      92,    9,    9,    9, 0x08,
     126,    9,    9,    9, 0x08,
     157,    9,    9,    9, 0x08,
     189,    9,    9,    9, 0x08,
     220,    9,    9,    9, 0x08,
     249,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ringmold[] = {
    "ringmold\0\0turnright()\0turnleft()\0"
    "reduce()\0increas()\0fine()\0coarse()\0"
    "clicked_pushButton(int)\0"
    "on_pushButton_turnright_clicked()\0"
    "on_pushButton_coarse_clicked()\0"
    "on_pushButton_increas_clicked()\0"
    "on_pushButton_reduce_clicked()\0"
    "on_pushButton_fine_clicked()\0"
    "on_pushButton_turnleft_clicked()\0"
};

void ringmold::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ringmold *_t = static_cast<ringmold *>(_o);
        switch (_id) {
        case 0: _t->turnright(); break;
        case 1: _t->turnleft(); break;
        case 2: _t->reduce(); break;
        case 3: _t->increas(); break;
        case 4: _t->fine(); break;
        case 5: _t->coarse(); break;
        case 6: _t->clicked_pushButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_turnright_clicked(); break;
        case 8: _t->on_pushButton_coarse_clicked(); break;
        case 9: _t->on_pushButton_increas_clicked(); break;
        case 10: _t->on_pushButton_reduce_clicked(); break;
        case 11: _t->on_pushButton_fine_clicked(); break;
        case 12: _t->on_pushButton_turnleft_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ringmold::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ringmold::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ringmold,
      qt_meta_data_ringmold, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ringmold::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ringmold::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ringmold::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ringmold))
        return static_cast<void*>(const_cast< ringmold*>(this));
    return QWidget::qt_metacast(_clname);
}

int ringmold::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ringmold::turnright()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ringmold::turnleft()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ringmold::reduce()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ringmold::increas()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void ringmold::fine()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void ringmold::coarse()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
