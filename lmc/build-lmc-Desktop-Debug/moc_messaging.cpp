/****************************************************************************
** Meta object code from reading C++ file 'messaging.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/messaging.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messaging.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lmcMessaging[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      39,   14,   13,   13, 0x05,
      89,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     131,  114,   13,   13, 0x08,
     174,  114,   13,   13, 0x08,
     224,  215,   13,   13, 0x08,
     275,  252,   13,   13, 0x08,
     319,  308,   13,   13, 0x08,
     364,  344,   13,   13, 0x08,
     399,   13,   13,   13, 0x08,
     432,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_lmcMessaging[] = {
    "lmcMessaging\0\0type,lpszUserId,pMessage\0"
    "messageReceived(MessageType,QString*,XmlMessage*)\0"
    "connectionStateChanged()\0pHeader,lpszData\0"
    "receiveBroadcast(DatagramHeader*,QString*)\0"
    "receiveMessage(DatagramHeader*,QString*)\0"
    "lpszData\0receiveWebMessage(QString*)\0"
    "lpszUserId,lpszAddress\0"
    "newConnection(QString*,QString*)\0"
    "lpszUserId\0connectionLost(QString*)\0"
    "lpszUserId,lpszData\0"
    "receiveProgress(QString*,QString*)\0"
    "network_connectionStateChanged()\0"
    "timer_timeout()\0"
};

void lmcMessaging::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        lmcMessaging *_t = static_cast<lmcMessaging *>(_o);
        switch (_id) {
        case 0: _t->messageReceived((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< XmlMessage*(*)>(_a[3]))); break;
        case 1: _t->connectionStateChanged(); break;
        case 2: _t->receiveBroadcast((*reinterpret_cast< DatagramHeader*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 3: _t->receiveMessage((*reinterpret_cast< DatagramHeader*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 4: _t->receiveWebMessage((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 5: _t->newConnection((*reinterpret_cast< QString*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 6: _t->connectionLost((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 7: _t->receiveProgress((*reinterpret_cast< QString*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 8: _t->network_connectionStateChanged(); break;
        case 9: _t->timer_timeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData lmcMessaging::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject lmcMessaging::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_lmcMessaging,
      qt_meta_data_lmcMessaging, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lmcMessaging::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lmcMessaging::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lmcMessaging::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lmcMessaging))
        return static_cast<void*>(const_cast< lmcMessaging*>(this));
    return QObject::qt_metacast(_clname);
}

int lmcMessaging::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void lmcMessaging::messageReceived(MessageType _t1, QString * _t2, XmlMessage * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lmcMessaging::connectionStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
