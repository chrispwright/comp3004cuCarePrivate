#include "auditmanager.h"

AuditManager::AuditManager(QObject *parent) :
    QObject(parent)
{
}

AuditManager::~AuditManager()
{

}

bool AuditManager::performAudit()
{
    qDebug() << "Performing Audit!";

    //FollowUp Info
    QFile followUpsFile(FOLLOWUPS_DATABASE_FILE);
    if(!followUpsFile.open(QIODevice::ReadOnly)) {
        qDebug() << "error" << followUpsFile.errorString();
        return false;
    }

    QTextStream followUpsFileIn(&followUpsFile);

    QString line;
    QVector<QString> newFileContents;
    while(!followUpsFileIn.atEnd()) {
        line = followUpsFileIn.readLine();
        QStringList fileLineSplit = line.split(PIPE_DELIMETER);

        //Follow Up Info
        QDate date = QDate::fromString(QString::fromLocal8Bit(fileLineSplit.at(3).toLocal8Bit()), "yyyyMMdd");
        QTime time = QTime::fromString(QString::fromLocal8Bit(fileLineSplit.at(4).toLocal8Bit()), "hh:mm:ss");
        QTime currentTime = QTime::currentTime();
        QDate currentDate = QDate::currentDate();
        QString status = QString::fromLocal8Bit(fileLineSplit.at(5).toLocal8Bit());
        bool overdue = false;

        QString updatedFollowUp = line;

        if(date < currentDate){
            if(status == "Pending")
                overdue = true;
        }
        else if(date == currentDate){
            if(time < currentTime){
                if(status == "Pending")
                    overdue = true;
            }
        }

        if(overdue){
            updatedFollowUp = QString::fromLocal8Bit(fileLineSplit.at(0).toLocal8Bit()) + PIPE_DELIMETER + QString::fromLocal8Bit(fileLineSplit.at(1).toLocal8Bit()) + PIPE_DELIMETER +
                              QString::fromLocal8Bit(fileLineSplit.at(2).toLocal8Bit()) + PIPE_DELIMETER + QString::fromLocal8Bit(fileLineSplit.at(3).toLocal8Bit()) + PIPE_DELIMETER +
                              QString::fromLocal8Bit(fileLineSplit.at(4).toLocal8Bit()) + PIPE_DELIMETER + "Overdue" + PIPE_DELIMETER +
                              QString::fromLocal8Bit(fileLineSplit.at(6).toLocal8Bit());
        }
        newFileContents.push_back(updatedFollowUp);
    }

    followUpsFile.close();

    QFile followUpsFileWrite(FOLLOWUPS_DATABASE_FILE);
    if(!followUpsFileWrite.open(QIODevice::WriteOnly|QIODevice::Truncate)) {
        qDebug() << "error" << followUpsFileWrite.errorString();
        return false;
    }

    QTextStream followUpsFileOut(&followUpsFileWrite);

    for(int i=0; i<newFileContents.size(); i++){
        followUpsFileOut << newFileContents[i] << "\n";
    }

    followUpsFileWrite.close();

    return true;
}
