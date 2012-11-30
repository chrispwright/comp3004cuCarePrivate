#include "consultation.h"

Consultation::Consultation()
{
    patientId = "NULL";
    consultationId = "NULL";
    ohip = "NULL";
    reasonForVisit = "NULL";
    actualReason = "";
    diagnosis = "NULL";
    date = QDate::fromString("");
    time = QTime::fromString("");
}

Consultation::Consultation(QString patId, QString ohipNum, QString reason, QString actualReas, QString diag, QDate d, QTime t)
{
    patientId = patId;
    consultationId = "NULL";
    ohip = ohipNum;
    reasonForVisit = reason;
    actualReason = actualReas;
    diagnosis = diag;
    date = d;
    time = t;
}

QString Consultation::getPatientId() { return patientId; }
QString Consultation::getConsId() { return consultationId; }
QString Consultation::getOhip() { return ohip; }
QString Consultation::getReason() { return reasonForVisit; }
QString Consultation::getActualReason() { return actualReason; }
QString Consultation::getDiagnosis() { return diagnosis; }
QDate Consultation::getDate() { return date; }
QTime Consultation::getTime() { return time; }
//QVector<FollowUp*>* Consultation::getFollowUps() { return followUps; }

void Consultation::setPatientId(QString pId) { patientId = pId; }
void Consultation::setConsId(QString cId) { consultationId = cId; }
void Consultation::setOhip(QString ohipNum) { ohip = ohipNum; }
void Consultation::setReason(QString reason) { reasonForVisit = reason; }
void Consultation::setActualReason(QString reason) { actualReason = reason; }
void Consultation::setDiagnosis(QString diag) { diagnosis = diag; }
void Consultation::setDate(QDate consDate) { date = consDate; }
void Consultation::setTime(QTime consTime) { time = consTime; }
//void Consultation::setFollowUps(QVector<FollowUp*> *fUps) { followUps = fUps; }

QString Consultation::getEditMessage()
{
    QString message = "editconsultation|" + this->toMessage();
    return message;
}

QString Consultation::getAddMessage()
{
    QString message = "addconsultation|" + this->toMessage();
    return message;
}

QString Consultation::toMessage()
{
    QString message = this->getPatientId() + "|" + this->getConsId() + "|" + this->getOhip() + "|" +
            this->getReason() + "|" + this->getActualReason() + "|" + this->getDiagnosis() + "|" + this->getDate().toString("yyyyMMdd") + '|' +
                      this->getTime().toString("hh:mm:ss");
    return message;
}

