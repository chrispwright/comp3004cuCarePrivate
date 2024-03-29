#include "messagemanager.h"

MessageManager::MessageManager()
{

}

MessageManager::~MessageManager()
{

}

QByteArray MessageManager::dispatchHandler(QString incomingMessage, QTcpSocket *socket)
{
    QStringList message = incomingMessage.split('|');

    if(message.size() > 0){

        QString messageType = QString::fromLocal8Bit(message.at(0).toLocal8Bit()); //Extract the type

        //Call Handler for each type of message
        if(messageType == LOGIN_REQUEST){
            QString username = QString::fromLocal8Bit(message.at(1).toLocal8Bit());

            //Search for the username in the database of users
            QByteArray result = handleLogin(username).toLocal8Bit();
            return result;
        }
        else if(messageType == PATIENT_DATA_REQUEST){
            QByteArray result = handleDataRequest(socket).toLocal8Bit();
            return result;
        }
        else if(messageType == ADD_PATIENT_REQUEST){

        }
        else if(messageType == EDIT_PATIENT_REQUEST){

        }
        else if(messageType == DELETE_PATIENT_REQUEST){

        }
        else if(messageType == ADD_CONSULTATION_REQUEST){
            QByteArray result = handleAddConsultation(incomingMessage, socket).toLocal8Bit();
            return result;
        }
        else if(messageType == EDIT_CONSULTATION_REQUEST){
            QByteArray result = handleEditConsultation(incomingMessage).toLocal8Bit();
            return result;
        }
        else if(messageType == ADD_FOLLOWUP_REQUEST){
            QByteArray result = handleAddFollowUp(incomingMessage, socket).toLocal8Bit();
            return result;
        }
        else if(messageType == EDIT_FOLLOWUP_REQUEST){
            QByteArray result = handleEditFollowUp(incomingMessage, socket).toLocal8Bit();
            return result;
        }
    }
    return INVALID_MESSAGE_TYPE.toLocal8Bit();
}

QString MessageManager::handleLogin(QString username)
{
    bool userExists = false;

    //Read through the user database and check whether the user exists
    QFile usersFile(USERS_DATABASE_FILE);
    if(!usersFile.open(QIODevice::ReadOnly)) {
        qDebug() << "error" << usersFile.errorString();
    }

    QTextStream usersFileIn(&usersFile);

    QString line;
    while(!usersFileIn.atEnd()) {
        line = usersFileIn.readLine();
        QStringList userFields = line.split(PIPE_DELIMETER);
        QString lineUName = QString::fromLocal8Bit(userFields.at(1).toLocal8Bit());
        if(lineUName == username){
            userExists = true;
            break;
        }
    }
    usersFile.close();

    //User found return the full user info
    if(userExists){
        line.prepend(VALID_USER_HEADER);
        return line;
    }
    //Invalid User
    else{
        QString noUserMessage = INVALID_USER_HEADER;
        return noUserMessage;
    }
}

QString MessageManager::handleDataRequest(QTcpSocket *socket)
{
    QByteArray returnData;

    //Patient Info
    QFile patientsFile(PATIENTS_DATABASE_FILE);
    if(!patientsFile.open(QIODevice::ReadOnly)) {
        qDebug() << "error" << patientsFile.errorString();
    }

    QTextStream patientsFileIn(&patientsFile);

    QString line;
    while(!patientsFileIn.atEnd()) {
        line = patientsFileIn.readLine();
        line.prepend(PATIENT_HEADER);
        returnData.append(line);
        returnData.append(TILDA_DELIMETER);
    }
    returnData.chop(1);
    returnData.append("::");

    patientsFile.close();

    //Consultation Info
    QFile consultsFile(CONSULTATIONS_DATABASE_FILE);
    if(!consultsFile.open(QIODevice::ReadOnly)) {
        qDebug() << "error" << consultsFile.errorString();
    }

    QTextStream consultsFileIn(&consultsFile);

    QString line2;
    while(!consultsFileIn.atEnd()) {
        line2 = consultsFileIn.readLine();
        line2.prepend(CONSULTATION_HEADER);
        returnData.append(line2);
        returnData.append(TILDA_DELIMETER);
    }
    returnData.chop(1);
    returnData.append("::");

    consultsFile.close();

    //FollowUp Info
    QFile followUpsFile(FOLLOWUPS_DATABASE_FILE);
    if(!followUpsFile.open(QIODevice::ReadOnly)) {
        qDebug() << "error" << followUpsFile.errorString();
    }

    QTextStream followUpsFileIn(&followUpsFile);

    QString line3;
    while(!followUpsFileIn.atEnd()) {
        line3 = followUpsFileIn.readLine();
        line3.prepend(FOLLOWUP_HEADER);
        returnData.append(line3);
        returnData.append(TILDA_DELIMETER);
    }
    returnData.chop(1);
    returnData.append("::");
    followUpsFile.close();

    //Physician Info
    QFile usersFile(USERS_DATABASE_FILE);
    if(!usersFile.open(QIODevice::ReadOnly)) {
        qDebug() << "error" << usersFile.errorString();
    }

    QTextStream usersFileIn(&usersFile);

    QString line4;
    while(!usersFileIn.atEnd()) {
        line4 = usersFileIn.readLine();
        QStringList lineSplit = line4.split(PIPE_DELIMETER);
        if(QString::fromLocal8Bit(lineSplit.at(4).toLocal8Bit()) == "Physician"){
            line4.prepend(PHYSICIAN_HEADER);
            returnData.append(line4);
            returnData.append(TILDA_DELIMETER);
        }
    }
    returnData.chop(1);
    usersFile.close();

    socket->write(returnData);

    return DATA_RETRIEVAL_SUCCESS;
}

QString MessageManager::handleAddConsultation(QString incomingMessage, QTcpSocket *socket)
{
    QString newConsultId = getUniqueId("consultationid", CONSULTATION_ID_HEADER);

    QStringList messageSplit = incomingMessage.split(PIPE_DELIMETER);
    messageSplit[2] = newConsultId;

    //Add consult
    QFile consultsFile(CONSULTATIONS_DATABASE_FILE);
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
    QString addedConsultation = QString::fromLocal8Bit(messageSplit.at(1).toLocal8Bit()) + PIPE_DELIMETER + QString::fromLocal8Bit(messageSplit.at(2).toLocal8Bit()) + PIPE_DELIMETER +
                                QString::fromLocal8Bit(messageSplit.at(3).toLocal8Bit()) + PIPE_DELIMETER + QString::fromLocal8Bit(messageSplit.at(4).toLocal8Bit()) + PIPE_DELIMETER +
                                QString::fromLocal8Bit(messageSplit.at(5).toLocal8Bit()) + PIPE_DELIMETER + QString::fromLocal8Bit(messageSplit.at(6).toLocal8Bit()).replace("\n",";;;") + PIPE_DELIMETER +
                                QString::fromLocal8Bit(messageSplit.at(7).toLocal8Bit()) + PIPE_DELIMETER + QString::fromLocal8Bit(messageSplit.at(8).toLocal8Bit());

    consultsFileIn << addedConsultation.toStdString().c_str();
    consultsFileIn << "\n";

    newFileContents.push_back(addedConsultation);

    consultsFile.close();

    //Return message with all consults
    QString message;
    for(int i=0; i<newFileContents.size(); i++){
        message.append(CONSULTATION_HEADER);
        message.append(newFileContents[i]);
        message.append(TILDA_DELIMETER);
    }
    message.chop(1);

    socket->write(message.toLocal8Bit());
    return DATA_UPDATED;
}

QString MessageManager::handleEditConsultation(QString incomingMessage)
{
    QStringList messageSplit = incomingMessage.split(PIPE_DELIMETER);
    QString consultationId = QString::fromLocal8Bit(messageSplit.at(2).toLocal8Bit());

    //Consultation Info
    QFile consultsFile(CONSULTATIONS_DATABASE_FILE);
    if(!consultsFile.open(QIODevice::ReadOnly)) {
        qDebug() << "error" << consultsFile.errorString();
    }

    QTextStream consultsFileIn(&consultsFile);

    QString line;
    QVector<QString> newFileContents;
    while(!consultsFileIn.atEnd()) {
        line = consultsFileIn.readLine();
        QStringList fileLineSplit = line.split(PIPE_DELIMETER);
        //If the consultation ids match then update the line
        if(QString::fromLocal8Bit(fileLineSplit.at(1).toLocal8Bit()) == consultationId){
            line = QString::fromLocal8Bit(messageSplit.at(1).toLocal8Bit()) + PIPE_DELIMETER +  QString::fromLocal8Bit(messageSplit.at(2).toLocal8Bit()) + PIPE_DELIMETER +
                   QString::fromLocal8Bit(messageSplit.at(3).toLocal8Bit()) + PIPE_DELIMETER +  QString::fromLocal8Bit(messageSplit.at(4).toLocal8Bit()) + PIPE_DELIMETER +
                   QString::fromLocal8Bit(messageSplit.at(5).toLocal8Bit()) + PIPE_DELIMETER +  QString::fromLocal8Bit(messageSplit.at(6).toLocal8Bit()).replace(";;;","\n") + PIPE_DELIMETER +
                   QString::fromLocal8Bit(messageSplit.at(7).toLocal8Bit()) + PIPE_DELIMETER +  QString::fromLocal8Bit(messageSplit.at(8).toLocal8Bit());
        }
        newFileContents.push_back(line);
    }

    consultsFile.close();

    QFile consultsFileWrite(CONSULTATIONS_DATABASE_FILE);
    if(!consultsFileWrite.open(QIODevice::WriteOnly|QIODevice::Truncate)) {
        qDebug() << "error" << consultsFileWrite.errorString();
    }

    QTextStream consultsFileOut(&consultsFileWrite);

    for(int i=0; i<newFileContents.size(); i++){
        consultsFileOut << newFileContents[i] << "\n";
    }

    consultsFileWrite.close();

    return EDIT_CONSULTATION_SUCCESS;
}

QString MessageManager::handleAddFollowUp(QString incomingMessage, QTcpSocket *socket)
{
    QString newFollowUpId = getUniqueId("followupid", FOLLOWUP_ID_HEADER);

    QStringList messageSplit = incomingMessage.split(PIPE_DELIMETER);
    messageSplit[2] = newFollowUpId;

    //Add followup
    QFile followUpsFile(FOLLOWUPS_DATABASE_FILE);
    if(!followUpsFile.open(QIODevice::ReadWrite)) {
        qDebug() << "error" << followUpsFile.errorString();
    }

    QTextStream followUpsFileIn(&followUpsFile);

    QString line2;
    QVector<QString> newFileContents;
    while(!followUpsFileIn.atEnd()) {
        line2 = followUpsFileIn.readLine();
        newFileContents.push_back(line2);
    }
    QString addedFollowUp = QString::fromLocal8Bit(messageSplit.at(1).toLocal8Bit()) + PIPE_DELIMETER + QString::fromLocal8Bit(messageSplit.at(2).toLocal8Bit()) + PIPE_DELIMETER +
                            QString::fromLocal8Bit(messageSplit.at(3).toLocal8Bit()) + PIPE_DELIMETER + QString::fromLocal8Bit(messageSplit.at(4).toLocal8Bit()) + PIPE_DELIMETER +
                            QString::fromLocal8Bit(messageSplit.at(5).toLocal8Bit()) + PIPE_DELIMETER + QString::fromLocal8Bit(messageSplit.at(6).toLocal8Bit()) + PIPE_DELIMETER +
                            QString::fromLocal8Bit(messageSplit.at(7).toLocal8Bit()).replace("\n",";;;");

    followUpsFileIn << addedFollowUp.toStdString().c_str();
    followUpsFileIn << "\n";

    newFileContents.push_back(addedFollowUp);

    followUpsFile.close();

    //Return message with all followups
    QString message;
    for(int i=0; i<newFileContents.size(); i++){
        message.append(FOLLOWUP_HEADER);
        message.append(newFileContents[i]);
        message.append(TILDA_DELIMETER);
    }
    message.chop(1);

    socket->write(message.toLocal8Bit());
    return DATA_UPDATED;
}

QString MessageManager::handleEditFollowUp(QString incomingMessage, QTcpSocket *socket)
{
    QStringList messageSplit = incomingMessage.split(PIPE_DELIMETER);
    QString followUpId = QString::fromLocal8Bit(messageSplit.at(2).toLocal8Bit());

    //FollowUp Info
    QFile followUpsFile(FOLLOWUPS_DATABASE_FILE);
    if(!followUpsFile.open(QIODevice::ReadOnly)) {
        qDebug() << "error" << followUpsFile.errorString();
    }

    QTextStream followUpsFileIn(&followUpsFile);

    QString line;
    QVector<QString> newFileContents;
    while(!followUpsFileIn.atEnd()) {
        line = followUpsFileIn.readLine();
        QStringList fileLineSplit = line.split(PIPE_DELIMETER);
        //If the consultation ids match then update the line
        if(QString::fromLocal8Bit(fileLineSplit.at(1).toLocal8Bit()) == followUpId){
            line = QString::fromLocal8Bit(messageSplit.at(1).toLocal8Bit()) + PIPE_DELIMETER +  QString::fromLocal8Bit(messageSplit.at(2).toLocal8Bit()) + PIPE_DELIMETER +
                   QString::fromLocal8Bit(messageSplit.at(3).toLocal8Bit()) + PIPE_DELIMETER +  QString::fromLocal8Bit(messageSplit.at(4).toLocal8Bit()) + PIPE_DELIMETER +
                   QString::fromLocal8Bit(messageSplit.at(5).toLocal8Bit()) + PIPE_DELIMETER +  QString::fromLocal8Bit(messageSplit.at(6).toLocal8Bit()) + PIPE_DELIMETER +
                   QString::fromLocal8Bit(messageSplit.at(7).toLocal8Bit()).replace(";;;","\n");
        }
        newFileContents.push_back(line);
    }

    followUpsFile.close();

    QFile followUpsFileWrite(FOLLOWUPS_DATABASE_FILE);
    if(!followUpsFileWrite.open(QIODevice::WriteOnly|QIODevice::Truncate)) {
        qDebug() << "error" << followUpsFileWrite.errorString();
    }

    QTextStream followUpsFileOut(&followUpsFileWrite);

    for(int i=0; i<newFileContents.size(); i++){
        followUpsFileOut << newFileContents[i] << "\n";
    }

    followUpsFileWrite.close();

    //Return message with all followups
    QString message;
    for(int i=0; i<newFileContents.size(); i++){
        message.append(FOLLOWUP_HEADER);
        message.append(newFileContents[i]);
        message.append(TILDA_DELIMETER);
    }
    message.chop(1);

    socket->write(message.toLocal8Bit());
    return DATA_UPDATED;
}

QString MessageManager::getUniqueId(QString type, QString header)
{
    QString returnId;

    //Unique ID Access
    QFile uniqueIdsFile(UNIQUEIDS_DATABASE_FILE);
    if(!uniqueIdsFile.open(QIODevice::ReadOnly)) {
        qDebug() << "error" << uniqueIdsFile.errorString();
    }

    QTextStream uniqueIdsFileIn(&uniqueIdsFile);

    QString line;
    QVector<QString> newIdFileContents;
    while(!uniqueIdsFileIn.atEnd()) {
        line = uniqueIdsFileIn.readLine();
        QStringList split = line.split(PIPE_DELIMETER);
        if(QString::fromLocal8Bit(split.at(0).toLocal8Bit()) == type){
            returnId = QString::fromLocal8Bit(split.at(1).toLocal8Bit());
            line = header;
            int returnIdUpdated = returnId.toInt();
            returnIdUpdated++;
            QString newIdUpdatedString = QString::number(returnIdUpdated);
            line.append(newIdUpdatedString);
        }
        newIdFileContents.push_back(line);
    }

    uniqueIdsFile.close();

    //Update ID's
    QFile uniqueIdsFileWrite(UNIQUEIDS_DATABASE_FILE);
    if(!uniqueIdsFileWrite.open(QIODevice::WriteOnly|QIODevice::Truncate)) {
        qDebug() << "error" << uniqueIdsFileWrite.errorString();
    }

    QTextStream uniqueIdsFileWriteOut(&uniqueIdsFileWrite);

    for(int i=0; i<newIdFileContents.size(); i++){
        uniqueIdsFileWriteOut << newIdFileContents[i] << "\n";
    }

    uniqueIdsFileWrite.close();

    return returnId;
}
