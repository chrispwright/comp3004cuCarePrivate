#ifndef FOLLOWUP_H
#define FOLLOWUP_H

#include <QString>
#include <QDate>

class FollowUp
{
public:
    FollowUp();

private:
    QString *consultationId;
    QString *status;
    QDate *dateTime;
    QString *followUpType;
};

#endif // FOLLOWUP_H
