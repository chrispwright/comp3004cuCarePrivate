#include "server.h"

Server::Server(QObject *parent) :
    QTcpServer(parent)
{
    auditTimer = new QTimer(this);
    auditManager = new AuditManager(this);
}

Server::~Server()
{
    delete auditTimer;
    delete auditManager;
}


void Server::startServer()
{
    if(!this->listen(QHostAddress::Any,8001))
    {
        qDebug() << "Server could not start!";
    }
    else
    {
        qDebug() << "Listening...";

        startAuditTimer();
    }
}

void Server::incomingConnection(int socketDescriptor)
{

    qDebug() << socketDescriptor << "Connecting...";
    ConnectionThread *clientThread = new ConnectionThread(socketDescriptor, this);
    connect(clientThread, SIGNAL(finished()), clientThread, SLOT(deleteLater()));

    clientThread->start();
}

void Server::runAudit()
{
    disconnect(auditTimer, SIGNAL(timeout()), this, SLOT(runAudit()));

    //Do the audit
    bool result = auditManager->performAudit();
    if(result){
        qDebug() << "Audit of Follow Up's completed!";
    }
    else{
        qDebug() << "Audit of Follow Up's encountered an error!";
    }
    //Reset the timer
    startAuditTimer();
}

void Server::startAuditTimer()
{
    //Read configured time from flat file database
    QFile auditFile(AUDITCONFIG_DATABASE_FILE);
    if(!auditFile.open(QIODevice::ReadOnly)) {
        qDebug() << "error" << auditFile.errorString();
    }

    QTextStream auditFileIn(&auditFile);

    QString line;
    while(!auditFileIn.atEnd()) {
        line = auditFileIn.readLine();
        QStringList split = line.split(PIPE_DELIMETER);
        if(QString::fromLocal8Bit(split.at(0).toLocal8Bit()) == "configurabletime"){
            auditTime = QTime::fromString(QString::fromLocal8Bit(split.at(1).toLocal8Bit()),"hh:mm:ss");
            break;
        }
    }
    auditFile.close();

    //Set timer to wait till that time and then trigger the audit
    QTime currentTime = QTime::currentTime();
    int interval = currentTime.msecsTo(auditTime);
    if(interval < 0){
        interval = 3600000 + interval;
    }

    qDebug() << "Milliseconds till next audit: " << interval;

    connect(auditTimer, SIGNAL(timeout()), this, SLOT(runAudit()));
    auditTimer->start(interval);
}

