#include "connectionthread.h"

ConnectionThread::ConnectionThread(int ID, QObject *parent) :
    QThread(parent)
{
    this->socketDescriptor = ID;
    this->mmanager = new MessageManager();
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
    QByteArray data = socket->readAll();

    qDebug() << socketDescriptor << "Data in:" << data;

    //Will need to add dispatching to message type handlers here

    QString incomingMessage = QString::fromUtf8(data);
    qDebug() << incomingMessage;

    QStringList message = incomingMessage.split('|');

    for (int i = 0; i < message.size(); ++i)
        qDebug() << message.at(i).toLocal8Bit().constData();

    //Handler for each type of message

    //Login Message Type
    if(message.size() > 0){

        QString type = QString::fromLocal8Bit(message.at(0).toLocal8Bit()); //Extract the type

        if(type == "login"){
            QString username = QString::fromLocal8Bit(message.at(1).toLocal8Bit());
            qDebug() << "Testing login";
            //Search for the username in the database of users
            QString result = mmanager->handleLogin(username);
            socket->write(result.toLocal8Bit());
        }
        else if(type == "addpatient"){

        }
        else if(type == "editpatient"){

        }
        else if(type == "deletepatient"){

        }
        else if(type == "addconsultation"){

        }
        else if(type == "editconsultation"){

        }
        else if(type == ""){

        }
    }

    //socket->write(data);
}

void ConnectionThread::disconnected()
{
    qDebug() << socketDescriptor << "Disconnected";

    socket->deleteLater();
    exit(0);
}
