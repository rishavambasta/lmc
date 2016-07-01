/****************************************************************************
** Meta object code from reading C++ file 'chatroomwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/chatroomwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatroomwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lmcChatRoomWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      44,   19,   18,   18, 0x05,
     101,   90,   18,   18, 0x05,
     136,  124,   18,   18, 0x05,
     178,  165,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     195,   18,   18,   18, 0x08,
     230,   18,   18,   18, 0x08,
     257,   18,   18,   18, 0x08,
     284,   18,   18,   18, 0x08,
     302,   18,   18,   18, 0x08,
     325,   18,   18,   18, 0x08,
     343,   18,   18,   18, 0x08,
     368,   18,   18,   18, 0x08,
     397,   19,   18,   18, 0x08,
     460,  447,   18,   18, 0x08,
     517,  507,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_lmcChatRoomWindow[] = {
    "lmcChatRoomWindow\0\0type,lpszUserId,pMessage\0"
    "messageSent(MessageType,QString*,XmlMessage*)\0"
    "lpszUserId\0chatStarting(QString*)\0"
    "excludeList\0contactsAdding(QStringList*)\0"
    "lpszThreadId\0closed(QString*)\0"
    "userConversationAction_triggered()\0"
    "userFileAction_triggered()\0"
    "userInfoAction_triggered()\0btnFont_clicked()\0"
    "btnFontColor_clicked()\0btnSave_clicked()\0"
    "smileyAction_triggered()\0"
    "addContactAction_triggered()\0"
    "log_sendMessage(MessageType,QString*,XmlMessage*)\0"
    "pItem,column\0"
    "tvUserList_itemActivated(QTreeWidgetItem*,int)\0"
    "pItem,pos\0"
    "tvUserList_itemContextMenu(QTreeWidgetItem*,QPoint&)\0"
};

void lmcChatRoomWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        lmcChatRoomWindow *_t = static_cast<lmcChatRoomWindow *>(_o);
        switch (_id) {
        case 0: _t->messageSent((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< XmlMessage*(*)>(_a[3]))); break;
        case 1: _t->chatStarting((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 2: _t->contactsAdding((*reinterpret_cast< QStringList*(*)>(_a[1]))); break;
        case 3: _t->closed((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 4: _t->userConversationAction_triggered(); break;
        case 5: _t->userFileAction_triggered(); break;
        case 6: _t->userInfoAction_triggered(); break;
        case 7: _t->btnFont_clicked(); break;
        case 8: _t->btnFontColor_clicked(); break;
        case 9: _t->btnSave_clicked(); break;
        case 10: _t->smileyAction_triggered(); break;
        case 11: _t->addContactAction_triggered(); break;
        case 12: _t->log_sendMessage((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< XmlMessage*(*)>(_a[3]))); break;
        case 13: _t->tvUserList_itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->tvUserList_itemContextMenu((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData lmcChatRoomWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject lmcChatRoomWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_lmcChatRoomWindow,
      qt_meta_data_lmcChatRoomWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lmcChatRoomWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lmcChatRoomWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lmcChatRoomWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lmcChatRoomWindow))
        return static_cast<void*>(const_cast< lmcChatRoomWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int lmcChatRoomWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void lmcChatRoomWindow::messageSent(MessageType _t1, QString * _t2, XmlMessage * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lmcChatRoomWindow::chatStarting(QString * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void lmcChatRoomWindow::contactsAdding(QStringList * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void lmcChatRoomWindow::closed(QString * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
