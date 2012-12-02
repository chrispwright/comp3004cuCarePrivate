#ifndef PATIENT_H
#define PATIENT_H

#include <QString>
#include <QDate>

class Patient
{
public:
    Patient(); //default constructor
    Patient(QString fName, QString lName, QString phys, QString a, QString g, QString addr); //constructor setting name and primary physician

    QString getPatientId(); //returns patient id
    QString getFirstName(); //returns patient firstname
    QString getLastName(); //returns patient lastname
    QString getPhys(); //returns primary physician id
    QString getPhoneNumber();
    QString getAge();
    QString getGender();
    QString getAddress();

    void setPatientId(QString); //sets patient id
    void setFirstName(QString); //sets patient firstname
    void setLastName(QString); //sets patient lastname
    void setPhys(QString); //sets primary physician id
    void setPhoneNumber(QString);
    void setAge(QString);
    void setGender(QString);
    void setAddress(QString);

private:
    QString patientId;
    QString firstName;
    QString lastName;
    QString primaryPhysician;
    QString phoneNumber;
    QString age;
    QString gender;
    QString address;
};

#endif // PATIENT_H
