#ifndef OUTPUTMESSAGES_H
#define OUTPUTMESSAGES_H

#include <QObject>
#include <QString>
#include <user.h>
#include <patient.h>

class OutputMessages : public QObject
{
public:
    OutputMessages();

    QString successfulLogin(User *user);
    QString addConsultationRecord(Patient *patient);
    QString editConsultationSuccess(Patient *patient);
    QString dataRetrievalSuccess();
};

#endif // OUTPUTMESSAGES_H
