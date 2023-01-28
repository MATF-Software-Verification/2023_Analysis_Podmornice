/****************************************************************************
** Meta object code from reading C++ file 'tst_testpodmornica.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tst_testpodmornica.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_testpodmornica.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestPodmornica_t {
    QByteArrayData data[11];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestPodmornica_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestPodmornica_t qt_meta_stringdata_TestPodmornica = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TestPodmornica"
QT_MOC_LITERAL(1, 15, 4), // "init"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "cleanup"
QT_MOC_LITERAL(4, 29, 18), // "test_getPodmornica"
QT_MOC_LITERAL(5, 48, 17), // "test_proveriPotop"
QT_MOC_LITERAL(6, 66, 23), // "test_proveriPreklapanje"
QT_MOC_LITERAL(7, 90, 15), // "test_uzmiPravac"
QT_MOC_LITERAL(8, 106, 23), // "test_izaberiVrsteKolone"
QT_MOC_LITERAL(9, 130, 21), // "test_izmeniPodmornicu"
QT_MOC_LITERAL(10, 152, 16) // "test_izmeniTablu"

    },
    "TestPodmornica\0init\0\0cleanup\0"
    "test_getPodmornica\0test_proveriPotop\0"
    "test_proveriPreklapanje\0test_uzmiPravac\0"
    "test_izaberiVrsteKolone\0test_izmeniPodmornicu\0"
    "test_izmeniTablu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestPodmornica[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestPodmornica::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestPodmornica *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->cleanup(); break;
        case 2: _t->test_getPodmornica(); break;
        case 3: _t->test_proveriPotop(); break;
        case 4: _t->test_proveriPreklapanje(); break;
        case 5: _t->test_uzmiPravac(); break;
        case 6: _t->test_izaberiVrsteKolone(); break;
        case 7: _t->test_izmeniPodmornicu(); break;
        case 8: _t->test_izmeniTablu(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TestPodmornica::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TestPodmornica.data,
    qt_meta_data_TestPodmornica,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestPodmornica::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestPodmornica::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestPodmornica.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestPodmornica::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
