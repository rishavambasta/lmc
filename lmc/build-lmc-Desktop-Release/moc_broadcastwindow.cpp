/****************************************************************************
** Meta object code from reading C++ file 'broadcastwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/broadcastwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'broadcastwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lmcBroadcastWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      45,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      91,   19,   19,   19, 0x08,
     120,  113,   19,   19, 0x08,
     151,   19,   19,   19, 0x08,
     176,   19,   19,   19, 0x08,
     199,   19,   19,   19, 0x08,
     235,  223,   19,   19, 0x08,
     280,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_lmcBroadcastWindow[] = {
    "lmcBroadcastWindow\0\0type,lpszUserId,pMessage\0"
    "messageSent(MessageType,QString*,XmlMessage*)\0"
    "btnFontSize_clicked()\0action\0"
    "fontAction_triggered(QAction*)\0"
    "smileyAction_triggered()\0"
    "btnSelectAll_clicked()\0btnSelectNone_clicked()\0"
    "item,column\0tvUserList_itemChanged(QTreeWidgetItem*,int)\0"
    "btnSend_clicked()\0"
};

void lmcBroadcastWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        lmcBroadcastWindow *_t = static_cast<lmcBroadcastWindow *>(_o);
        switch (_id) {
        case 0: _t->messageSent((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< XmlMessage*(*)>(_a[3]))); break;
        case 1: _t->btnFontSize_clicked(); break;
        case 2: _t->fontAction_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->smileyAction_triggered(); break;
        case 4: _t->btnSelectAll_clicked(); break;
        case 5: _t->btnSelectNone_clicked(); break;
        case 6: _t->tvUserList_itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->btnSend_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData lmcBroadcastWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject lmcBroadcastWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_lmcBroadcastWindow,
      qt_meta_data_lmcBroadcastWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lmcBroadcastWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lmcBroadcastWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lmcBroadcastWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lmcBroadcastWindow))
        return static_cast<void*>(const_cast< lmcBroadcastWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int lmcBroadcastWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void lmcBroadcastWindow::messageSent(MessageType _t1, QString * _t2, XmlMessage * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
