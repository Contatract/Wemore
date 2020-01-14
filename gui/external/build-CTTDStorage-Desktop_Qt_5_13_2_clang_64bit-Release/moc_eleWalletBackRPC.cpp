/****************************************************************************
** Meta object code from reading C++ file 'eleWalletBackRPC.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../CTTDStorage/include/eleWalletBackRPC.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eleWalletBackRPC.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EleWalletBackRPCCli_t {
    QByteArrayData data[21];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EleWalletBackRPCCli_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EleWalletBackRPCCli_t qt_meta_stringdata_EleWalletBackRPCCli = {
    {
QT_MOC_LITERAL(0, 0, 19), // "EleWalletBackRPCCli"
QT_MOC_LITERAL(1, 20, 13), // "showMsgBoxSig"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 3), // "msg"
QT_MOC_LITERAL(4, 39, 7), // "btnType"
QT_MOC_LITERAL(5, 47, 14), // "writeSocketSig"
QT_MOC_LITERAL(6, 62, 8), // "readData"
QT_MOC_LITERAL(7, 71, 10), // "connectSuc"
QT_MOC_LITERAL(8, 82, 10), // "connectErr"
QT_MOC_LITERAL(9, 93, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(10, 122, 10), // "connectDis"
QT_MOC_LITERAL(11, 133, 10), // "showMsgBox"
QT_MOC_LITERAL(12, 144, 7), // "dlgType"
QT_MOC_LITERAL(13, 152, 11), // "writeSocket"
QT_MOC_LITERAL(14, 164, 16), // "sendOperationCmd"
QT_MOC_LITERAL(15, 181, 5), // "opCmd"
QT_MOC_LITERAL(16, 187, 14), // "QList<QString>"
QT_MOC_LITERAL(17, 202, 8), // "opParams"
QT_MOC_LITERAL(18, 211, 12), // "timeOutLimit"
QT_MOC_LITERAL(19, 224, 8), // "isthread"
QT_MOC_LITERAL(20, 233, 22) // "sendOperationCmdThread"

    },
    "EleWalletBackRPCCli\0showMsgBoxSig\0\0"
    "msg\0btnType\0writeSocketSig\0readData\0"
    "connectSuc\0connectErr\0"
    "QAbstractSocket::SocketError\0connectDis\0"
    "showMsgBox\0dlgType\0writeSocket\0"
    "sendOperationCmd\0opCmd\0QList<QString>\0"
    "opParams\0timeOutLimit\0isthread\0"
    "sendOperationCmdThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EleWalletBackRPCCli[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       5,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   82,    2, 0x08 /* Private */,
       7,    0,   83,    2, 0x08 /* Private */,
       8,    1,   84,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    2,   88,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      14,    4,   96,    2, 0x02 /* Public */,
      14,    3,  105,    2, 0x22 /* Public | MethodCloned */,
      14,    2,  112,    2, 0x22 /* Public | MethodCloned */,
      20,    2,  117,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,   12,
    QMetaType::Void, QMetaType::QString,    3,

 // methods: parameters
    QMetaType::QString, QMetaType::Int, 0x80000000 | 16, QMetaType::Int, QMetaType::Bool,   15,   17,   18,   19,
    QMetaType::QString, QMetaType::Int, 0x80000000 | 16, QMetaType::Int,   15,   17,   18,
    QMetaType::QString, QMetaType::Int, 0x80000000 | 16,   15,   17,
    QMetaType::QString, QMetaType::Int, 0x80000000 | 16,   15,   17,

       0        // eod
};

void EleWalletBackRPCCli::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EleWalletBackRPCCli *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showMsgBoxSig((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->writeSocketSig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->readData(); break;
        case 3: _t->connectSuc(); break;
        case 4: _t->connectErr((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 5: _t->connectDis(); break;
        case 6: _t->showMsgBox((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->writeSocket((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: { QString _r = _t->sendOperationCmd((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->sendOperationCmd((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->sendOperationCmd((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->sendOperationCmdThread((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EleWalletBackRPCCli::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EleWalletBackRPCCli::showMsgBoxSig)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EleWalletBackRPCCli::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EleWalletBackRPCCli::writeSocketSig)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EleWalletBackRPCCli::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_EleWalletBackRPCCli.data,
    qt_meta_data_EleWalletBackRPCCli,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EleWalletBackRPCCli::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EleWalletBackRPCCli::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EleWalletBackRPCCli.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int EleWalletBackRPCCli::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void EleWalletBackRPCCli::showMsgBoxSig(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EleWalletBackRPCCli::writeSocketSig(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
