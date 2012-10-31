#ifndef CONSULTATION_H
#define CONSULTATION_H

#include <QString>
#include <QDate>

class Consultation
{
public:
    Consultation(); //default constructor
    Consultation(QString, QString, QString, QString, QDate); //patient id, ohip number, reason, diagnosis, and date

    QString getPatientId(); //returns patient id
    QString getConsId(); //returns consultation id
    QString getOhip(); //returns ohip number
    QString getReason(); //returns reason for visit
    QString getDiagnosis(); //returns diagnosis
    QDate getDateOfCons(); //return date

    void setPatientId(QString); //sets patient id
    void setConsId(QString); //sets consultation id
    void setOhip(QString); //sets ohip number
    void setReason(QString); //sets reason for visit
    void setDiagnosis(QString); //sets diagnosis
    void setDateOfCons(QDate); //sets date

private:
    QString *patientId;        //Unique identifier to a patient
    QString *consultationId;   //Unique identifier for the consultation
    QString *ohip;
    QString *reasonForVisit;
    QString *diagnosis;
    QDate *dateTime;
};

#endif // CONSULTATION_H
