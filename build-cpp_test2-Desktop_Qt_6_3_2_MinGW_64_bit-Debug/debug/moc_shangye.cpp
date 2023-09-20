/****************************************************************************
** Meta object code from reading C++ file 'shangye.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../cpp_test2/shangye.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shangye.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_shangye_t {
    uint offsetsAndSizes[26];
    char stringdata0[8];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[31];
    char stringdata4[31];
    char stringdata5[31];
    char stringdata6[31];
    char stringdata7[31];
    char stringdata8[25];
    char stringdata9[25];
    char stringdata10[22];
    char stringdata11[33];
    char stringdata12[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_shangye_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_shangye_t qt_meta_stringdata_shangye = {
    {
        QT_MOC_LITERAL(0, 7),  // "shangye"
        QT_MOC_LITERAL(8, 15),  // "on_btn1_clicked"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 30),  // "on_lineEdit_01_editingFinished"
        QT_MOC_LITERAL(56, 30),  // "on_lineEdit_02_editingFinished"
        QT_MOC_LITERAL(87, 30),  // "on_lineEdit_03_editingFinished"
        QT_MOC_LITERAL(118, 30),  // "on_lineEdit_04_editingFinished"
        QT_MOC_LITERAL(149, 30),  // "on_lineEdit_05_editingFinished"
        QT_MOC_LITERAL(180, 24),  // "on_radioButton_1_clicked"
        QT_MOC_LITERAL(205, 24),  // "on_radioButton_2_clicked"
        QT_MOC_LITERAL(230, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(252, 32),  // "on_comboBox_1_currentTextChanged"
        QT_MOC_LITERAL(285, 4)   // "arg1"
    },
    "shangye",
    "on_btn1_clicked",
    "",
    "on_lineEdit_01_editingFinished",
    "on_lineEdit_02_editingFinished",
    "on_lineEdit_03_editingFinished",
    "on_lineEdit_04_editingFinished",
    "on_lineEdit_05_editingFinished",
    "on_radioButton_1_clicked",
    "on_radioButton_2_clicked",
    "on_pushButton_clicked",
    "on_comboBox_1_currentTextChanged",
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_shangye[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x08,    1 /* Private */,
       3,    0,   75,    2, 0x08,    2 /* Private */,
       4,    0,   76,    2, 0x08,    3 /* Private */,
       5,    0,   77,    2, 0x08,    4 /* Private */,
       6,    0,   78,    2, 0x08,    5 /* Private */,
       7,    0,   79,    2, 0x08,    6 /* Private */,
       8,    0,   80,    2, 0x08,    7 /* Private */,
       9,    0,   81,    2, 0x08,    8 /* Private */,
      10,    0,   82,    2, 0x08,    9 /* Private */,
      11,    1,   83,    2, 0x08,   10 /* Private */,

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
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void shangye::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<shangye *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btn1_clicked(); break;
        case 1: _t->on_lineEdit_01_editingFinished(); break;
        case 2: _t->on_lineEdit_02_editingFinished(); break;
        case 3: _t->on_lineEdit_03_editingFinished(); break;
        case 4: _t->on_lineEdit_04_editingFinished(); break;
        case 5: _t->on_lineEdit_05_editingFinished(); break;
        case 6: _t->on_radioButton_1_clicked(); break;
        case 7: _t->on_radioButton_2_clicked(); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_comboBox_1_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject shangye::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_shangye.offsetsAndSizes,
    qt_meta_data_shangye,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_shangye_t
, QtPrivate::TypeAndForceComplete<shangye, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *shangye::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *shangye::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_shangye.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int shangye::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
