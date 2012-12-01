/****************************************************************************
** Meta object code from reading C++ file 'connectionthread.h'
**
** Created: Fri Nov 30 22:04:52 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "connectionthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConnectionThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      61,   17,   17,   17, 0x0a,
      73,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ConnectionThread[] = {
    "ConnectionThread\0\0socketError\0"
    "error(QTcpSocket::SocketError)\0"
    "readyRead()\0disconnected()\0"
};

void ConnectionThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConnectionThread *_t = static_cast<ConnectionThread *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QTcpSocket::SocketError(*)>(_a[1]))); break;
        case 1: _t->readyRead(); break;
        case 2: _t->disconnected(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ConnectionThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConnectionThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ConnectionThread,
      qt_meta_data_ConnectionThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConnectionThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConnectionThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConnectionThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectionThread))
        return static_cast<void*>(const_cast< ConnectionThread*>(this));
    return QThread::qt_metacast(_clname);
}

int ConnectionThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ConnectionThread::error(QTcpSocket::SocketError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
