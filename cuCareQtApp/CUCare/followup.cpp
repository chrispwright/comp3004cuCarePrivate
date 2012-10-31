#include "followup.h"

FollowUp::FollowUp()
{
    QDate tempDate(0,0,0);
    *consultationId = "NULL";
    *status = "NULL";
    *dateTime = tempDate;
    *followUpType = "NULL";
}

FollowUp::FollowUp(QString cId, QString stat, QDate d, QString type)
{
    *consultationId = cId;
    *status = stat;
    *dateTime = d;
    *followUpType = type;
}

QString FollowUp::getConsId() { return *consultationId; }
QString FollowUp::getStatus() { return *status; }
QDate FollowUp::getDateTime() { return *dateTime; }
QString FollowUp::getType() { return *followUpType; }

void FollowUp::setConsId(QString cId) { *consultationId = cId; }
void FollowUp::setStatus(QString stat) { *status = stat; }
void FollowUp::setDateTime(QDate d) { *dateTime = d; }
void FollowUp::setType(QString type) { *followUpType = type; }
