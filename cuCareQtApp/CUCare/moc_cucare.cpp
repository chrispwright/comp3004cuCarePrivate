/****************************************************************************
** Meta object code from reading C++ file 'cucare.h'
**
** Created: Sat Dec 1 12:08:39 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cucare.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cucare.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuCare[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      27,    7,    7,    7, 0x08,
      44,    7,    7,    7, 0x08,
      63,    7,    7,    7, 0x08,
      88,    7,    7,    7, 0x08,
     113,    7,    7,    7, 0x08,
     136,    7,    7,    7, 0x08,
     154,    7,    7,    7, 0x08,
     168,    7,    7,    7, 0x08,
     185,    7,    7,    7, 0x08,
     201,    7,    7,    7, 0x08,
     222,    7,    7,    7, 0x08,
     246,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CuCare[] = {
    "CuCare\0\0createPatientAct()\0editPatientAct()\0"
    "deletePatientAct()\0createPatientRecordAct()\0"
    "showFullPatientListing()\0"
    "editPatientRecordAct()\0viewPatientsAct()\0"
    "runQueryAct()\0manageUsersAct()\0"
    "setUpComboBox()\0comboBoxChanged(int)\0"
    "consultListChanged(int)\0readResponse()\0"
};

void CuCare::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CuCare *_t = static_cast<CuCare *>(_o);
        switch (_id) {
        case 0: _t->createPatientAct(); break;
        case 1: _t->editPatientAct(); break;
        case 2: _t->deletePatientAct(); break;
        case 3: _t->createPatientRecordAct(); break;
        case 4: _t->showFullPatientListing(); break;
        case 5: _t->editPatientRecordAct(); break;
        case 6: _t->viewPatientsAct(); break;
        case 7: _t->runQueryAct(); break;
        case 8: _t->manageUsersAct(); break;
        case 9: _t->setUpComboBox(); break;
        case 10: _t->comboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->consultListChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->readResponse(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuCare::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuCare::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CuCare,
      qt_meta_data_CuCare, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuCare::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuCare::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuCare::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuCare))
        return static_cast<void*>(const_cast< CuCare*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CuCare::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
