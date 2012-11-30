#ifndef FOLLOWUP_H
#define FOLLOWUP_H

#include <QString>
#include <QDate>
#include <QTime>

class FollowUp
{
public:
    FollowUp();
    FollowUp(QString consId, QString stat, QDate d, QTime t, QString followType, QString det); //consultation id, status, date, and type of follow-up

    QString getConsId(); //return the consultation id
    QString getStatus(); //return pending or complete
    QDate getDate();
    QTime getTime();
    QString getDetails();
    QString getType(); //return renewal, medical test, referral, or returnConsult

    void setConsId(QString);
    void setStatus(QString);
    void setDate(QDate);
    void setTime(QTime);
    void setType(QString);
    void setDetails(QString);

private:
    QString consultationId;
    QString status; //Pending or complete
    QDate date;
    QTime time;
    QString followUpType; //Renewal, medical test, referral, returnConsult
    QString details;
};

#endif // FOLLOWUP_H
