/****************************************************************************
** Meta object code from reading C++ file 'CalibrationDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/CalibrationDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CalibrationDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CalibrationDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   19,   18,   18, 0x0a,
      56,   18,   18,   18, 0x2a,
      81,   19,   18,   18, 0x0a,
     110,   18,   18,   18, 0x2a,
     135,   19,   18,   18, 0x0a,
     165,   18,   18,   18, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_CalibrationDialog[] = {
    "CalibrationDialog\0\0checked\0"
    "on_load_button_clicked(bool)\0"
    "on_load_button_clicked()\0"
    "on_save_button_clicked(bool)\0"
    "on_save_button_clicked()\0"
    "on_close_button_clicked(bool)\0"
    "on_close_button_clicked()\0"
};

void CalibrationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CalibrationDialog *_t = static_cast<CalibrationDialog *>(_o);
        switch (_id) {
        case 0: _t->on_load_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_load_button_clicked(); break;
        case 2: _t->on_save_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_save_button_clicked(); break;
        case 4: _t->on_close_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_close_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CalibrationDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CalibrationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CalibrationDialog,
      qt_meta_data_CalibrationDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CalibrationDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CalibrationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CalibrationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CalibrationDialog))
        return static_cast<void*>(const_cast< CalibrationDialog*>(this));
    if (!strcmp(_clname, "Ui::CalibrationDialog"))
        return static_cast< Ui::CalibrationDialog*>(const_cast< CalibrationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CalibrationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
