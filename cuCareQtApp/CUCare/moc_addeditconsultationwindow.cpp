/****************************************************************************
** Meta object code from reading C++ file 'addeditconsultationwindow.h'
**
** Created: Sun Dec 2 01:23:35 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addeditconsultationwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addeditconsultationwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddEditConsultationWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x08,
      46,   26,   26,   26, 0x08,
      66,   26,   26,   26, 0x08,
      90,   84,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddEditConsultationWindow[] = {
    "AddEditConsultationWindow\0\0"
    "saveConsultation()\0createFollowUpAct()\0"
    "editFollowUpAct()\0index\0"
    "followUpListChanged(int)\0"
};

void AddEditConsultationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddEditConsultationWindow *_t = static_cast<AddEditConsultationWindow *>(_o);
        switch (_id) {
        case 0: _t->saveConsultation(); break;
        case 1: _t->createFollowUpAct(); break;
        case 2: _t->editFollowUpAct(); break;
        case 3: _t->followUpListChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddEditConsultationWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddEditConsultationWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddEditConsultationWindow,
      qt_meta_data_AddEditConsultationWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddEditConsultationWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddEditConsultationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddEditConsultationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddEditConsultationWindow))
        return static_cast<void*>(const_cast< AddEditConsultationWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddEditConsultationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
