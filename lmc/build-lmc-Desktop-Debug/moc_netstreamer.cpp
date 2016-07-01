/****************************************************************************
** Meta object code from reading C++ file 'netstreamer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/netstreamer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'netstreamer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileSender[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      56,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     125,   11,   11,   11, 0x08,
     137,   11,   11,   11, 0x08,
     152,   11,   11,   11, 0x08,
     170,  164,   11,   11, 0x08,
     191,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FileSender[] = {
    "FileSender\0\0mode,fileOp,type,lpszId,lpszUserId,lpszData\0"
    "progressUpdated(FileMode,FileOp,FileType,QString*,QString*,QString*)\0"
    "connected()\0disconnected()\0readyRead()\0"
    "bytes\0bytesWritten(qint64)\0timer_timeout()\0"
};

void FileSender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileSender *_t = static_cast<FileSender *>(_o);
        switch (_id) {
        case 0: _t->progressUpdated((*reinterpret_cast< FileMode(*)>(_a[1])),(*reinterpret_cast< FileOp(*)>(_a[2])),(*reinterpret_cast< FileType(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< QString*(*)>(_a[5])),(*reinterpret_cast< QString*(*)>(_a[6]))); break;
        case 1: _t->connected(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->readyRead(); break;
        case 4: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->timer_timeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileSender::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileSender::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileSender,
      qt_meta_data_FileSender, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileSender::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileSender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileSender::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileSender))
        return static_cast<void*>(const_cast< FileSender*>(this));
    return QObject::qt_metacast(_clname);
}

int FileSender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void FileSender::progressUpdated(FileMode _t1, FileOp _t2, FileType _t3, QString * _t4, QString * _t5, QString * _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_FileReceiver[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      58,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     127,   13,   13,   13, 0x08,
     142,   13,   13,   13, 0x08,
     154,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FileReceiver[] = {
    "FileReceiver\0\0mode,fileOp,type,lpszId,lpszUserId,lpszData\0"
    "progressUpdated(FileMode,FileOp,FileType,QString*,QString*,QString*)\0"
    "disconnected()\0readyRead()\0timer_timeout()\0"
};

void FileReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileReceiver *_t = static_cast<FileReceiver *>(_o);
        switch (_id) {
        case 0: _t->progressUpdated((*reinterpret_cast< FileMode(*)>(_a[1])),(*reinterpret_cast< FileOp(*)>(_a[2])),(*reinterpret_cast< FileType(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< QString*(*)>(_a[5])),(*reinterpret_cast< QString*(*)>(_a[6]))); break;
        case 1: _t->disconnected(); break;
        case 2: _t->readyRead(); break;
        case 3: _t->timer_timeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileReceiver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileReceiver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileReceiver,
      qt_meta_data_FileReceiver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileReceiver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileReceiver))
        return static_cast<void*>(const_cast< FileReceiver*>(this));
    return QObject::qt_metacast(_clname);
}

int FileReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FileReceiver::progressUpdated(FileMode _t1, FileOp _t2, FileType _t3, QString * _t4, QString * _t5, QString * _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_MsgStream[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   11,   10,   10, 0x05,
      75,   47,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     122,   10,   10,   10, 0x08,
     134,   10,   10,   10, 0x08,
     149,   10,   10,   10, 0x08,
     167,  161,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MsgStream[] = {
    "MsgStream\0\0lpszUserId\0connectionLost(QString*)\0"
    "lpszUserId,lpszAddress,data\0"
    "messageReceived(QString*,QString*,QByteArray&)\0"
    "connected()\0disconnected()\0readyRead()\0"
    "bytes\0bytesWritten(qint64)\0"
};

void MsgStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MsgStream *_t = static_cast<MsgStream *>(_o);
        switch (_id) {
        case 0: _t->connectionLost((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 1: _t->messageReceived((*reinterpret_cast< QString*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 2: _t->connected(); break;
        case 3: _t->disconnected(); break;
        case 4: _t->readyRead(); break;
        case 5: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MsgStream::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MsgStream::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MsgStream,
      qt_meta_data_MsgStream, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MsgStream::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MsgStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MsgStream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MsgStream))
        return static_cast<void*>(const_cast< MsgStream*>(this));
    return QObject::qt_metacast(_clname);
}

int MsgStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MsgStream::connectionLost(QString * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MsgStream::messageReceived(QString * _t1, QString * _t2, QByteArray & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
