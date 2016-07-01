/****************************************************************************
** Meta object code from reading C++ file 'udpnetwork.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/udpnetwork.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udpnetwork.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lmcUdpNetwork[] = {

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
      32,   15,   14,   14, 0x05,
      76,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     101,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_lmcUdpNetwork[] = {
    "lmcUdpNetwork\0\0pHeader,lpszData\0"
    "broadcastReceived(DatagramHeader*,QString*)\0"
    "connectionStateChanged()\0"
    "processPendingDatagrams()\0"
};

void lmcUdpNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        lmcUdpNetwork *_t = static_cast<lmcUdpNetwork *>(_o);
        switch (_id) {
        case 0: _t->broadcastReceived((*reinterpret_cast< DatagramHeader*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 1: _t->connectionStateChanged(); break;
        case 2: _t->processPendingDatagrams(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData lmcUdpNetwork::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject lmcUdpNetwork::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_lmcUdpNetwork,
      qt_meta_data_lmcUdpNetwork, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lmcUdpNetwork::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lmcUdpNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lmcUdpNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lmcUdpNetwork))
        return static_cast<void*>(const_cast< lmcUdpNetwork*>(this));
    return QObject::qt_metacast(_clname);
}

int lmcUdpNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void lmcUdpNetwork::broadcastReceived(DatagramHeader * _t1, QString * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lmcUdpNetwork::connectionStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
