/****************************************************************************
** Meta object code from reading C++ file 'messagelog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/messagelog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagelog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lmcMessageLog[] = {

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
      40,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      90,   86,   14,   14, 0x08,
     117,  112,   14,   14, 0x08,
     171,  148,   14,   14, 0x08,
     216,  212,   14,   14, 0x08,
     240,   14,   14,   14, 0x08,
     263,   14,   14,   14, 0x08,
     290,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_lmcMessageLog[] = {
    "lmcMessageLog\0\0type,lpszUserId,pMessage\0"
    "messageSent(MessageType,QString*,XmlMessage*)\0"
    "url\0log_linkClicked(QUrl)\0size\0"
    "log_contentsSizeChanged(QSize)\0"
    "link,title,textContent\0"
    "log_linkHovered(QString,QString,QString)\0"
    "pos\0showContextMenu(QPoint)\0"
    "copyAction_triggered()\0"
    "copyLinkAction_triggered()\0"
    "selectAllAction_triggered()\0"
};

void lmcMessageLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        lmcMessageLog *_t = static_cast<lmcMessageLog *>(_o);
        switch (_id) {
        case 0: _t->messageSent((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< XmlMessage*(*)>(_a[3]))); break;
        case 1: _t->log_linkClicked((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 2: _t->log_contentsSizeChanged((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 3: _t->log_linkHovered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->copyAction_triggered(); break;
        case 6: _t->copyLinkAction_triggered(); break;
        case 7: _t->selectAllAction_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData lmcMessageLog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject lmcMessageLog::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_lmcMessageLog,
      qt_meta_data_lmcMessageLog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lmcMessageLog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lmcMessageLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lmcMessageLog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lmcMessageLog))
        return static_cast<void*>(const_cast< lmcMessageLog*>(this));
    return QWebView::qt_metacast(_clname);
}

int lmcMessageLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
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
void lmcMessageLog::messageSent(MessageType _t1, QString * _t2, XmlMessage * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
