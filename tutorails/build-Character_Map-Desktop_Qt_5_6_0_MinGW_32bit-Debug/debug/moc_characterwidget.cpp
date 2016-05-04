/****************************************************************************
** Meta object code from reading C++ file 'characterwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Character_Map/characterwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'characterwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CharacterWidget_t {
    QByteArrayData data[12];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CharacterWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CharacterWidget_t qt_meta_stringdata_CharacterWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CharacterWidget"
QT_MOC_LITERAL(1, 16, 17), // "characterSelected"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "Character"
QT_MOC_LITERAL(4, 45, 10), // "updateFont"
QT_MOC_LITERAL(5, 56, 4), // "font"
QT_MOC_LITERAL(6, 61, 10), // "updateSize"
QT_MOC_LITERAL(7, 72, 8), // "fontSize"
QT_MOC_LITERAL(8, 81, 11), // "updateStyle"
QT_MOC_LITERAL(9, 93, 9), // "fontStyle"
QT_MOC_LITERAL(10, 103, 17), // "updateFontMerging"
QT_MOC_LITERAL(11, 121, 6) // "enable"

    },
    "CharacterWidget\0characterSelected\0\0"
    "Character\0updateFont\0font\0updateSize\0"
    "fontSize\0updateStyle\0fontStyle\0"
    "updateFontMerging\0enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CharacterWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,
      10,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QFont,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void CharacterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CharacterWidget *_t = static_cast<CharacterWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->characterSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 2: _t->updateSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateFontMerging((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CharacterWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CharacterWidget::characterSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CharacterWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CharacterWidget.data,
      qt_meta_data_CharacterWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CharacterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CharacterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CharacterWidget.stringdata0))
        return static_cast<void*>(const_cast< CharacterWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CharacterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CharacterWidget::characterSelected(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
