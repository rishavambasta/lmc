/****************************************************************************
** Meta object code from reading C++ file 'settingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/settingsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lmcSettingsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      36,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   57,   18,   18, 0x08,
     104,   18,   18,   18, 0x08,
     128,  120,   18,   18, 0x08,
     157,  120,   18,   18, 0x08,
     185,  120,   18,   18, 0x08,
     217,   18,   18,   18, 0x08,
     242,   18,   18,   18, 0x08,
     264,   18,   18,   18, 0x08,
     290,   18,   18,   18, 0x08,
     320,  120,   18,   18, 0x08,
     343,  120,   18,   18, 0x08,
     373,   18,   18,   18, 0x08,
     396,   18,   18,   18, 0x08,
     414,   18,   18,   18, 0x08,
     433,   18,   18,   18, 0x08,
     458,  452,   18,   18, 0x08,
     492,  452,   18,   18, 0x08,
     533,  528,   18,   18, 0x08,
     566,   18,   18,   18, 0x08,
     592,   18,   18,   18, 0x08,
     621,  452,   18,   18, 0x08,
     653,   18,   18,   18, 0x08,
     676,   18,   18,   18, 0x08,
     699,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_lmcSettingsDialog[] = {
    "lmcSettingsDialog\0\0historyCleared()\0"
    "fileHistoryCleared()\0currentRow\0"
    "lvCategories_currentRowChanged(int)\0"
    "btnOk_clicked()\0checked\0"
    "chkMessageTime_toggled(bool)\0"
    "chkAllowLinks_toggled(bool)\0"
    "rdbSysHistoryPath_toggled(bool)\0"
    "btnHistoryPath_clicked()\0btnFilePath_clicked()\0"
    "btnClearHistory_clicked()\0"
    "btnClearFileHistory_clicked()\0"
    "chkSound_toggled(bool)\0"
    "chkAutoShowFile_toggled(bool)\0"
    "btnViewFiles_clicked()\0btnFont_clicked()\0"
    "btnColor_clicked()\0btnReset_clicked()\0"
    "index\0cboTheme_currentIndexChanged(int)\0"
    "lvBroadcasts_currentRowChanged(int)\0"
    "text\0txtBroadcast_textEdited(QString)\0"
    "btnAddBroadcast_clicked()\0"
    "btnDeleteBroadcast_clicked()\0"
    "lvSounds_currentRowChanged(int)\0"
    "btnPlaySound_clicked()\0btnSoundPath_clicked()\0"
    "btnResetSounds_clicked()\0"
};

void lmcSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        lmcSettingsDialog *_t = static_cast<lmcSettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->historyCleared(); break;
        case 1: _t->fileHistoryCleared(); break;
        case 2: _t->lvCategories_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->btnOk_clicked(); break;
        case 4: _t->chkMessageTime_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->chkAllowLinks_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->rdbSysHistoryPath_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->btnHistoryPath_clicked(); break;
        case 8: _t->btnFilePath_clicked(); break;
        case 9: _t->btnClearHistory_clicked(); break;
        case 10: _t->btnClearFileHistory_clicked(); break;
        case 11: _t->chkSound_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->chkAutoShowFile_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->btnViewFiles_clicked(); break;
        case 14: _t->btnFont_clicked(); break;
        case 15: _t->btnColor_clicked(); break;
        case 16: _t->btnReset_clicked(); break;
        case 17: _t->cboTheme_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->lvBroadcasts_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->txtBroadcast_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->btnAddBroadcast_clicked(); break;
        case 21: _t->btnDeleteBroadcast_clicked(); break;
        case 22: _t->lvSounds_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->btnPlaySound_clicked(); break;
        case 24: _t->btnSoundPath_clicked(); break;
        case 25: _t->btnResetSounds_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData lmcSettingsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject lmcSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_lmcSettingsDialog,
      qt_meta_data_lmcSettingsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lmcSettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lmcSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lmcSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lmcSettingsDialog))
        return static_cast<void*>(const_cast< lmcSettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int lmcSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void lmcSettingsDialog::historyCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void lmcSettingsDialog::fileHistoryCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
