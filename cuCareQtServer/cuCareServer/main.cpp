#include <QtCore/QCoreApplication>
#include "server.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Server cuCareServer;

    cuCareServer.startServer();
    return a.exec();
}
