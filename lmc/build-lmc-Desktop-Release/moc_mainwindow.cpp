/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lmcMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      53,   28,   14,   14, 0x05,
     110,   99,   14,   14, 0x05,
     146,  133,   14,   14, 0x05,
     173,   14,   14,   14, 0x05,
     189,   14,   14,   14, 0x05,
     203,   14,   14,   14, 0x05,
     224,  218,   14,   14, 0x05,
     241,  218,   14,   14, 0x05,
     260,   14,   14,   14, 0x05,
     272,   14,   14,   14, 0x05,
     288,   14,   14,   14, 0x05,
     322,  305,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     362,   28,   14,   14, 0x08,
     408,   14,   14,   14, 0x08,
     435,   14,   14,   14, 0x08,
     465,   14,   14,   14, 0x08,
     492,   14,   14,   14, 0x08,
     523,   14,   14,   14, 0x08,
     551,   14,   14,   14, 0x08,
     585,  578,   14,   14, 0x08,
     618,   14,   14,   14, 0x08,
     643,   14,   14,   14, 0x08,
     674,   14,   14,   14, 0x08,
     697,   14,   14,   14, 0x08,
     724,   14,   14,   14, 0x08,
     749,   14,   14,   14, 0x08,
     776,   14,   14,   14, 0x08,
     805,   14,   14,   14, 0x08,
     838,  831,   14,   14, 0x08,
     892,   14,   14,   14, 0x08,
     927,  914,   14,   14, 0x08,
     984,  974,   14,   14, 0x08,
    1043, 1037,   14,   14, 0x08,
    1107, 1088,   14,   14, 0x08,
    1172,   14,   14,   14, 0x08,
    1199,   14,   14,   14, 0x08,
    1229,   14,   14,   14, 0x08,
    1259,   14,   14,   14, 0x08,
    1294,   14,   14,   14, 0x08,
    1326,   14,   14,   14, 0x08,
    1353,   14,   14,   14, 0x08,
    1382,   14,   14,   14, 0x08,
    1409,   14,   14,   14, 0x08,
    1433,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_lmcMainWindow[] = {
    "lmcMainWindow\0\0appExiting()\0"
    "type,lpszUserId,pMessage\0"
    "messageSent(MessageType,QString*,XmlMessage*)\0"
    "lpszUserId\0chatStarting(QString*)\0"
    "lpszThreadId\0chatRoomStarting(QString*)\0"
    "showTransfers()\0showHistory()\0"
    "showSettings()\0pRect\0showHelp(QRect*)\0"
    "showUpdate(QRect*)\0showAbout()\0"
    "showBroadcast()\0showPublicChat()\0"
    "op,value1,value2\0"
    "groupUpdated(GroupOp,QVariant,QVariant)\0"
    "sendMessage(MessageType,QString*,XmlMessage*)\0"
    "trayShowAction_triggered()\0"
    "trayHistoryAction_triggered()\0"
    "trayFileAction_triggered()\0"
    "traySettingsAction_triggered()\0"
    "trayAboutAction_triggered()\0"
    "trayExitAction_triggered()\0action\0"
    "statusAction_triggered(QAction*)\0"
    "avatarAction_triggered()\0"
    "avatarBrowseAction_triggered()\0"
    "helpAction_triggered()\0"
    "homePageAction_triggered()\0"
    "updateAction_triggered()\0"
    "chatRoomAction_triggered()\0"
    "publicChatAction_triggered()\0"
    "refreshAction_triggered()\0reason\0"
    "trayIcon_activated(QSystemTrayIcon::ActivationReason)\0"
    "trayMessage_clicked()\0pItem,column\0"
    "tvUserList_itemActivated(QTreeWidgetItem*,int)\0"
    "pItem,pos\0"
    "tvUserList_itemContextMenu(QTreeWidgetItem*,QPoint&)\0"
    "pItem\0tvUserList_itemDragDropped(QTreeWidgetItem*)\0"
    "pCurrent,pPrevious\0"
    "tvUserList_currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "groupAddAction_triggered()\0"
    "groupRenameAction_triggered()\0"
    "groupDeleteAction_triggered()\0"
    "userConversationAction_triggered()\0"
    "userBroadcastAction_triggered()\0"
    "userFileAction_triggered()\0"
    "userFolderAction_triggered()\0"
    "userInfoAction_triggered()\0"
    "txtNote_returnPressed()\0txtNote_lostFocus()\0"
};

void lmcMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        lmcMainWindow *_t = static_cast<lmcMainWindow *>(_o);
        switch (_id) {
        case 0: _t->appExiting(); break;
        case 1: _t->messageSent((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< XmlMessage*(*)>(_a[3]))); break;
        case 2: _t->chatStarting((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 3: _t->chatRoomStarting((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 4: _t->showTransfers(); break;
        case 5: _t->showHistory(); break;
        case 6: _t->showSettings(); break;
        case 7: _t->showHelp((*reinterpret_cast< QRect*(*)>(_a[1]))); break;
        case 8: _t->showUpdate((*reinterpret_cast< QRect*(*)>(_a[1]))); break;
        case 9: _t->showAbout(); break;
        case 10: _t->showBroadcast(); break;
        case 11: _t->showPublicChat(); break;
        case 12: _t->groupUpdated((*reinterpret_cast< GroupOp(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 13: _t->sendMessage((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< XmlMessage*(*)>(_a[3]))); break;
        case 14: _t->trayShowAction_triggered(); break;
        case 15: _t->trayHistoryAction_triggered(); break;
        case 16: _t->trayFileAction_triggered(); break;
        case 17: _t->traySettingsAction_triggered(); break;
        case 18: _t->trayAboutAction_triggered(); break;
        case 19: _t->trayExitAction_triggered(); break;
        case 20: _t->statusAction_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 21: _t->avatarAction_triggered(); break;
        case 22: _t->avatarBrowseAction_triggered(); break;
        case 23: _t->helpAction_triggered(); break;
        case 24: _t->homePageAction_triggered(); break;
        case 25: _t->updateAction_triggered(); break;
        case 26: _t->chatRoomAction_triggered(); break;
        case 27: _t->publicChatAction_triggered(); break;
        case 28: _t->refreshAction_triggered(); break;
        case 29: _t->trayIcon_activated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 30: _t->trayMessage_clicked(); break;
        case 31: _t->tvUserList_itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->tvUserList_itemContextMenu((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 33: _t->tvUserList_itemDragDropped((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 34: _t->tvUserList_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 35: _t->groupAddAction_triggered(); break;
        case 36: _t->groupRenameAction_triggered(); break;
        case 37: _t->groupDeleteAction_triggered(); break;
        case 38: _t->userConversationAction_triggered(); break;
        case 39: _t->userBroadcastAction_triggered(); break;
        case 40: _t->userFileAction_triggered(); break;
        case 41: _t->userFolderAction_triggered(); break;
        case 42: _t->userInfoAction_triggered(); break;
        case 43: _t->txtNote_returnPressed(); break;
        case 44: _t->txtNote_lostFocus(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData lmcMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject lmcMainWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_lmcMainWindow,
      qt_meta_data_lmcMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lmcMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lmcMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lmcMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lmcMainWindow))
        return static_cast<void*>(const_cast< lmcMainWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int lmcMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    return _id;
}

// SIGNAL 0
void lmcMainWindow::appExiting()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void lmcMainWindow::messageSent(MessageType _t1, QString * _t2, XmlMessage * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void lmcMainWindow::chatStarting(QString * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void lmcMainWindow::chatRoomStarting(QString * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void lmcMainWindow::showTransfers()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void lmcMainWindow::showHistory()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void lmcMainWindow::showSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void lmcMainWindow::showHelp(QRect * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void lmcMainWindow::showUpdate(QRect * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void lmcMainWindow::showAbout()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void lmcMainWindow::showBroadcast()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void lmcMainWindow::showPublicChat()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void lmcMainWindow::groupUpdated(GroupOp _t1, QVariant _t2, QVariant _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
