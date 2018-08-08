/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/MainWindow.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   12,   11,   11, 0x0a,
      57,   11,   11,   11, 0x2a,
      90,   12,   11,   11, 0x0a,
     136,   11,   11,   11, 0x2a,
     178,   12,   11,   11, 0x0a,
     226,   11,   11,   11, 0x2a,
     270,   12,   11,   11, 0x0a,
     301,   11,   11,   11, 0x2a,
     328,   12,   11,   11, 0x0a,
     371,   11,   11,   11, 0x2a,
     410,   12,   11,   11, 0x0a,
     453,   11,   11,   11, 0x2a,
     492,   12,   11,   11, 0x0a,
     538,   11,   11,   11, 0x2a,
     580,   12,   11,   11, 0x0a,
     612,   11,   11,   11, 0x2a,
     640,   12,   11,   11, 0x0a,
     675,   11,   11,   11, 0x2a,
     706,   12,   11,   11, 0x0a,
     742,   11,   11,   11, 0x2a,
     774,   12,   11,   11, 0x0a,
     809,   11,   11,   11, 0x2a,
     840,   12,   11,   11, 0x0a,
     880,   11,   11,   11, 0x2a,
     916,   12,   11,   11, 0x0a,
     947,   11,   11,   11, 0x2a,
     974,   12,   11,   11, 0x0a,
    1008,   11,   11,   11, 0x2a,
    1038,   12,   11,   11, 0x0a,
    1070,   11,   11,   11, 0x2a,
    1098,   12,   11,   11, 0x0a,
    1134,   11,   11,   11, 0x2a,
    1183, 1166,   11,   11, 0x0a,
    1246, 1238,   11,   11, 0x0a,
    1276,   12,   11,   11, 0x0a,
    1316,   12,   11,   11, 0x0a,
    1355,   12,   11,   11, 0x0a,
    1396,   12,   11,   11, 0x0a,
    1436, 1434,   11,   11, 0x0a,
    1477, 1434,   11,   11, 0x0a,
    1518,   11,   11,   11, 0x0a,
    1558,   11,   11,   11, 0x0a,
    1599,   12,   11,   11, 0x0a,
    1633, 1434,   11,   11, 0x0a,
    1669,   11,   11,   11, 0x0a,
    1697, 1434,   11,   11, 0x0a,
    1725, 1434,   11,   11, 0x0a,
    1769,   11,   11,   11, 0x0a,
    1810, 1804,   11,   11, 0x0a,
    1845, 1804,   11,   11, 0x0a,
    1879, 1804,   11,   11, 0x0a,
    1918,   12,   11,   11, 0x0a,
    1963,   12,   11,   11, 0x0a,
    2014, 2006,   11,   11, 0x0a,
    2036,   11,   11,   11, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0checked\0"
    "on_change_dir_action_triggered(bool)\0"
    "on_change_dir_action_triggered()\0"
    "on_save_vertical_image_action_triggered(bool)\0"
    "on_save_vertical_image_action_triggered()\0"
    "on_save_horizontal_image_action_triggered(bool)\0"
    "on_save_horizontal_image_action_triggered()\0"
    "on_quit_action_triggered(bool)\0"
    "on_quit_action_triggered()\0"
    "on_load_calibration_action_triggered(bool)\0"
    "on_load_calibration_action_triggered()\0"
    "on_save_calibration_action_triggered(bool)\0"
    "on_save_calibration_action_triggered()\0"
    "on_display_calibration_action_triggered(bool)\0"
    "on_display_calibration_action_triggered()\0"
    "on_about_action_triggered(bool)\0"
    "on_about_action_triggered()\0"
    "on_select_all_button_clicked(bool)\0"
    "on_select_all_button_clicked()\0"
    "on_select_none_button_clicked(bool)\0"
    "on_select_none_button_clicked()\0"
    "on_change_dir_button_clicked(bool)\0"
    "on_change_dir_button_clicked()\0"
    "on_extract_corners_button_clicked(bool)\0"
    "on_extract_corners_button_clicked()\0"
    "on_decode_button_clicked(bool)\0"
    "on_decode_button_clicked()\0"
    "on_calibrate_button_clicked(bool)\0"
    "on_calibrate_button_clicked()\0"
    "on_capture_button_clicked(bool)\0"
    "on_capture_button_clicked()\0"
    "on_reconstruct_button_clicked(bool)\0"
    "on_reconstruct_button_clicked()\0"
    "current,previous\0"
    "_on_image_tree_currentChanged(QModelIndex,QModelIndex)\0"
    "dirname\0_on_root_dir_changed(QString)\0"
    "on_display_original_radio_clicked(bool)\0"
    "on_display_decoded_radio_clicked(bool)\0"
    "on_display_projector_radio_clicked(bool)\0"
    "on_display_3dview_radio_clicked(bool)\0"
    "i\0on_corner_count_x_spin_valueChanged(int)\0"
    "on_corner_count_y_spin_valueChanged(int)\0"
    "on_corners_width_line_editingFinished()\0"
    "on_corners_height_line_editingFinished()\0"
    "on_threshold_button_clicked(bool)\0"
    "on_threshold_spin_valueChanged(int)\0"
    "on_b_line_editingFinished()\0"
    "on_m_spin_valueChanged(int)\0"
    "on_homography_window_spin_valueChanged(int)\0"
    "on_max_dist_line_editingFinished()\0"
    "state\0on_normals_check_stateChanged(int)\0"
    "on_colors_check_stateChanged(int)\0"
    "on_binary_file_check_stateChanged(int)\0"
    "_on_horizontal_layout_action_triggered(bool)\0"
    "_on_vertical_layout_action_triggered(bool)\0"
    "message\0show_message(QString)\0"
    "show_message()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_change_dir_action_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_change_dir_action_triggered(); break;
        case 2: _t->on_save_vertical_image_action_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_save_vertical_image_action_triggered(); break;
        case 4: _t->on_save_horizontal_image_action_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_save_horizontal_image_action_triggered(); break;
        case 6: _t->on_quit_action_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_quit_action_triggered(); break;
        case 8: _t->on_load_calibration_action_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_load_calibration_action_triggered(); break;
        case 10: _t->on_save_calibration_action_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_save_calibration_action_triggered(); break;
        case 12: _t->on_display_calibration_action_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_display_calibration_action_triggered(); break;
        case 14: _t->on_about_action_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_about_action_triggered(); break;
        case 16: _t->on_select_all_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->on_select_all_button_clicked(); break;
        case 18: _t->on_select_none_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->on_select_none_button_clicked(); break;
        case 20: _t->on_change_dir_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->on_change_dir_button_clicked(); break;
        case 22: _t->on_extract_corners_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->on_extract_corners_button_clicked(); break;
        case 24: _t->on_decode_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->on_decode_button_clicked(); break;
        case 26: _t->on_calibrate_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->on_calibrate_button_clicked(); break;
        case 28: _t->on_capture_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->on_capture_button_clicked(); break;
        case 30: _t->on_reconstruct_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->on_reconstruct_button_clicked(); break;
        case 32: _t->_on_image_tree_currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 33: _t->_on_root_dir_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->on_display_original_radio_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->on_display_decoded_radio_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->on_display_projector_radio_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->on_display_3dview_radio_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->on_corner_count_x_spin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->on_corner_count_y_spin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->on_corners_width_line_editingFinished(); break;
        case 41: _t->on_corners_height_line_editingFinished(); break;
        case 42: _t->on_threshold_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->on_threshold_spin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->on_b_line_editingFinished(); break;
        case 45: _t->on_m_spin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->on_homography_window_spin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->on_max_dist_line_editingFinished(); break;
        case 48: _t->on_normals_check_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->on_colors_check_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->on_binary_file_check_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->_on_horizontal_layout_action_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->_on_vertical_layout_action_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->show_message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 54: _t->show_message(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
