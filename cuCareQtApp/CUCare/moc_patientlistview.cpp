/****************************************************************************
** Meta object code from reading C++ file 'patientlistview.h'
**
** Created: Sat Dec 1 12:08:40 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "patientlistview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'patientlistview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PatientListView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      43,   16,   16,   16, 0x0a,
      61,   57,   16,   16, 0x0a,
      98,   57,   16,   16, 0x0a,
     140,   57,   16,   16, 0x0a,
     178,   16,   16,   16, 0x0a,
     210,   16,   16,   16, 0x0a,
     255,  246,   16,   16, 0x08,
     305,  291,   16,   16, 0x08,
     361,  351,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PatientListView[] = {
    "PatientListView\0\0setupPhysiciansComboBox()\0"
    "setupTables()\0,,,\0"
    "patientTableClicked(int,int,int,int)\0"
    "consultationTableClicked(int,int,int,int)\0"
    "followUpTableClicked(int,int,int,int)\0"
    "filterByStatusComboChanged(int)\0"
    "filterByPhysiciansComboChanged(int)\0"
    "patients\0loadPatientTable(QVector<Patient*>)\0"
    "consultations\0"
    "loadConsultationTable(QVector<Consultation*>)\0"
    "followUps\0loadFollowUpTable(QVector<FollowUp*>)\0"
};

void PatientListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PatientListView *_t = static_cast<PatientListView *>(_o);
        switch (_id) {
        case 0: _t->setupPhysiciansComboBox(); break;
        case 1: _t->setupTables(); break;
        case 2: _t->patientTableClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->consultationTableClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->followUpTableClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->filterByStatusComboChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->filterByPhysiciansComboChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->loadPatientTable((*reinterpret_cast< QVector<Patient*>(*)>(_a[1]))); break;
        case 8: _t->loadConsultationTable((*reinterpret_cast< QVector<Consultation*>(*)>(_a[1]))); break;
        case 9: _t->loadFollowUpTable((*reinterpret_cast< QVector<FollowUp*>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PatientListView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PatientListView::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PatientListView,
      qt_meta_data_PatientListView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PatientListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PatientListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PatientListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PatientListView))
        return static_cast<void*>(const_cast< PatientListView*>(this));
    return QDialog::qt_metacast(_clname);
}

int PatientListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
