/****************************************************************************
** Meta object code from reading C++ file 'caixaform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../omarket/omarket/caixaform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caixaform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CaixaForm_t {
    QByteArrayData data[12];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CaixaForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CaixaForm_t qt_meta_stringdata_CaixaForm = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CaixaForm"
QT_MOC_LITERAL(1, 10, 13), // "barcodeReaded"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "addItem"
QT_MOC_LITERAL(4, 33, 5), // "print"
QT_MOC_LITERAL(5, 39, 16), // "changeQuantidade"
QT_MOC_LITERAL(6, 56, 1), // "v"
QT_MOC_LITERAL(7, 58, 17), // "produtoAdicionado"
QT_MOC_LITERAL(8, 76, 1), // "t"
QT_MOC_LITERAL(9, 78, 8), // "calcular"
QT_MOC_LITERAL(10, 87, 11), // "errorReport"
QT_MOC_LITERAL(11, 99, 3) // "err"

    },
    "CaixaForm\0barcodeReaded\0\0addItem\0print\0"
    "changeQuantidade\0v\0produtoAdicionado\0"
    "t\0calcular\0errorReport\0err"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CaixaForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       9,    1,   58,    2, 0x08 /* Private */,
      10,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void CaixaForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CaixaForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->barcodeReaded(); break;
        case 1: _t->addItem(); break;
        case 2: _t->print(); break;
        case 3: _t->changeQuantidade((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->produtoAdicionado((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->calcular((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->errorReport((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CaixaForm::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_CaixaForm.data,
    qt_meta_data_CaixaForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CaixaForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaixaForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CaixaForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CaixaForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
