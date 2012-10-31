#ifndef FOLLOWUP_H
#define FOLLOWUP_H

#include <QString>
#include <QDate>

class FollowUp
{
public:
    FollowUp();
    FollowUp(QString, QString, QDate, QString); //consultation id, status, date, and type of follow-up

    QString getConsId(); //return the consultation id
    QString getStatus(); //return pending or complete
    QDate getDateTime();
    QString getType(); //return renewal, medical test, referral, or returnConsult

    void setConsId(QString);
    void setStatus(QString);
    void setDateTime(QDate);
    void setType(QString);

private:
    QString *consultationId;
    QString *status; //Pending or complete
    QDate *dateTime;
    QString *followUpType; //Renewal, medical test, referral, returnConsult
};

#endif // FOLLOWUP_H
