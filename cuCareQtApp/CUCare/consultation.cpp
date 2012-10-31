#include "consultation.h"

Consultation::Consultation()
{
    QDate tempDate(0,0,0);
    *patientId = "NULL";
    *consultationId = "NULL";
    *ohip = "NULL";
    *reasonForVisit = "NULL";
    *diagnosis = "NULL";
    *dateTime = tempDate;
}

Consultation::Consultation(QString pId, QString ohipNum, QString reason, QString diag, QDate date)
{
    *patientId = pId;
    *consultationId = "NULL";
    *ohip = ohipNum;
    *reasonForVisit = reason;
    *diagnosis = diag;
    *dateTime = date;
}

QString Consultation::getPatientId() { return *patientId; }
QString Consultation::getConsId() { return *consultationId; }
QString Consultation::getOhip() { return *ohip; }
QString Consultation::getReason() { return *reasonForVisit; }
QString Consultation::getDiagnosis() { return *diagnosis; }
QDate Consultation::getDateOfCons() { return *dateTime; }

void Consultation::setPatientId(QString pId) { *patientId = pId; }
void Consultation::setConsId(QString cId) { *consultationId = cId; }
void Consultation::setOhip(QString ohipNum) { *ohip = ohipNum; }
void Consultation::setReason(QString reason) { *reasonForVisit = reason; }
void Consultation::setDiagnosis(QString diag) { *diagnosis = diag; }
void Consultation::setDateOfCons(QDate date) { *dateTime = date; }
