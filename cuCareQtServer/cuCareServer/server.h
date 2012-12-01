#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTimer>
#include <QTime>
#include "connectionthread.h"
#include "auditmanager.h"

class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = 0);
    ~Server();
    void startServer();
    
signals:
    
public slots:
    void startAuditTimer();
    void runAudit();

protected:
    void incomingConnection(int socketDescriptor);
    QTimer *auditTimer;
    QTime auditTime;
    AuditManager *auditManager;
};

#endif // SERVER_H
