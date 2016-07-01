/****************************************************************************
** Meta object code from reading C++ file 'updatewindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/updatewindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lmcUpdateWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      88,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_lmcUpdateWindow[] = {
    "lmcUpdateWindow\0\0type,lpszUserId,pMessage\0"
    "messageSent(MessageType,QString*,XmlMessage*)\0"
    "btnRecheck_clicked()\0"
};

void lmcUpdateWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        lmcUpdateWindow *_t = static_cast<lmcUpdateWindow *>(_o);
        switch (_id) {
        case 0: _t->messageSent((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< XmlMessage*(*)>(_a[3]))); break;
        case 1: _t->btnRecheck_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData lmcUpdateWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject lmcUpdateWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_lmcUpdateWindow,
      qt_meta_data_lmcUpdateWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lmcUpdateWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lmcUpdateWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lmcUpdateWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lmcUpdateWindow))
        return static_cast<void*>(const_cast< lmcUpdateWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int lmcUpdateWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void lmcUpdateWindow::messageSent(MessageType _t1, QString * _t2, XmlMessage * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
