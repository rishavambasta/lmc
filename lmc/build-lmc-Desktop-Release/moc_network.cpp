/****************************************************************************
** Meta object code from reading C++ file 'network.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/network.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'network.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lmcNetwork[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      54,   37,   11,   11, 0x05,
     121,   98,   11,   11, 0x05,
     165,  154,   11,   11, 0x05,
     190,   37,   11,   11, 0x05,
     252,  232,   11,   11, 0x05,
     297,  288,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     326,   11,   11,   11, 0x08,
     342,   37,   11,   11, 0x08,
     389,   98,   11,   11, 0x08,
     426,  154,   11,   11, 0x08,
     455,   37,   11,   11, 0x08,
     500,  232,   11,   11, 0x08,
     539,  288,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_lmcNetwork[] = {
    "lmcNetwork\0\0connectionStateChanged()\0"
    "pHeader,lpszData\0"
    "broadcastReceived(DatagramHeader*,QString*)\0"
    "lpszUserId,lpszAddress\0"
    "newConnection(QString*,QString*)\0"
    "lpszUserId\0connectionLost(QString*)\0"
    "messageReceived(DatagramHeader*,QString*)\0"
    "lpszUserId,lpszData\0"
    "progressReceived(QString*,QString*)\0"
    "lpszData\0webMessageReceived(QString*)\0"
    "timer_timeout()\0"
    "udp_receiveBroadcast(DatagramHeader*,QString*)\0"
    "tcp_newConnection(QString*,QString*)\0"
    "tcp_connectionLost(QString*)\0"
    "tcp_receiveMessage(DatagramHeader*,QString*)\0"
    "tcp_receiveProgress(QString*,QString*)\0"
    "web_receiveMessage(QString*)\0"
};

void lmcNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        lmcNetwork *_t = static_cast<lmcNetwork *>(_o);
        switch (_id) {
        case 0: _t->connectionStateChanged(); break;
        case 1: _t->broadcastReceived((*reinterpret_cast< DatagramHeader*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 2: _t->newConnection((*reinterpret_cast< QString*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 3: _t->connectionLost((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 4: _t->messageReceived((*reinterpret_cast< DatagramHeader*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 5: _t->progressReceived((*reinterpret_cast< QString*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 6: _t->webMessageReceived((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 7: _t->timer_timeout(); break;
        case 8: _t->udp_receiveBroadcast((*reinterpret_cast< DatagramHeader*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 9: _t->tcp_newConnection((*reinterpret_cast< QString*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 10: _t->tcp_connectionLost((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 11: _t->tcp_receiveMessage((*reinterpret_cast< DatagramHeader*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 12: _t->tcp_receiveProgress((*reinterpret_cast< QString*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 13: _t->web_receiveMessage((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData lmcNetwork::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject lmcNetwork::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_lmcNetwork,
      qt_meta_data_lmcNetwork, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lmcNetwork::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lmcNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lmcNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lmcNetwork))
        return static_cast<void*>(const_cast< lmcNetwork*>(this));
    return QObject::qt_metacast(_clname);
}

int lmcNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void lmcNetwork::connectionStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void lmcNetwork::broadcastReceived(DatagramHeader * _t1, QString * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void lmcNetwork::newConnection(QString * _t1, QString * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void lmcNetwork::connectionLost(QString * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void lmcNetwork::messageReceived(DatagramHeader * _t1, QString * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void lmcNetwork::progressReceived(QString * _t1, QString * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void lmcNetwork::webMessageReceived(QString * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
