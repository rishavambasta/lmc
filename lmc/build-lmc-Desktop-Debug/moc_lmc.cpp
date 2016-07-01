/****************************************************************************
** Meta object code from reading C++ file 'lmc.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/lmc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lmc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lmcCore[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   14,    9,    8, 0x0a,
      51,    8,    8,    8, 0x08,
      61,    8,    8,    8, 0x08,
      75,    8,    8,    8, 0x08,
     102,   91,    8,    8, 0x08,
     135,  122,    8,    8, 0x08,
     184,  159,    8,    8, 0x08,
     230,  159,    8,    8, 0x08,
     279,    8,    8,    8, 0x08,
     304,    8,    8,    8, 0x08,
     320,    8,    8,    8, 0x08,
     334,    8,    8,    8, 0x08,
     355,  349,    8,    8, 0x08,
     372,  349,    8,    8, 0x08,
     391,    8,    8,    8, 0x08,
     403,    8,    8,    8, 0x08,
     419,    8,    8,    8, 0x08,
     436,    8,    8,    8, 0x08,
     453,    8,    8,    8, 0x08,
     502,  474,    8,    8, 0x08,
     590,  567,    8,    8, 0x28,
     654,  639,    8,    8, 0x28,
     712,  695,    8,    8, 0x08,
     763,  751,    8,    8, 0x08,
     789,   91,    8,    8, 0x08,
     817,  122,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_lmcCore[] = {
    "lmcCore\0\0bool\0szMessage\0"
    "receiveAppMessage(QString)\0exitApp()\0"
    "aboutToExit()\0timer_timeout()\0lpszUserId\0"
    "startChat(QString*)\0lpszThreadId\0"
    "startChatRoom(QString*)\0"
    "type,lpszUserId,pMessage\0"
    "sendMessage(MessageType,QString*,XmlMessage*)\0"
    "receiveMessage(MessageType,QString*,XmlMessage*)\0"
    "connectionStateChanged()\0showTransfers()\0"
    "showHistory()\0showSettings()\0pRect\0"
    "showHelp(QRect*)\0showUpdate(QRect*)\0"
    "showAbout()\0showBroadcast()\0"
    "showPublicChat()\0historyCleared()\0"
    "fileHistoryCleared()\0type,szMessage,szTitle,icon\0"
    "showTrayMessage(TrayMessageType,QString,QString,TrayMessageIcon)\0"
    "type,szMessage,szTitle\0"
    "showTrayMessage(TrayMessageType,QString,QString)\0"
    "type,szMessage\0showTrayMessage(TrayMessageType,QString)\0"
    "op,value1,value2\0"
    "updateGroup(GroupOp,QVariant,QVariant)\0"
    "pExcludList\0addContacts(QStringList*)\0"
    "chatWindow_closed(QString*)\0"
    "chatRoomWindow_closed(QString*)\0"
};

void lmcCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        lmcCore *_t = static_cast<lmcCore *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->receiveAppMessage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->exitApp(); break;
        case 2: _t->aboutToExit(); break;
        case 3: _t->timer_timeout(); break;
        case 4: _t->startChat((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 5: _t->startChatRoom((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 6: _t->sendMessage((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< XmlMessage*(*)>(_a[3]))); break;
        case 7: _t->receiveMessage((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< XmlMessage*(*)>(_a[3]))); break;
        case 8: _t->connectionStateChanged(); break;
        case 9: _t->showTransfers(); break;
        case 10: _t->showHistory(); break;
        case 11: _t->showSettings(); break;
        case 12: _t->showHelp((*reinterpret_cast< QRect*(*)>(_a[1]))); break;
        case 13: _t->showUpdate((*reinterpret_cast< QRect*(*)>(_a[1]))); break;
        case 14: _t->showAbout(); break;
        case 15: _t->showBroadcast(); break;
        case 16: _t->showPublicChat(); break;
        case 17: _t->historyCleared(); break;
        case 18: _t->fileHistoryCleared(); break;
        case 19: _t->showTrayMessage((*reinterpret_cast< TrayMessageType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< TrayMessageIcon(*)>(_a[4]))); break;
        case 20: _t->showTrayMessage((*reinterpret_cast< TrayMessageType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 21: _t->showTrayMessage((*reinterpret_cast< TrayMessageType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 22: _t->updateGroup((*reinterpret_cast< GroupOp(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 23: _t->addContacts((*reinterpret_cast< QStringList*(*)>(_a[1]))); break;
        case 24: _t->chatWindow_closed((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 25: _t->chatRoomWindow_closed((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData lmcCore::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject lmcCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_lmcCore,
      qt_meta_data_lmcCore, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lmcCore::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lmcCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lmcCore::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lmcCore))
        return static_cast<void*>(const_cast< lmcCore*>(this));
    return QObject::qt_metacast(_clname);
}

int lmcCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
