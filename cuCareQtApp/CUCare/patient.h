#ifndef PATIENT_H
#define PATIENT_H

#include <QString>
#include <QDate>

class Patient
{
public:
    Patient(); //default constructor
    Patient(QString, QString, QString); //constructor setting name and primary physician

    QString getPatientId(); //returns patient id
    QString getFirstName(); //returns patient firstname
    QString getLastName(); //returns patient lastname
    QString getPhys(); //returns primary physician id
    int getNumConsults(); //returns number of consults
    QDate getLastConsult(); //returns date of last consultation
    QString getPhoneNumber();

    void setPatientId(QString); //sets patient id
    void setFirstName(QString); //sets patient firstname
    void setLastName(QString); //sets patient lastname
    void setPhys(QString); //sets primary physician id
    void setNumConsults(int); //sets number of consults
    void setLastConsult(QDate); //sets date of last consultation*/
    void setPhoneNumber(QString);


private:
    QString patientId;
    QString firstName;
    QString lastName;
    QString primaryPhysician;
    int numOfConsults;
    QDate lastConsult;
    QString phoneNumber;
};

#endif // PATIENT_H
