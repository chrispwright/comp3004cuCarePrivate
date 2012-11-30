#ifndef CONSULTATION_H
#define CONSULTATION_H

#include <QString>
#include <QDate>
#include <QTime>
#include "followup.h"

class Consultation
{
public:
    Consultation(); //default constructor
    Consultation(QString patId, QString ohipNum, QString reason, QString actualReason, QString diag, QDate d, QTime t);

    QString getPatientId(); //returns patient id
    QString getConsId(); //returns consultation id
    QString getOhip(); //returns ohip number
    QString getReason(); //returns reason for visit
    QString getActualReason();
    QString getDiagnosis(); //returns diagnosis
    QDate getDate(); //return date
    QTime getTime();
    //QVector<FollowUp*> getFollowUps();

    void setPatientId(QString); //sets patient id
    void setConsId(QString); //sets consultation id
    void setOhip(QString); //sets ohip number
    void setReason(QString); //sets reason for visit
    void setActualReason(QString); //sets reason for visit
    void setDiagnosis(QString); //sets diagnosis
    void setDate(QDate); //sets date
    void setTime(QTime);
    //void setFollowUps(QVector<FollowUp*>);

    QString getEditMessage();
    QString getAddMessage();
private slots:
    QString toMessage();

private:
    QString patientId;        //Unique identifier to a patient
    QString consultationId;   //Unique identifier for the consultation
    QString ohip;
    QString reasonForVisit;
    QString actualReason;
    QString diagnosis;
    QDate date;
    QTime time;
    //QVector<FollowUp*> followUps;
};

#endif // CONSULTATION_H
