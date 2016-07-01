/****************************************************************************
** Meta object code from reading C++ file 'transferwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/transferwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transferwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lmcTransferWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      44,   19,   18,   18, 0x05,
     118,   90,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     194,  183,   18,   18, 0x08,
     238,  232,   18,   18, 0x08,
     276,   18,   18,   18, 0x08,
     296,   18,   18,   18, 0x08,
     316,   18,   18,   18, 0x08,
     335,   18,   18,   18, 0x08,
     375,  359,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_lmcTransferWindow[] = {
    "lmcTransferWindow\0\0type,lpszUserId,pMessage\0"
    "messageSent(MessageType,QString*,XmlMessage*)\0"
    "type,szMessage,szTitle,icon\0"
    "showTrayMessage(TrayMessageType,QString,QString,TrayMessageIcon)\0"
    "currentRow\0lvTransferList_currentRowChanged(int)\0"
    "index\0lvTransferList_activated(QModelIndex)\0"
    "btnCancel_clicked()\0btnRemove_clicked()\0"
    "btnClear_clicked()\0btnShowFolder_clicked()\0"
    "view,currentPos\0updateProgress(FileView*,qint64)\0"
};

void lmcTransferWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        lmcTransferWindow *_t = static_cast<lmcTransferWindow *>(_o);
        switch (_id) {
        case 0: _t->messageSent((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< XmlMessage*(*)>(_a[3]))); break;
        case 1: _t->showTrayMessage((*reinterpret_cast< TrayMessageType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< TrayMessageIcon(*)>(_a[4]))); break;
        case 2: _t->lvTransferList_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->lvTransferList_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->btnCancel_clicked(); break;
        case 5: _t->btnRemove_clicked(); break;
        case 6: _t->btnClear_clicked(); break;
        case 7: _t->btnShowFolder_clicked(); break;
        case 8: _t->updateProgress((*reinterpret_cast< FileView*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData lmcTransferWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject lmcTransferWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_lmcTransferWindow,
      qt_meta_data_lmcTransferWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lmcTransferWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lmcTransferWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lmcTransferWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lmcTransferWindow))
        return static_cast<void*>(const_cast< lmcTransferWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int lmcTransferWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void lmcTransferWindow::messageSent(MessageType _t1, QString * _t2, XmlMessage * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lmcTransferWindow::showTrayMessage(TrayMessageType _t1, QString _t2, QString _t3, TrayMessageIcon _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
