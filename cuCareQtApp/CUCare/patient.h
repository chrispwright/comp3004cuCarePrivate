#ifndef PATIENT_H
#define PATIENT_H

#include <QString>
#include <QDate>

class Patient
{
public:
    Patient();

private:
    QString *firstName;
    QString *lastName;
    QString *primePhysician;
    int numOfConsults;
    QDate *lastConsult;
    QVector<QString> *consultationRecords;

};

#endif // PATIENT_H
