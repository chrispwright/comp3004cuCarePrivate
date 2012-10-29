#include "connectionthread.h"

ConnectionThread::ConnectionThread(int ID, QObject *parent) :
    QThread(parent)
{
    this->socketDescriptor = ID;

}

void ConnectionThread::run()
{
    //thread starts here
    qDebug() << socketDescriptor << "Starting thread";
    socket = new QTcpSocket();

    if(!socket->setSocketDescriptor(this->socketDescriptor)){
        emit error(socket->error());
        return;
    }

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyReady()), Qt::DirectConnection);
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()), Qt::DirectConnection);

    qDebug() << socketDescriptor << "Client connected";

    exec();
}

void ConnectionThread::readyRead()
{
    QByteArray data = socket->readAll();

    qDebug() << socketDescriptor << "Data in:" << data;

    //Will need to add dispatching to message type handlers here
    socket->write(data);
}

void ConnectionThread::disconnected()
{
    qDebug() << socketDescriptor << "Disconnected";

    socket->deleteLater();
    exit(0);
}
