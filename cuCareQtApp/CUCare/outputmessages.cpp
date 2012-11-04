#include "outputmessages.h"

OutputMessages::OutputMessages()
{
}

QString OutputMessages::successfulLogin(User *user)
{
    QString message = "Successfully logged in as " + user->getType() + " " + user->getFirstName() + " " + user->getLastName() + ".";
    return message;
}

QString OutputMessages::addConsultationRecord(Patient *patient)
{
    QString message = "Added consultation record for the patient " + patient->getFirstName() + " " +  patient->getLastName() + ". Server database was updated.";
    return message;
}

QString OutputMessages::editConsultationSuccess(Patient *patient)
{
    QString message = "Updated consultation record for patient " + patient->getFirstName() + " " +  patient->getLastName() + ". Server database was updated.";
    return message;
}

QString OutputMessages::dataRetrievalSuccess()
{
    return "Data loaded from the server successfully.";
}
