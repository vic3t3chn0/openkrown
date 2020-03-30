/****************************************************************************
** Meta object code from reading C++ file 'ircchannel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtirc/ircchannel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ircchannel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IRCChannel_t {
    QByteArrayData data[15];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IRCChannel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IRCChannel_t qt_meta_stringdata_IRCChannel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "IRCChannel"
QT_MOC_LITERAL(1, 11, 9), // "nameReply"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "nickList"
QT_MOC_LITERAL(4, 31, 11), // "sendMessage"
QT_MOC_LITERAL(5, 43, 7), // "message"
QT_MOC_LITERAL(6, 51, 15), // "sendJoinRequest"
QT_MOC_LITERAL(7, 67, 5), // "leave"
QT_MOC_LITERAL(8, 73, 6), // "reason"
QT_MOC_LITERAL(9, 80, 13), // "handleMessage"
QT_MOC_LITERAL(10, 94, 4), // "nick"
QT_MOC_LITERAL(11, 99, 16), // "handleNickChange"
QT_MOC_LITERAL(12, 116, 7), // "oldNick"
QT_MOC_LITERAL(13, 124, 7), // "newNick"
QT_MOC_LITERAL(14, 132, 10) // "handleJoin"

    },
    "IRCChannel\0nameReply\0\0nickList\0"
    "sendMessage\0message\0sendJoinRequest\0"
    "leave\0reason\0handleMessage\0nick\0"
    "handleNickChange\0oldNick\0newNick\0"
    "handleJoin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IRCChannel[] = {

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
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       6,    0,   55,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       9,    2,   59,    2, 0x0a /* Public */,
      11,    2,   64,    2, 0x0a /* Public */,
      14,    1,   69,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void IRCChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IRCChannel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameReply((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->sendMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->sendJoinRequest(); break;
        case 3: _t->leave((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->handleMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->handleNickChange((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->handleJoin((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IRCChannel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_IRCChannel.data,
    qt_meta_data_IRCChannel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IRCChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IRCChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IRCChannel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int IRCChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
