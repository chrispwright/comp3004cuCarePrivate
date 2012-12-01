#ifndef MESSAGEMANAGER_H
#define MESSAGEMANAGER_H

#include <QDebug>
#include <QTcpSocket>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QStringList>
#include "staticdefinitions.h"

class MessageManager
{
public:
   MessageManager();
   ~MessageManager();

   QByteArray dispatchHandler(QString message, QTcpSocket *socket);
   QString handleLogin(QString username);
   QString handleDataRequest(QTcpSocket *socket);
   //QString addpatient();
   //QString editpatient();
   //QString deletepatient();
   QString handleAddConsultation(QString incomingMessage, QTcpSocket *socket);
   QString handleEditConsultation(QString incomingMessage);
   QString handleAddFollowUp(QString incomingMessage, QTcpSocket *socket);
   QString handleEditFollowUp(QString incomingMessage, QTcpSocket *socket);

   QString getUniqueId(QString type, QString header);
};

#endif // MESSAGEMANAGER_H
