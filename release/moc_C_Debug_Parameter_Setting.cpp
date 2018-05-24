/****************************************************************************
** Meta object code from reading C++ file 'C_Debug_Parameter_Setting.h'
**
** Created: Mon Mar 14 13:15:00 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../C_Debug_Parameter_Setting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'C_Debug_Parameter_Setting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_C_Debug_Parameter_Setting[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x08,
      59,   26,   26,   26, 0x08,
      91,   26,   26,   26, 0x08,
     126,   26,   26,   26, 0x08,
     154,   26,   26,   26, 0x08,
     184,   26,   26,   26, 0x08,
     214,   26,   26,   26, 0x08,
     243,   26,   26,   26, 0x08,
     272,   26,   26,   26, 0x08,
     301,   26,   26,   26, 0x08,
     330,   26,   26,   26, 0x08,
     359,   26,   26,   26, 0x08,
     388,   26,   26,   26, 0x08,
     417,   26,   26,   26, 0x08,
     446,   26,   26,   26, 0x08,
     475,   26,   26,   26, 0x08,
     504,   26,   26,   26, 0x08,
     517,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_C_Debug_Parameter_Setting[] = {
    "C_Debug_Parameter_Setting\0\0"
    "on_radioButton_decVar_clicked()\0"
    "on_radioButton_binVar_clicked()\0"
    "on_lineEdit_var_selectionChanged()\0"
    "on_pushButton_set_clicked()\0"
    "on_pushButton_set_2_clicked()\0"
    "on_pushButton_clear_clicked()\0"
    "on_pushButton_num0_clicked()\0"
    "on_pushButton_num9_clicked()\0"
    "on_pushButton_num8_clicked()\0"
    "on_pushButton_num7_clicked()\0"
    "on_pushButton_num6_clicked()\0"
    "on_pushButton_num5_clicked()\0"
    "on_pushButton_num4_clicked()\0"
    "on_pushButton_num3_clicked()\0"
    "on_pushButton_num2_clicked()\0"
    "on_pushButton_num1_clicked()\0OnTimer_1s()\0"
    "OnTimer_5s()\0"
};

const QMetaObject C_Debug_Parameter_Setting::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_C_Debug_Parameter_Setting,
      qt_meta_data_C_Debug_Parameter_Setting, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &C_Debug_Parameter_Setting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *C_Debug_Parameter_Setting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *C_Debug_Parameter_Setting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_C_Debug_Parameter_Setting))
        return static_cast<void*>(const_cast< C_Debug_Parameter_Setting*>(this));
    return QDialog::qt_metacast(_clname);
}

int C_Debug_Parameter_Setting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_radioButton_decVar_clicked(); break;
        case 1: on_radioButton_binVar_clicked(); break;
        case 2: on_lineEdit_var_selectionChanged(); break;
        case 3: on_pushButton_set_clicked(); break;
        case 4: on_pushButton_set_2_clicked(); break;
        case 5: on_pushButton_clear_clicked(); break;
        case 6: on_pushButton_num0_clicked(); break;
        case 7: on_pushButton_num9_clicked(); break;
        case 8: on_pushButton_num8_clicked(); break;
        case 9: on_pushButton_num7_clicked(); break;
        case 10: on_pushButton_num6_clicked(); break;
        case 11: on_pushButton_num5_clicked(); break;
        case 12: on_pushButton_num4_clicked(); break;
        case 13: on_pushButton_num3_clicked(); break;
        case 14: on_pushButton_num2_clicked(); break;
        case 15: on_pushButton_num1_clicked(); break;
        case 16: OnTimer_1s(); break;
        case 17: OnTimer_5s(); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
