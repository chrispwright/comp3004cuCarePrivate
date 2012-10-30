#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include "connectionthread.h"

class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = 0);

    void startServer();
    
signals:
    
public slots:

protected:
    void incomingConnection(int socketDescriptor);

};

#endif // SERVER_H
