/****************************************************************************
** Meta object code from reading C++ file 'videothread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../podstawa/videothread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videothread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_videothread_t {
    QByteArrayData data[11];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_videothread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_videothread_t qt_meta_stringdata_videothread = {
    {
QT_MOC_LITERAL(0, 0, 11), // "videothread"
QT_MOC_LITERAL(1, 12, 9), // "NewCamImg"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "gestureDetected1"
QT_MOC_LITERAL(4, 40, 7), // "gesture"
QT_MOC_LITERAL(5, 48, 16), // "gestureDetected2"
QT_MOC_LITERAL(6, 65, 16), // "gestureDetected3"
QT_MOC_LITERAL(7, 82, 12), // "getScalarMin"
QT_MOC_LITERAL(8, 95, 10), // "cv::Scalar"
QT_MOC_LITERAL(9, 106, 2), // "s1"
QT_MOC_LITERAL(10, 109, 12) // "getScalarMax"

    },
    "videothread\0NewCamImg\0\0gestureDetected1\0"
    "gesture\0gestureDetected2\0gestureDetected3\0"
    "getScalarMin\0cv::Scalar\0s1\0getScalarMax"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_videothread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void videothread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<videothread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NewCamImg((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->gestureDetected1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->gestureDetected2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->gestureDetected3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->getScalarMin((*reinterpret_cast< cv::Scalar(*)>(_a[1]))); break;
        case 5: _t->getScalarMax((*reinterpret_cast< cv::Scalar(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (videothread::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&videothread::NewCamImg)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (videothread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&videothread::gestureDetected1)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (videothread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&videothread::gestureDetected2)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (videothread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&videothread::gestureDetected3)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject videothread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_videothread.data,
    qt_meta_data_videothread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *videothread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *videothread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_videothread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int videothread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void videothread::NewCamImg(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void videothread::gestureDetected1(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void videothread::gestureDetected2(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void videothread::gestureDetected3(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
