#include "followup.h"

FollowUp::FollowUp()
{
    consultationId = "NULL";
    status = "NULL";
    date = QDate::fromString("");
    time = QTime::fromString("");
    followUpType = "NULL";
}

FollowUp::FollowUp(QString consId, QString stat, QDate d, QTime t, QString followType)
{
    consultationId = consId;
    status = stat;
    date = d;
    time = t;
    followUpType = followType;
}

QString FollowUp::getConsId() { return consultationId; }
QString FollowUp::getStatus() { return status; }
QDate FollowUp::getDate() { return date; }
QTime FollowUp::getTime() { return time; }
QString FollowUp::getType() { return followUpType; }

void FollowUp::setConsId(QString cId) { consultationId = cId; }
void FollowUp::setStatus(QString stat) { status = stat; }
void FollowUp::setDate(QDate d) { date = d; }
void FollowUp::setTime(QTime t) { time = t; }
void FollowUp::setType(QString type) { followUpType = type; }
