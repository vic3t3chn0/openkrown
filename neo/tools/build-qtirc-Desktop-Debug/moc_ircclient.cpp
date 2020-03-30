/****************************************************************************
** Meta object code from reading C++ file 'ircclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtirc/ircclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ircclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IRCClient_t {
    QByteArrayData data[36];
    char stringdata0[388];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IRCClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IRCClient_t qt_meta_stringdata_IRCClient = {
    {
QT_MOC_LITERAL(0, 0, 9), // "IRCClient"
QT_MOC_LITERAL(1, 10, 7), // "message"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 7), // "channel"
QT_MOC_LITERAL(4, 27, 6), // "sender"
QT_MOC_LITERAL(5, 34, 9), // "connected"
QT_MOC_LITERAL(6, 44, 6), // "server"
QT_MOC_LITERAL(7, 51, 12), // "disconnected"
QT_MOC_LITERAL(8, 64, 5), // "error"
QT_MOC_LITERAL(9, 70, 12), // "notification"
QT_MOC_LITERAL(10, 83, 15), // "nicknameChanged"
QT_MOC_LITERAL(11, 99, 7), // "oldNick"
QT_MOC_LITERAL(12, 107, 7), // "newNick"
QT_MOC_LITERAL(13, 115, 19), // "userNicknameChanged"
QT_MOC_LITERAL(14, 135, 4), // "nick"
QT_MOC_LITERAL(15, 140, 10), // "userJoined"
QT_MOC_LITERAL(16, 151, 8), // "userQuit"
QT_MOC_LITERAL(17, 160, 6), // "reason"
QT_MOC_LITERAL(18, 167, 8), // "loggedIn"
QT_MOC_LITERAL(19, 176, 8), // "userList"
QT_MOC_LITERAL(20, 185, 4), // "list"
QT_MOC_LITERAL(21, 190, 12), // "debugMessage"
QT_MOC_LITERAL(22, 203, 13), // "connectToHost"
QT_MOC_LITERAL(23, 217, 12), // "QHostAddress"
QT_MOC_LITERAL(24, 230, 4), // "host"
QT_MOC_LITERAL(25, 235, 4), // "port"
QT_MOC_LITERAL(26, 240, 11), // "initialNick"
QT_MOC_LITERAL(27, 252, 10), // "disconnect"
QT_MOC_LITERAL(28, 263, 9), // "reconnect"
QT_MOC_LITERAL(29, 273, 25), // "sendNicknameChangeRequest"
QT_MOC_LITERAL(30, 299, 8), // "nickname"
QT_MOC_LITERAL(31, 308, 18), // "sendPrivateMessage"
QT_MOC_LITERAL(32, 327, 9), // "recipient"
QT_MOC_LITERAL(33, 337, 15), // "handleConnected"
QT_MOC_LITERAL(34, 353, 18), // "handleDisconnected"
QT_MOC_LITERAL(35, 372, 15) // "handleReadyRead"

    },
    "IRCClient\0message\0\0channel\0sender\0"
    "connected\0server\0disconnected\0error\0"
    "notification\0nicknameChanged\0oldNick\0"
    "newNick\0userNicknameChanged\0nick\0"
    "userJoined\0userQuit\0reason\0loggedIn\0"
    "userList\0list\0debugMessage\0connectToHost\0"
    "QHostAddress\0host\0port\0initialNick\0"
    "disconnect\0reconnect\0sendNicknameChangeRequest\0"
    "nickname\0sendPrivateMessage\0recipient\0"
    "handleConnected\0handleDisconnected\0"
    "handleReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IRCClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  114,    2, 0x06 /* Public */,
       5,    1,  121,    2, 0x06 /* Public */,
       7,    0,  124,    2, 0x06 /* Public */,
       8,    1,  125,    2, 0x06 /* Public */,
       9,    2,  128,    2, 0x06 /* Public */,
      10,    2,  133,    2, 0x06 /* Public */,
      13,    1,  138,    2, 0x06 /* Public */,
      15,    2,  141,    2, 0x06 /* Public */,
      16,    2,  146,    2, 0x06 /* Public */,
      18,    1,  151,    2, 0x06 /* Public */,
      19,    2,  154,    2, 0x06 /* Public */,
      21,    1,  159,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    3,  162,    2, 0x0a /* Public */,
      27,    0,  169,    2, 0x0a /* Public */,
      28,    0,  170,    2, 0x0a /* Public */,
      29,    1,  171,    2, 0x0a /* Public */,
      31,    2,  174,    2, 0x0a /* Public */,
      33,    0,  179,    2, 0x08 /* Private */,
      34,    0,  180,    2, 0x08 /* Private */,
      35,    0,  181,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    1,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    1,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    1,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   17,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,   20,
    QMetaType::Void, QMetaType::QString,    1,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 23, QMetaType::UShort, QMetaType::QString,   24,   25,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   32,    1,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void IRCClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IRCClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->connected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->disconnected(); break;
        case 3: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->notification((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->nicknameChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->userNicknameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->userJoined((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->userQuit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->loggedIn((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->userList((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 11: _t->debugMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->connectToHost((*reinterpret_cast< const QHostAddress(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 13: _t->disconnect(); break;
        case 14: _t->reconnect(); break;
        case 15: _t->sendNicknameChangeRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->sendPrivateMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->handleConnected(); break;
        case 18: _t->handleDisconnected(); break;
        case 19: _t->handleReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IRCClient::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IRCClient::message)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IRCClient::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IRCClient::connected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (IRCClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IRCClient::disconnected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (IRCClient::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IRCClient::error)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (IRCClient::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IRCClient::notification)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (IRCClient::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IRCClient::nicknameChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (IRCClient::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IRCClient::userNicknameChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (IRCClient::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IRCClient::userJoined)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (IRCClient::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IRCClient::userQuit)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (IRCClient::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IRCClient::loggedIn)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (IRCClient::*)(const QString & , const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IRCClient::userList)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (IRCClient::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IRCClient::debugMessage)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IRCClient::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_IRCClient.data,
    qt_meta_data_IRCClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IRCClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IRCClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IRCClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int IRCClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void IRCClient::message(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IRCClient::connected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IRCClient::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void IRCClient::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void IRCClient::notification(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void IRCClient::nicknameChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void IRCClient::userNicknameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void IRCClient::userJoined(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void IRCClient::userQuit(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void IRCClient::loggedIn(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void IRCClient::userList(const QString & _t1, const QStringList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void IRCClient::debugMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
