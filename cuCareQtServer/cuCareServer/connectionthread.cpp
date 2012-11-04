#include "connectionthread.h"

ConnectionThread::ConnectionThread(int ID, QObject *parent) :
    QThread(parent)
{
    this->socketDescriptor = ID;
    this->mmanager = new MessageManager();
}

ConnectionThread::~ConnectionThread()
{
    delete mmanager;
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

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()), Qt::DirectConnection);

    qDebug() << socketDescriptor << "Client connected";

    exec();
}

void ConnectionThread::readyRead()
{
    QByteArray data = socket->readAll().trimmed();

    qDebug() << socketDescriptor << "Data in:" << data;

    //Will need to add dispatching to message type handlers here

    QString incomingMessage = QString::fromUtf8(data);
    qDebug() << incomingMessage;

    QByteArray result = mmanager->dispatchHandler(incomingMessage, socket);

    if(result != "" && result != "dataretrievalsuccessful" && result != "dataupdated")
        socket->write(result);
    qDebug() << result;
    //socket->write(data);
}

void ConnectionThread::disconnected()
{
    qDebug() << socketDescriptor << "Disconnected";

    socket->deleteLater();
    exit(0);
}
