#ifndef CONNECTIONTHREAD_H
#define CONNECTIONTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include <QString>
#include <QStringList>
#include "messagemanager.h"

class ConnectionThread : public QThread
{
    Q_OBJECT

public:
    explicit ConnectionThread(int ID, QObject *parent = 0);
    ~ConnectionThread();
    void run();

signals:
    void error(QTcpSocket::SocketError socketError);
public slots:
    void readyRead();
    void disconnected();

private:
    QTcpSocket *socket;
    int socketDescriptor;
    MessageManager *mmanager;
};

#endif // CONNECTIONTHREAD_H
