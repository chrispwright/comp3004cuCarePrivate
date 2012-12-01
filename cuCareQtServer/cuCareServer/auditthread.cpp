#include "auditthread.h"

AuditThread::AuditThread(QObject *parent) :
    QObject(parent)
{
    connect(timer, SIGNAL(timeout()), this, SLOT(runAudit()));
}

void AuditThread::run()
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
            auditTime = QTime::fromString(QString::fromLocal8Bit(split.at(0).toLocal8Bit()),"hh:mm:ss");
            break;
        }
    }
    auditFile.close();

    //Set timer to wait till that time and then trigger the audit
    QTime currentTime = QTime::currentTime();
    int currentHour = currentTime.hour();
    int currentMin = currentTime.minute();
    int currentMs = currentTime.second();

    int configHour = auditTime.hour();
    int configMin = auditTime.minute();
    int configMs = auditTime.second();

    int interval = 100;

    if(configHour > currentHour){

    }
    else if(configHour < currentHour){

    }
    else if(currentHour == configHour){
        if(configMin > currentMin){

        }
        else if(configMin < currentMin){

        }
        else if(configMin == currentMin){
            if(configMs > currentMs){

            }
            else if(configMs < currentMs){

            }
            else if(configMs == currentMs){

            }
        }
    }
    timer.setInterval(interval);
    timer.start();

    exec();
}

void AuditThread::runAudit()
{

}
