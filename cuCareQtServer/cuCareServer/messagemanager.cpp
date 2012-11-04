#include "messagemanager.h"
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QStringList>
#include <QDebug>

MessageManager::MessageManager()
{

}

MessageManager::~MessageManager()
{

}

QByteArray MessageManager::dispatchHandler(QString incomingMessage, QTcpSocket *socket)
{
    QStringList message = incomingMessage.split('|');

    for (int i = 0; i < message.size(); ++i)
        qDebug() << message.at(i).toLocal8Bit().constData();

    //Handler for each type of message
    if(message.size() > 0){

        QString messageType = QString::fromLocal8Bit(message.at(0).toLocal8Bit()); //Extract the type

        if(messageType == "login"){
            QString username = QString::fromLocal8Bit(message.at(1).toLocal8Bit());
            qDebug() << "Testing login";
            //Search for the username in the database of users
            QString result = this->handleLogin(username);
            QByteArray resultData = result.toLocal8Bit();
            return resultData;
        }
        else if(messageType == "patientdatarequest"){
            QByteArray result = this->handleDataRequest(socket).toLocal8Bit();
            return result;
        }
        else if(messageType == "addpatient"){

        }
        else if(messageType == "editpatient"){

        }
        else if(messageType == "deletepatient"){

        }
        else if(messageType == "addconsultation"){
            QByteArray result = this->handleAddConsultation(incomingMessage, socket).toLocal8Bit();
            return result;
        }
        else if(messageType == "editconsultation"){
            QByteArray result = this->handleEditConsultation(incomingMessage).toLocal8Bit();
            return result;
        }
        else if(messageType == ""){

        }
    }
}

QString MessageManager::handleLogin(QString username)
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
        qDebug() << lineUName;
        qDebug() << username;
        if(lineUName == username){
            userExists = true;
            break;
        }
    }
    usersFile.close();

    //Return message saying no user with that name was found
    if(userExists){
        line.prepend("validuser|");
        return line;
    }
    //If they do exist then we need to actually return the user object itself and we will need to return all database data as well
    else{
        QString noUserMessage = "invaliduser|";
        return noUserMessage;
    }
}

QString MessageManager::handleDataRequest(QTcpSocket *socket)
{
    QByteArray returnData;

    //Patient Info
    QFile patientsFile("patients.database");
    if(!patientsFile.open(QIODevice::ReadOnly)) {
        qDebug() << "error" << patientsFile.errorString();
    }

    QTextStream patientsFileIn(&patientsFile);

    QString line;
    while(!patientsFileIn.atEnd()) {
        line = patientsFileIn.readLine();
        line.prepend("patientdata|");
        returnData.append(line);
        returnData.append("~");
    }
    returnData.chop(1);
    returnData.append("\n");

    //Consultation Info
    QFile consultsFile("consultations.database");
    if(!consultsFile.open(QIODevice::ReadOnly)) {
        qDebug() << "error" << consultsFile.errorString();
    }

    QTextStream consultsFileIn(&consultsFile);

    QString line2;
    while(!consultsFileIn.atEnd()) {
        line2 = consultsFileIn.readLine();
        line2.prepend("consultationdata|");
        returnData.append(line2);
        returnData.append("~");
    }
    returnData.chop(1);

    socket->write(returnData);

    consultsFile.close();
    return "dataretrievalsuccessful";
}

QString MessageManager::handleAddConsultation(QString incomingMessage, QTcpSocket *socket)
{
    QString newConsultId; //New Unique Id for Consultation

    //Unique ID Access
    QFile uniqueIdsFile("uniqueids.database");
    if(!uniqueIdsFile.open(QIODevice::ReadOnly)) {
        qDebug() << "error" << uniqueIdsFile.errorString();
    }

    QTextStream uniqueIdsFileIn(&uniqueIdsFile);

    QString line;
    QVector<QString> newIdFileContents;
    while(!uniqueIdsFileIn.atEnd()) {
        line = uniqueIdsFileIn.readLine();
        QStringList split = line.split("|");
        if(QString::fromLocal8Bit(split.at(0).toLocal8Bit()) == "consultationid"){
            newConsultId = QString::fromLocal8Bit(split.at(1).toLocal8Bit());
            qDebug() << "THE CONSULT ID " << newConsultId;
            line = "consultationid|";
            int newConsultIdUpdated = newConsultId.toInt();
            newConsultIdUpdated++;
            QString newConsultIdUpdatedString = QString::number(newConsultIdUpdated);
            qDebug() << "THE UPDATED CONSULT ID " << newConsultIdUpdatedString;
            line.append(newConsultIdUpdatedString);
            qDebug() << line;
        }
        newIdFileContents.push_back(line);
    }

    uniqueIdsFile.close();

    //Update ID's
    QFile uniqueIdsFileWrite("uniqueids.database");
    if(!uniqueIdsFileWrite.open(QIODevice::WriteOnly|QIODevice::Truncate)) {
        qDebug() << "error" << uniqueIdsFileWrite.errorString();
    }

    QTextStream uniqueIdsFileWriteOut(&uniqueIdsFileWrite);

    for(int i=0; i<newIdFileContents.size(); i++){
        uniqueIdsFileWriteOut << newIdFileContents[i] << "\n";
    }

    uniqueIdsFileWrite.close();

    QStringList messageSplit = incomingMessage.split("|");
    messageSplit[2] = newConsultId;

    //Add consult
    QFile consultsFile("consultations.database");
    if(!consultsFile.open(QIODevice::ReadWrite)) {
        qDebug() << "error" << consultsFile.errorString();
    }

    QTextStream consultsFileIn(&consultsFile);

    QString line2;
    QVector<QString> newFileContents;
    while(!consultsFileIn.atEnd()) {
        line2 = consultsFileIn.readLine();
        newFileContents.push_back(line2);
    }
    QString addedConsultation = QString::fromLocal8Bit(messageSplit.at(1).toLocal8Bit()) + "|" + QString::fromLocal8Bit(messageSplit.at(2).toLocal8Bit()) + "|" +
                                QString::fromLocal8Bit(messageSplit.at(3).toLocal8Bit()) + "|" + QString::fromLocal8Bit(messageSplit.at(4).toLocal8Bit()) + "|" +
                                QString::fromLocal8Bit(messageSplit.at(5).toLocal8Bit()) + "|" + QString::fromLocal8Bit(messageSplit.at(6).toLocal8Bit()) + "|" +
                                QString::fromLocal8Bit(messageSplit.at(7).toLocal8Bit());

    consultsFileIn << addedConsultation.toStdString().c_str();
    consultsFileIn << "\n";

    newFileContents.push_back(addedConsultation);

    consultsFile.close();

    //Return message with all consults
    QString message;
    for(int i=0; i<newFileContents.size(); i++){
        message.append("consultationdata|");
        message.append(newFileContents[i]);
        message.append("~");
    }
    message.chop(1);

    socket->write(message.toLocal8Bit());
    return "dataupdated";
}


QString MessageManager::handleEditConsultation(QString incomingMessage)
{
    QStringList messageSplit = incomingMessage.split("|");
    QString consultationId = QString::fromLocal8Bit(messageSplit.at(2).toLocal8Bit());

    //Consultation Info
    QFile consultsFile("consultations.database");
    if(!consultsFile.open(QIODevice::ReadOnly)) {
        qDebug() << "error" << consultsFile.errorString();
    }

    QTextStream consultsFileIn(&consultsFile);

    QString line;
    QVector<QString> newFileContents;
    while(!consultsFileIn.atEnd()) {
        line = consultsFileIn.readLine();
        QStringList fileLineSplit = line.split("|");
        qDebug() << "GOT HERE BLAH1";
        //If the consultation ids match then update the line
        if(QString::fromLocal8Bit(fileLineSplit.at(1).toLocal8Bit()) == consultationId){
            line = QString::fromLocal8Bit(messageSplit.at(1).toLocal8Bit()) + "|" +  QString::fromLocal8Bit(messageSplit.at(2).toLocal8Bit()) + "|" +
                   QString::fromLocal8Bit(messageSplit.at(3).toLocal8Bit()) + "|" +  QString::fromLocal8Bit(messageSplit.at(4).toLocal8Bit()) + "|" +
                   QString::fromLocal8Bit(messageSplit.at(5).toLocal8Bit()) + "|" +  QString::fromLocal8Bit(messageSplit.at(6).toLocal8Bit()) + "|" +
                   QString::fromLocal8Bit(messageSplit.at(7).toLocal8Bit());
        }
        newFileContents.push_back(line);
        qDebug() << "GOT HERE BLAH3";
    }

    consultsFile.close();

    qDebug() << "GOT HERE BLAH2";

    QFile consultsFileWrite("consultations.database");
    if(!consultsFileWrite.open(QIODevice::WriteOnly|QIODevice::Truncate)) {
        qDebug() << "error" << consultsFileWrite.errorString();
    }

    QTextStream consultsFileOut(&consultsFileWrite);

    for(int i=0; i<newFileContents.size(); i++){
        consultsFileOut << newFileContents[i] << "\n";
    }

    consultsFileWrite.close();

    return "editconsultationsuccessful";
}

