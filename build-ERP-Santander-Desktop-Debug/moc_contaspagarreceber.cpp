/****************************************************************************
** Meta object code from reading C++ file 'contaspagarreceber.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ERP-Santander/contaspagarreceber.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contaspagarreceber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_contasPagarReceber_t {
    QByteArrayData data[5];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_contasPagarReceber_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_contasPagarReceber_t qt_meta_stringdata_contasPagarReceber = {
    {
QT_MOC_LITERAL(0, 0, 18), // "contasPagarReceber"
QT_MOC_LITERAL(1, 19, 21), // "on_btnFaturas_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 24), // "on_btnTransacoes_clicked"
QT_MOC_LITERAL(4, 67, 20) // "on_btnVoltar_clicked"

    },
    "contasPagarReceber\0on_btnFaturas_clicked\0"
    "\0on_btnTransacoes_clicked\0"
    "on_btnVoltar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_contasPagarReceber[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void contasPagarReceber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<contasPagarReceber *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnFaturas_clicked(); break;
        case 1: _t->on_btnTransacoes_clicked(); break;
        case 2: _t->on_btnVoltar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject contasPagarReceber::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_contasPagarReceber.data,
    qt_meta_data_contasPagarReceber,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *contasPagarReceber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *contasPagarReceber::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_contasPagarReceber.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int contasPagarReceber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
