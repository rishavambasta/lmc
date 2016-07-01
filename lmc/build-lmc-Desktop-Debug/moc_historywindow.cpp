/****************************************************************************
** Meta object code from reading C++ file 'historywindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/historywindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'historywindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lmcHistoryWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   18,   17,   17, 0x08,
      99,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_lmcHistoryWindow[] = {
    "lmcHistoryWindow\0\0current,previous\0"
    "tvMsgList_currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "btnClearHistory_clicked()\0"
};

void lmcHistoryWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        lmcHistoryWindow *_t = static_cast<lmcHistoryWindow *>(_o);
        switch (_id) {
        case 0: _t->tvMsgList_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->btnClearHistory_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData lmcHistoryWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject lmcHistoryWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_lmcHistoryWindow,
      qt_meta_data_lmcHistoryWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lmcHistoryWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lmcHistoryWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lmcHistoryWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lmcHistoryWindow))
        return static_cast<void*>(const_cast< lmcHistoryWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int lmcHistoryWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
