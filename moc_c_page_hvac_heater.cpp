/****************************************************************************
** Meta object code from reading C++ file 'c_page_hvac_heater.h'
**
** Created: Thu May 28 05:23:09 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "c_page_hvac_heater.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'c_page_hvac_heater.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_C_Page_Hvac_Heater[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      44,   19,   19,   19, 0x08,
      81,   19,   19,   19, 0x08,
     116,   19,   19,   19, 0x08,
     144,   19,   19,   19, 0x08,
     174,   19,   19,   19, 0x08,
     203,   19,   19,   19, 0x08,
     232,   19,   19,   19, 0x08,
     261,   19,   19,   19, 0x08,
     290,   19,   19,   19, 0x08,
     319,   19,   19,   19, 0x08,
     348,   19,   19,   19, 0x08,
     377,   19,   19,   19, 0x08,
     406,   19,   19,   19, 0x08,
     435,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_C_Page_Hvac_Heater[] = {
    "C_Page_Hvac_Heater\0\0on_pushButton_clicked()\0"
    "on_lineEdit_var_2_selectionChanged()\0"
    "on_lineEdit_var_selectionChanged()\0"
    "on_lineEdit_var_lostFocus()\0"
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
    "on_pushButton_num1_clicked()\0"
};

const QMetaObject C_Page_Hvac_Heater::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_C_Page_Hvac_Heater,
      qt_meta_data_C_Page_Hvac_Heater, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &C_Page_Hvac_Heater::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *C_Page_Hvac_Heater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *C_Page_Hvac_Heater::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_C_Page_Hvac_Heater))
        return static_cast<void*>(const_cast< C_Page_Hvac_Heater*>(this));
    return QDialog::qt_metacast(_clname);
}

int C_Page_Hvac_Heater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: on_lineEdit_var_2_selectionChanged(); break;
        case 2: on_lineEdit_var_selectionChanged(); break;
        case 3: on_lineEdit_var_lostFocus(); break;
        case 4: on_pushButton_clear_clicked(); break;
        case 5: on_pushButton_num0_clicked(); break;
        case 6: on_pushButton_num9_clicked(); break;
        case 7: on_pushButton_num8_clicked(); break;
        case 8: on_pushButton_num7_clicked(); break;
        case 9: on_pushButton_num6_clicked(); break;
        case 10: on_pushButton_num5_clicked(); break;
        case 11: on_pushButton_num4_clicked(); break;
        case 12: on_pushButton_num3_clicked(); break;
        case 13: on_pushButton_num2_clicked(); break;
        case 14: on_pushButton_num1_clicked(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
