#include "messagemanager.h"
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QStringList>
#include <QDebug>

MessageManager::MessageManager()
{

}

QString& MessageManager::handleLogin(QString username)
{
    bool userExists = false;

    //Read through the user database and check whether the user exists
    QFile usersFile("users.database");
    if(!usersFile.open(QIODevice::ReadOnly)) {
        qDebug() << "error" << usersFile.errorString();
    }

    QTextStream usersFileIn(&usersFile);

    QString line;
    while(!usersFileIn.atEnd()) {
        line = usersFileIn.readLine();
        QStringList userFields = line.split("|");
        QString lineUName = QString::fromLocal8Bit(userFields.at(1).toLocal8Bit());
        if(lineUName == username){
            userExists = true;
            break;
        }
    }
    usersFile.close();

    //Return message saying no user with that name was found
    if(!userExists){
        QString noUserMessage = "usernamenotfound";
        return noUserMessage;
    }
    //If they do exist then we need to actually return the user object itself and we will need to return all database data as well
    else{
        return line;
    }
}

