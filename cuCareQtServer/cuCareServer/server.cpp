#include "server.h"

Server::Server(QObject *parent) :
    QTcpServer(parent)
{

}

void Server::startServer()
{
    if(!this->listen(QHostAddress::Any,8000))
    {
        qDebug() << "Server could not start!";
    }
    else
    {
        qDebug() << "Listening...";
    }
}

void Server::incomingConnection(int socketDescriptor)
{
    qDebug() << socketDescriptor << "Connecting...";
    ConnectionThread *clientThread = new ConnectionThread(socketDescriptor, this);
    connect(clientThread, SIGNAL(finished()), clientThread, SLOT(deleteLater()));

    clientThread->start();
}
