#include "patient.h"

Patient::Patient()
{       
    QDate tempDate(0,0,0);
    patientId = "NULL";
    firstName = "NULL";
    lastName = "NULL";
    primaryPhysician = "NULL";
    numOfConsults = 0;
    lastConsult = tempDate;
    phoneNumber = "NULL";
}

Patient::Patient(QString fName, QString lName, QString phys)
{
    QDate tempDate(0,0,0);
    patientId = "NULL";
    firstName = fName;
    lastName = lName;
    primaryPhysician = phys;
    numOfConsults = 0;
    lastConsult = tempDate;
}

QString Patient::getPatientId() { return patientId; }
QString Patient::getFirstName() { return firstName; }
QString Patient::getLastName() { return lastName; }
QString Patient::getPhys() { return primaryPhysician; }
int Patient::getNumConsults() { return numOfConsults; }
QDate Patient::getLastConsult() { return lastConsult; }
QString Patient::getPhoneNumber() { return phoneNumber; }


void Patient::setPatientId(QString pId) { patientId = pId; }
void Patient::setFirstName(QString fName) { firstName = fName; }
void Patient::setLastName(QString lName) { lastName = lName; }
void Patient::setPhys(QString phys) { primaryPhysician = phys; }
void Patient::setNumConsults(int numCons) { numOfConsults = numCons; }
void Patient::setLastConsult(QDate lastCons) { lastConsult = lastCons; }
void Patient::setPhoneNumber(QString pNumber) { phoneNumber = pNumber; }
