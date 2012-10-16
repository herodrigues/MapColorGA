/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat Jun 16 18:57:14 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      27,   11,   11,   11, 0x08,
      40,   11,   11,   11, 0x08,
      55,   11,   11,   11, 0x08,
      74,   68,   11,   11, 0x08,
     101,   11,   11,   11, 0x08,
     112,  109,   11,   11, 0x08,
     140,   11,   11,   11, 0x08,
     157,   11,   11,   11, 0x08,
     176,   11,   11,   11, 0x08,
     189,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0bringToFront()\0sendToBack()\0"
    "itemInserted()\0deleteItem()\0scale\0"
    "sceneScaleChanged(QString)\0about()\0"
    "id\0mainButtonGroupClicked(int)\0"
    "clearLineEdits()\0generateSolution()\0"
    "clearScene()\0drawBrMap()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: bringToFront(); break;
        case 1: sendToBack(); break;
        case 2: itemInserted(); break;
        case 3: deleteItem(); break;
        case 4: sceneScaleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: about(); break;
        case 6: mainButtonGroupClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: clearLineEdits(); break;
        case 8: generateSolution(); break;
        case 9: clearScene(); break;
        case 10: drawBrMap(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
