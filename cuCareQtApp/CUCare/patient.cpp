#include "patient.h"

Patient::Patient()
{       
    QDate tempDate(0,0,0);
    patientId = "NULL";
    firstName = "NULL";
    lastName = "NULL";
    primaryPhysician = "NULL";
    phoneNumber = "NULL";
    age = "NULL";
    gender = "NULL";
    address = "NULL";
}

Patient::Patient(QString fName, QString lName, QString phys, QString a, QString g, QString addr)
{
    patientId = "NULL";
    firstName = fName;
    lastName = lName;
    primaryPhysician = phys;
    age = a;
    gender = g;
    address = addr;
}

QString Patient::getPatientId() { return patientId; }
QString Patient::getFirstName() { return firstName; }
QString Patient::getLastName() { return lastName; }
QString Patient::getPhys() { return primaryPhysician; }
QString Patient::getPhoneNumber() { return phoneNumber; }
QString Patient::getAge() { return age; }
QString Patient::getGender() { return gender; }
QString Patient:: getAddress() { return address; }

void Patient::setAge(QString a) { age = a; }
void Patient::setGender(QString g) { gender = g; }
void Patient::setAddress(QString addr) { address = addr; }
void Patient::setPatientId(QString pId) { patientId = pId; }
void Patient::setFirstName(QString fName) { firstName = fName; }
void Patient::setLastName(QString lName) { lastName = lName; }
void Patient::setPhys(QString phys) { primaryPhysician = phys; }
void Patient::setPhoneNumber(QString pNumber) { phoneNumber = pNumber; }
