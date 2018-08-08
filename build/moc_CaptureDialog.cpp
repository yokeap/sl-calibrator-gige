/****************************************************************************
** Meta object code from reading C++ file 'CaptureDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/CaptureDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CaptureDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CaptureDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   15,   14,   14, 0x0a,
      60,   14,   14,   14, 0x2a,
     101,   93,   14,   14, 0x0a,
     137,  131,   14,   14, 0x0a,
     170,  131,   14,   14, 0x0a,
     206,  200,   14,   14, 0x0a,
     247,  200,   14,   14, 0x0a,
     293,  288,   14,   14, 0x0a,
     332,   15,   14,   14, 0x0a,
     364,   14,   14,   14, 0x2a,
     392,   15,   14,   14, 0x0a,
     427,   14,   14,   14, 0x2a,
     464,  458,   14,   14, 0x0a,
     496,   15,   14,   14, 0x0a,
     530,   14,   14,   14, 0x2a,
     560,   15,   14,   14, 0x0a,
     594,   14,   14,   14, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_CaptureDialog[] = {
    "CaptureDialog\0\0checked\0"
    "on_close_cancel_button_clicked(bool)\0"
    "on_close_cancel_button_clicked()\0"
    "dirname\0_on_root_dir_changed(QString)\0"
    "image\0_on_new_projector_image(QPixmap)\0"
    "_on_new_camera_image(cv::Mat)\0index\0"
    "on_screen_combo_currentIndexChanged(int)\0"
    "on_camera_combo_currentIndexChanged(int)\0"
    "text\0on_output_dir_line_textEdited(QString)\0"
    "on_capture_button_clicked(bool)\0"
    "on_capture_button_clicked()\0"
    "on_output_dir_button_clicked(bool)\0"
    "on_output_dir_button_clicked()\0state\0"
    "on_test_check_stateChanged(int)\0"
    "on_test_prev_button_clicked(bool)\0"
    "on_test_prev_button_clicked()\0"
    "on_test_next_button_clicked(bool)\0"
    "on_test_next_button_clicked()\0"
};

void CaptureDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CaptureDialog *_t = static_cast<CaptureDialog *>(_o);
        switch (_id) {
        case 0: _t->on_close_cancel_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_close_cancel_button_clicked(); break;
        case 2: _t->_on_root_dir_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->_on_new_projector_image((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 4: _t->_on_new_camera_image((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 5: _t->on_screen_combo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_camera_combo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_output_dir_line_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_capture_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_capture_button_clicked(); break;
        case 10: _t->on_output_dir_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_output_dir_button_clicked(); break;
        case 12: _t->on_test_check_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_test_prev_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_test_prev_button_clicked(); break;
        case 15: _t->on_test_next_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->on_test_next_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CaptureDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CaptureDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CaptureDialog,
      qt_meta_data_CaptureDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CaptureDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CaptureDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CaptureDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CaptureDialog))
        return static_cast<void*>(const_cast< CaptureDialog*>(this));
    if (!strcmp(_clname, "Ui::CaptureDialog"))
        return static_cast< Ui::CaptureDialog*>(const_cast< CaptureDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CaptureDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
