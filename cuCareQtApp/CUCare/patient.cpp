#include "patient.h"

Patient::Patient()
{       
    QDate tempDate(0,0,0);
    patientId = "NULL";
    firstName = "NULL";
    lastName = "NULL";
    physicianId = "NULL";
    numOfConsults = 0;
    lastConsult = tempDate;
    phoneNumber = "NULL";
}

Patient::Patient(QString fName, QString lName, QString physId)
{
    QDate tempDate(0,0,0);
    patientId = "NULL";
    firstName = fName;
    lastName = lName;
    physicianId = physId;
    numOfConsults = 0;
    lastConsult = tempDate;
}

QString Patient::getPatientId() { return patientId; }
QString Patient::getFirstName() { return firstName; }
QString Patient::getLastName() { return lastName; }
QString Patient::getPhysId() { return physicianId; }
int Patient::getNumConsults() { return numOfConsults; }
QDate Patient::getLastConsult() { return lastConsult; }
QString Patient::getPhoneNumber() { return phoneNumber; }


void Patient::setPatientId(QString pId) { patientId = pId; }
void Patient::setFirstName(QString fName) { firstName = fName; }
void Patient::setLastName(QString lName) { lastName = lName; }
void Patient::setPhysId(QString physId) { physicianId = physId; }
void Patient::setNumConsults(int numCons) { numOfConsults = numCons; }
void Patient::setLastConsult(QDate lastCons) { lastConsult = lastCons; }
void Patient::setPhoneNumber(QString pNumber) { phoneNumber = pNumber; }
