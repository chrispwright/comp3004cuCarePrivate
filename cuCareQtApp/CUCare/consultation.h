#ifndef CONSULTATION_H
#define CONSULTATION_H

#include <QString>
#include <QDate>
#include <QTime>

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
    QDate getDate(); //return date
    QTime getTime();

    void setPatientId(QString); //sets patient id
    void setConsId(QString); //sets consultation id
    void setOhip(QString); //sets ohip number
    void setReason(QString); //sets reason for visit
    void setDiagnosis(QString); //sets diagnosis
    void setDate(QDate); //sets date
    void setTime(QTime);

    QString getEditMessage();
    QString getAddMessage();
private slots:
    QString toMessage();

private:
    QString patientId;        //Unique identifier to a patient
    QString consultationId;   //Unique identifier for the consultation
    QString ohip;
    QString reasonForVisit;
    QString diagnosis;
    QDate date;
    QTime time;
};

#endif // CONSULTATION_H
