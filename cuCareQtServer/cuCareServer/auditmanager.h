#ifndef AUDITMANAGER_H
#define AUDITMANAGER_H

#include <QObject>
#include <QDebug>
#include <QFile>
#include <QDate>
#include <QTime>
#include <QTextStream>
#include <QString>
#include <QStringList>
#include "staticdefinitions.h"

class AuditManager : public QObject
{
    Q_OBJECT
public:
    explicit AuditManager(QObject *parent = 0);
    ~AuditManager();

    bool performAudit();
signals:
    
public slots:
};

#endif // AUDITMANAGER_H
