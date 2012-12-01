#include "followup.h"

FollowUp::FollowUp()
{
    consultationId = "NULL";
    followUpId = "NULL";
    status = "NULL";
    date = QDate::fromString("");
    time = QTime::fromString("");
    followUpType = "NULL";
    details = "NULL";
}

FollowUp::FollowUp(QString consId, QString follUpId, QString stat, QDate d, QTime t, QString followType, QString det)
{
    consultationId = consId;
    followUpId = follUpId;
    status = stat;
    date = d;
    time = t;
    followUpType = followType;
    details = det;
}

QString FollowUp::getConsId() { return consultationId; }
QString FollowUp::getFollowUpId(){ return followUpId; }
QString FollowUp::getStatus() { return status; }
QDate FollowUp::getDate() { return date; }
QTime FollowUp::getTime() { return time; }
QString FollowUp::getType() { return followUpType; }
QString FollowUp::getDetails() { return details; }

void FollowUp::setConsId(QString cId) { consultationId = cId; }
void FollowUp::setFollowUpId(QString fId) { followUpId = fId; }
void FollowUp::setStatus(QString stat) { status = stat; }
void FollowUp::setDate(QDate d) { date = d; }
void FollowUp::setTime(QTime t) { time = t; }
void FollowUp::setType(QString type) { followUpType = type; }
void FollowUp::setDetails(QString det) { details = det; }

QString FollowUp::getEditMessage()
{
    QString message = "editfollowup|" + this->toMessage();
    return message;
}

QString FollowUp::getAddMessage()
{
    QString message = "addfollowup|" + this->toMessage();
    return message;
}

QString FollowUp::toMessage()
{
    QString message = this->getConsId() + "|" + this->getFollowUpId() + "|" + this->getType() + "|" + this->getDate().toString("yyyyMMdd") + "|" +
            this->getTime().toString("hh:mm:ss") + "|" + this->getStatus() + "|" + this->getDetails();
    return message;
}
