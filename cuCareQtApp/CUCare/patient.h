#ifndef PATIENT_H
#define PATIENT_H

#include <QString>
#include <QDate>

class Patient
{
public:
    Patient();
    QString getPatientId(); //returns patient id

private:
    QString *patientId;
    QString *firstName;
    QString *lastName;
    QString *physicianId;
    int numOfConsults;
    QDate *lastConsult;
};

#endif // PATIENT_H
