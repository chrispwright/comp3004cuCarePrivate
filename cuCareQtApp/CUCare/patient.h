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
    QString getPhysId(); //returns primary physician id
    int getNumConsults(); //returns number of consults
    QDate getLastConsult(); //returns date of last consultation

    void setPatientId(QString); //sets patient id
    void setFirstName(QString); //sets patient firstname
    void setLastName(QString); //sets patient lastname
    void setPhysId(QString); //sets primary physician id
    void setNumConsults(int); //sets number of consults
    void setLastConsult(QDate); //sets date of last consultation*/

private:
    QString *patientId;
    QString *firstName;
    QString *lastName;
    QString *physicianId;
    int numOfConsults;
    QDate *lastConsult;
};

#endif // PATIENT_H
