/****************************************************************************
** Meta object code from reading C++ file 'ProcessingDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/ProcessingDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProcessingDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProcessingDialog[] = {

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
      26,   18,   17,   17, 0x0a,
      63,   17,   17,   17, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_ProcessingDialog[] = {
    "ProcessingDialog\0\0checked\0"
    "on_close_cancel_button_clicked(bool)\0"
    "on_close_cancel_button_clicked()\0"
};

void ProcessingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProcessingDialog *_t = static_cast<ProcessingDialog *>(_o);
        switch (_id) {
        case 0: _t->on_close_cancel_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_close_cancel_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ProcessingDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProcessingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ProcessingDialog,
      qt_meta_data_ProcessingDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProcessingDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProcessingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProcessingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessingDialog))
        return static_cast<void*>(const_cast< ProcessingDialog*>(this));
    if (!strcmp(_clname, "Ui::ProcessingDialog"))
        return static_cast< Ui::ProcessingDialog*>(const_cast< ProcessingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ProcessingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
