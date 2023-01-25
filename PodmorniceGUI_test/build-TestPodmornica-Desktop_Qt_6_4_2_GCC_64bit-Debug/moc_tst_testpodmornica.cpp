/****************************************************************************
** Meta object code from reading C++ file 'tst_testpodmornica.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../TestPodmornica/tst_testpodmornica.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_testpodmornica.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_TestPodmornica_t {
    uint offsetsAndSizes[22];
    char stringdata0[15];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[19];
    char stringdata5[18];
    char stringdata6[24];
    char stringdata7[16];
    char stringdata8[24];
    char stringdata9[22];
    char stringdata10[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TestPodmornica_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TestPodmornica_t qt_meta_stringdata_TestPodmornica = {
    {
        QT_MOC_LITERAL(0, 14),  // "TestPodmornica"
        QT_MOC_LITERAL(15, 4),  // "init"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 7),  // "cleanup"
        QT_MOC_LITERAL(29, 18),  // "test_getPodmornica"
        QT_MOC_LITERAL(48, 17),  // "test_proveriPotop"
        QT_MOC_LITERAL(66, 23),  // "test_proveriPreklapanje"
        QT_MOC_LITERAL(90, 15),  // "test_uzmiPravac"
        QT_MOC_LITERAL(106, 23),  // "test_izaberiVrsteKolone"
        QT_MOC_LITERAL(130, 21),  // "test_izmeniPodmornicu"
        QT_MOC_LITERAL(152, 16)   // "test_izmeniTablu"
    },
    "TestPodmornica",
    "init",
    "",
    "cleanup",
    "test_getPodmornica",
    "test_proveriPotop",
    "test_proveriPreklapanje",
    "test_uzmiPravac",
    "test_izaberiVrsteKolone",
    "test_izmeniPodmornicu",
    "test_izmeniTablu"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TestPodmornica[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

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

Q_CONSTINIT const QMetaObject TestPodmornica::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TestPodmornica.offsetsAndSizes,
    qt_meta_data_TestPodmornica,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TestPodmornica_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TestPodmornica, std::true_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cleanup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_getPodmornica'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_proveriPotop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_proveriPreklapanje'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_uzmiPravac'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_izaberiVrsteKolone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_izmeniPodmornicu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_izmeniTablu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TestPodmornica::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestPodmornica *>(_o);
        (void)_t;
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
    (void)_a;
}

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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
