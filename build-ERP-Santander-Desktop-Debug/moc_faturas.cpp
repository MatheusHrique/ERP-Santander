/****************************************************************************
** Meta object code from reading C++ file 'faturas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ERP-Santander/faturas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'faturas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_faturas_t {
    QByteArrayData data[13];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_faturas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_faturas_t qt_meta_stringdata_faturas = {
    {
QT_MOC_LITERAL(0, 0, 7), // "faturas"
QT_MOC_LITERAL(1, 8, 20), // "on_btnVoltar_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "atualizarTabela"
QT_MOC_LITERAL(4, 46, 12), // "prepareValue"
QT_MOC_LITERAL(5, 59, 23), // "on_btnPesquisar_clicked"
QT_MOC_LITERAL(6, 83, 26), // "on_tableWidget_cellClicked"
QT_MOC_LITERAL(7, 110, 3), // "row"
QT_MOC_LITERAL(8, 114, 6), // "column"
QT_MOC_LITERAL(9, 121, 19), // "on_btnPagar_clicked"
QT_MOC_LITERAL(10, 141, 20), // "on_btnEditar_clicked"
QT_MOC_LITERAL(11, 162, 23), // "on_btnAdicionar_clicked"
QT_MOC_LITERAL(12, 186, 22) // "on_btnCancelar_clicked"

    },
    "faturas\0on_btnVoltar_clicked\0\0"
    "atualizarTabela\0prepareValue\0"
    "on_btnPesquisar_clicked\0"
    "on_tableWidget_cellClicked\0row\0column\0"
    "on_btnPagar_clicked\0on_btnEditar_clicked\0"
    "on_btnAdicionar_clicked\0on_btnCancelar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_faturas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    2,   59,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void faturas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<faturas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnVoltar_clicked(); break;
        case 1: _t->atualizarTabela((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_btnPesquisar_clicked(); break;
        case 3: _t->on_tableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_btnPagar_clicked(); break;
        case 5: _t->on_btnEditar_clicked(); break;
        case 6: _t->on_btnAdicionar_clicked(); break;
        case 7: _t->on_btnCancelar_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject faturas::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_faturas.data,
    qt_meta_data_faturas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *faturas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *faturas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_faturas.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int faturas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
