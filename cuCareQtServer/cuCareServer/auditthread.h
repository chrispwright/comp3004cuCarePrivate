#ifndef AUDITTHREAD_H
#define AUDITTHREAD_H

#include <QObject>
#include <QThread>
#include <QFile>
#include <QDebug>
#include <QString>
#include <QStringList>
#include <QTimer>
#include <QTime>
#include "staticdefinitions.h"

class AuditThread : public QThread
{
    Q_OBJECT

public:
    explicit AuditThread(int ID, QObject *parent = 0);
    ~AuditThread();
    void run();

public slots:
    void runAudit();

private:
    QTimer timer;
    QTime auditTime;
};

#endif // CONNECTIONTHREAD_H

