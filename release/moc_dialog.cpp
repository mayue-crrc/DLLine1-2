/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Mon Mar 14 13:14:56 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,    8,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,    7,    7,    7, 0x09,
      56,    7,    7,    7, 0x09,
      71,    7,    7,    7, 0x09,
      86,    7,    7,    7, 0x09,
      98,    7,    7,    7, 0x09,
     111,    7,    7,    7, 0x09,
     133,    7,    7,    7, 0x09,
     174,  155,    7,    7, 0x09,
     209,    7,    7,    7, 0x09,
     220,    7,    7,    7, 0x09,
     247,  240,  232,    7, 0x09,
     265,    7,    7,    7, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0\0data,len\0setDataSignal(uchar*,int)\0"
    "OnLogTimer()\0OnUpdateData()\0OnUpdateDate()\0"
    "OnTimer4s()\0OnTimer30s()\0OnTimer_settingtime()\0"
    "OnTimer_calibration()\0pageNo,data,length\0"
    "getRevDataSlot(int,QByteArray,int)\0"
    "OpenPort()\0ClosePort()\0QString\0sc_com\0"
    "SendText(QString)\0ReadFile()\0"
};

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog,
      qt_meta_data_Dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setDataSignal((*reinterpret_cast< uchar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: OnLogTimer(); break;
        case 2: OnUpdateData(); break;
        case 3: OnUpdateDate(); break;
        case 4: OnTimer4s(); break;
        case 5: OnTimer30s(); break;
        case 6: OnTimer_settingtime(); break;
        case 7: OnTimer_calibration(); break;
        case 8: getRevDataSlot((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 9: OpenPort(); break;
        case 10: ClosePort(); break;
        case 11: { QString _r = SendText((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: ReadFile(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Dialog::setDataSignal(uchar * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
