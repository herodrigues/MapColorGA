/****************************************************************************
** Meta object code from reading C++ file 'mainscene.h'
**
** Created: Mon Nov 25 18:33:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainscene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainScene[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   11,   10,   10, 0x05,
      43,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,   72,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainScene[] = {
    "MainScene\0\0item\0itemInserted(EllipseItem*)\0"
    "itemSelected(QGraphicsItem*)\0mode\0"
    "setMode(Mode)\0"
};

void MainScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainScene *_t = static_cast<MainScene *>(_o);
        switch (_id) {
        case 0: _t->itemInserted((*reinterpret_cast< EllipseItem*(*)>(_a[1]))); break;
        case 1: _t->itemSelected((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 2: _t->setMode((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainScene::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_MainScene,
      qt_meta_data_MainScene, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainScene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainScene))
        return static_cast<void*>(const_cast< MainScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int MainScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MainScene::itemInserted(EllipseItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainScene::itemSelected(QGraphicsItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
