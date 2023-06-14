/****************************************************************************
** Meta object code from reading C++ file 'indicator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../WaterLevelMonitorDemo/indicator.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'indicator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSIndicatorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSIndicatorENDCLASS = QtMocHelpers::stringData(
    "Indicator",
    "activateNormal",
    "",
    "activateWarning",
    "activateDanger",
    "toggleLights"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSIndicatorENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[10];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[15];
    char stringdata5[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSIndicatorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSIndicatorENDCLASS_t qt_meta_stringdata_CLASSIndicatorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "Indicator"
        QT_MOC_LITERAL(10, 14),  // "activateNormal"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 15),  // "activateWarning"
        QT_MOC_LITERAL(42, 14),  // "activateDanger"
        QT_MOC_LITERAL(57, 12)   // "toggleLights"
    },
    "Indicator",
    "activateNormal",
    "",
    "activateWarning",
    "activateDanger",
    "toggleLights"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSIndicatorENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    0,   39,    2, 0x0a,    2 /* Public */,
       4,    0,   40,    2, 0x0a,    3 /* Public */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Indicator::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSIndicatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSIndicatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSIndicatorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Indicator, std::true_type>,
        // method 'activateNormal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activateWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activateDanger'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleLights'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Indicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Indicator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activateNormal(); break;
        case 1: _t->activateWarning(); break;
        case 2: _t->activateDanger(); break;
        case 3: _t->toggleLights(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Indicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Indicator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSIndicatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Indicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
