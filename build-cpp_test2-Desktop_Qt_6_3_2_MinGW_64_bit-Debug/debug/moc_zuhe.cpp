/****************************************************************************
** Meta object code from reading C++ file 'zuhe.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../cpp_test2/zuhe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zuhe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_zuhe_t {
    uint offsetsAndSizes[22];
    char stringdata0[5];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[31];
    char stringdata4[31];
    char stringdata5[31];
    char stringdata6[31];
    char stringdata7[31];
    char stringdata8[25];
    char stringdata9[25];
    char stringdata10[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_zuhe_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_zuhe_t qt_meta_stringdata_zuhe = {
    {
        QT_MOC_LITERAL(0, 4),  // "zuhe"
        QT_MOC_LITERAL(5, 16),  // "on_btn_2_clicked"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 30),  // "on_lineEdit_01_editingFinished"
        QT_MOC_LITERAL(54, 30),  // "on_lineEdit_02_editingFinished"
        QT_MOC_LITERAL(85, 30),  // "on_lineEdit_03_editingFinished"
        QT_MOC_LITERAL(116, 30),  // "on_lineEdit_04_editingFinished"
        QT_MOC_LITERAL(147, 30),  // "on_lineEdit_05_editingFinished"
        QT_MOC_LITERAL(178, 24),  // "on_radioButton_1_clicked"
        QT_MOC_LITERAL(203, 24),  // "on_radioButton_2_clicked"
        QT_MOC_LITERAL(228, 16)   // "on_btn_1_clicked"
    },
    "zuhe",
    "on_btn_2_clicked",
    "",
    "on_lineEdit_01_editingFinished",
    "on_lineEdit_02_editingFinished",
    "on_lineEdit_03_editingFinished",
    "on_lineEdit_04_editingFinished",
    "on_lineEdit_05_editingFinished",
    "on_radioButton_1_clicked",
    "on_radioButton_2_clicked",
    "on_btn_1_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zuhe[] = {

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

void zuhe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<zuhe *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btn_2_clicked(); break;
        case 1: _t->on_lineEdit_01_editingFinished(); break;
        case 2: _t->on_lineEdit_02_editingFinished(); break;
        case 3: _t->on_lineEdit_03_editingFinished(); break;
        case 4: _t->on_lineEdit_04_editingFinished(); break;
        case 5: _t->on_lineEdit_05_editingFinished(); break;
        case 6: _t->on_radioButton_1_clicked(); break;
        case 7: _t->on_radioButton_2_clicked(); break;
        case 8: _t->on_btn_1_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject zuhe::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_zuhe.offsetsAndSizes,
    qt_meta_data_zuhe,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_zuhe_t
, QtPrivate::TypeAndForceComplete<zuhe, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *zuhe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zuhe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_zuhe.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int zuhe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
