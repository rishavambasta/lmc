/****************************************************************************
** Meta object code from reading C++ file 'chatwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/chatwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lmcChatWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   15,   14,   14, 0x05,
      86,   14,   14,   14, 0x05,
     100,   14,   14,   14, 0x05,
     127,  116,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     144,   14,   14,   14, 0x08,
     162,   14,   14,   14, 0x08,
     185,   14,   14,   14, 0x08,
     203,   14,   14,   14, 0x08,
     223,   14,   14,   14, 0x08,
     241,   14,   14,   14, 0x08,
     262,   14,   14,   14, 0x08,
     285,   14,   14,   14, 0x08,
     310,   15,   14,   14, 0x08,
     360,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_lmcChatWindow[] = {
    "lmcChatWindow\0\0type,lpszUserId,pMessage\0"
    "messageSent(MessageType,QString*,XmlMessage*)\0"
    "showHistory()\0showTransfers()\0lpszUserId\0"
    "closed(QString*)\0btnFont_clicked()\0"
    "btnFontColor_clicked()\0btnFile_clicked()\0"
    "btnFolder_clicked()\0btnSave_clicked()\0"
    "btnHistory_clicked()\0btnTransfers_clicked()\0"
    "smileyAction_triggered()\0"
    "log_sendMessage(MessageType,QString*,XmlMessage*)\0"
    "checkChatState()\0"
};

void lmcChatWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        lmcChatWindow *_t = static_cast<lmcChatWindow *>(_o);
        switch (_id) {
        case 0: _t->messageSent((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< XmlMessage*(*)>(_a[3]))); break;
        case 1: _t->showHistory(); break;
        case 2: _t->showTransfers(); break;
        case 3: _t->closed((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 4: _t->btnFont_clicked(); break;
        case 5: _t->btnFontColor_clicked(); break;
        case 6: _t->btnFile_clicked(); break;
        case 7: _t->btnFolder_clicked(); break;
        case 8: _t->btnSave_clicked(); break;
        case 9: _t->btnHistory_clicked(); break;
        case 10: _t->btnTransfers_clicked(); break;
        case 11: _t->smileyAction_triggered(); break;
        case 12: _t->log_sendMessage((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< XmlMessage*(*)>(_a[3]))); break;
        case 13: _t->checkChatState(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData lmcChatWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject lmcChatWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_lmcChatWindow,
      qt_meta_data_lmcChatWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lmcChatWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lmcChatWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lmcChatWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lmcChatWindow))
        return static_cast<void*>(const_cast< lmcChatWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int lmcChatWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void lmcChatWindow::messageSent(MessageType _t1, QString * _t2, XmlMessage * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lmcChatWindow::showHistory()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void lmcChatWindow::showTransfers()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void lmcChatWindow::closed(QString * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
