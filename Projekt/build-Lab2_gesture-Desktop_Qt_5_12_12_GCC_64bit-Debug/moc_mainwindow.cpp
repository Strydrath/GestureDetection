/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../podstawa/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[365];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "setScalarMin"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "cv::Scalar"
QT_MOC_LITERAL(4, 36, 2), // "h1"
QT_MOC_LITERAL(5, 39, 12), // "setScalarMax"
QT_MOC_LITERAL(6, 52, 11), // "onNewCamImg"
QT_MOC_LITERAL(7, 64, 4), // "qimg"
QT_MOC_LITERAL(8, 69, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 91, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(10, 124, 5), // "value"
QT_MOC_LITERAL(11, 130, 34), // "on_horizontalSlider_2_valueCh..."
QT_MOC_LITERAL(12, 165, 34), // "on_horizontalSlider_3_valueCh..."
QT_MOC_LITERAL(13, 200, 34), // "on_horizontalSlider_4_valueCh..."
QT_MOC_LITERAL(14, 235, 34), // "on_horizontalSlider_5_valueCh..."
QT_MOC_LITERAL(15, 270, 34), // "on_horizontalSlider_6_valueCh..."
QT_MOC_LITERAL(16, 305, 25), // "on_lineEdit_inputRejected"
QT_MOC_LITERAL(17, 331, 16), // "on_Green_clicked"
QT_MOC_LITERAL(18, 348, 16) // "on_Skora_clicked"

    },
    "MainWindow\0setScalarMin\0\0cv::Scalar\0"
    "h1\0setScalarMax\0onNewCamImg\0qimg\0"
    "on_pushButton_clicked\0"
    "on_horizontalSlider_valueChanged\0value\0"
    "on_horizontalSlider_2_valueChanged\0"
    "on_horizontalSlider_3_valueChanged\0"
    "on_horizontalSlider_4_valueChanged\0"
    "on_horizontalSlider_5_valueChanged\0"
    "on_horizontalSlider_6_valueChanged\0"
    "on_lineEdit_inputRejected\0on_Green_clicked\0"
    "on_Skora_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   85,    2, 0x0a /* Public */,
       8,    0,   88,    2, 0x08 /* Private */,
       9,    1,   89,    2, 0x08 /* Private */,
      11,    1,   92,    2, 0x08 /* Private */,
      12,    1,   95,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      14,    1,  101,    2, 0x08 /* Private */,
      15,    1,  104,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setScalarMin((*reinterpret_cast< cv::Scalar(*)>(_a[1]))); break;
        case 1: _t->setScalarMax((*reinterpret_cast< cv::Scalar(*)>(_a[1]))); break;
        case 2: _t->onNewCamImg((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_horizontalSlider_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_horizontalSlider_3_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_horizontalSlider_4_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_horizontalSlider_5_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_horizontalSlider_6_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_lineEdit_inputRejected(); break;
        case 11: _t->on_Green_clicked(); break;
        case 12: _t->on_Skora_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(cv::Scalar );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setScalarMin)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(cv::Scalar );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setScalarMax)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::setScalarMin(cv::Scalar _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::setScalarMax(cv::Scalar _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
