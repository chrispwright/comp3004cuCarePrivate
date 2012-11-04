#include "cucare.h"
#include "ui_cucare.h"

CuCare::CuCare(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CuCare)
{
    ui->setupUi(this);
    ui->menuFile->setVisible(true);

    cuCareUser = new User();
    connection = new QTcpSocket();
    appOutput = new OutputMessages();

    //Menu Actions
    connect(ui->actionAdd_Patient, SIGNAL(triggered()), this, SLOT(createPatientAct()));
    connect(ui->actionEdit_Patient, SIGNAL(triggered()), this, SLOT(editPatientAct()));
    connect(ui->actionAdd_Consultation, SIGNAL(triggered()), this, SLOT(createPatientRecordAct()));
    connect(ui->actionEdit_Consultation, SIGNAL(triggered()), this, SLOT(editPatientRecordAct()));

    //Button Actions
    connect(ui->pushButton_AddConsultation, SIGNAL(clicked()), this, SLOT(createPatientRecordAct()));
    connect(ui->pushButton_EditConsultation, SIGNAL(clicked()), this, SLOT(editPatientRecordAct()));

    //Combo Box Actions
    connect(ui->comboBox_Patients, SIGNAL(currentIndexChanged(int)), this, SLOT(comboBoxChanged(int)));
    connect(ui->consultationList, SIGNAL(currentRowChanged(int)), this, SLOT(consultListChanged(int)));

    //Add signals for deleting patient and value changed for patient combobox

    connect(connection, SIGNAL(readyRead()), this, SLOT(readResponse()));

    connection->connectToHost(QHostAddress::LocalHost, 8001);
    loginScreen = new LoginScreen(this, connection);
    openLogin();
}

CuCare::~CuCare()
{
    delete ui;
    delete loginScreen;
}

void CuCare::openLogin()
{
    if(loginScreen->exec() == 1){

    }
    else{
        exit(0);
    }
}

void CuCare::readResponse()
{
    QByteArray response = connection->readAll();
    QString message = QString::fromLocal8Bit(response);
    QStringList messageSplit;
    if(message != ""){
        messageSplit = message.split("|");
        QByteArray messageType = messageSplit.at(0).toLocal8Bit();
        if(messageType == "validuser"){

            this->setHidden(false);
            cuCareUser->setUserId(QString::fromLocal8Bit(messageSplit.at(1).toLocal8Bit()));
            cuCareUser->setUsername(QString::fromLocal8Bit(messageSplit.at(2).toLocal8Bit()));
            cuCareUser->setFirstName(QString::fromLocal8Bit(messageSplit.at(3).toLocal8Bit()));
            cuCareUser->setLastName(QString::fromLocal8Bit(messageSplit.at(4).toLocal8Bit()));
            cuCareUser->setType(QString::fromLocal8Bit(messageSplit.at(5).toLocal8Bit()));

            //App output
            ui->textBrowser_AppOutput->append(appOutput->successfulLogin(cuCareUser));

            //Depending on the type of user setup the GUI appropriately and send proper requests to the server
            QString userType = cuCareUser->getType();
            if(userType == "Physician" || userType == "AdminAssistant"){
                connection->write("patientdatarequest|");
                ui->stackedWidget->setCurrentIndex(1);
            }
            else{
                ui->stackedWidget->setCurrentIndex(2);
            }
        }
        else if(messageType == "invaliduser"){
            this->setHidden(true);
            //Error message and cancel login
            QMessageBox messageBox;
            messageBox.warning(0,"Error","Username not found!");
            messageBox.setFixedSize(500,200);
            messageBox.show();

            openLogin();
        }
        else if(messageType == "patientdata"){
            QStringList patientConsultSplit = message.split("\n");

            QStringList patientSplit = QString::fromLocal8Bit(patientConsultSplit.at(0).toLocal8Bit()).split("~");
            QStringList consultSplit = QString::fromLocal8Bit(patientConsultSplit.at(1).toLocal8Bit()).split("~");

            //Patient data
            for(int i = 0; i<patientSplit.size(); i++){
                QStringList patientInfo = patientSplit.at(i).split("|");
                Patient *p = new Patient();
                p->setPatientId(QString::fromLocal8Bit(patientInfo.at(1).toLocal8Bit()));
                p->setFirstName(QString::fromLocal8Bit(patientInfo.at(2).toLocal8Bit()));
                p->setLastName(QString::fromLocal8Bit(patientInfo.at(3).toLocal8Bit()));
                p->setPhoneNumber(QString::fromLocal8Bit(patientInfo.at(4).toLocal8Bit()));
                p->setPhys(QString::fromLocal8Bit(patientInfo.at(5).toLocal8Bit()));
                QDate lastVisit = QDate::fromString(QString::fromLocal8Bit(patientInfo.at(6).toLocal8Bit()),"yyyyMMdd");
                p->setLastConsult(lastVisit);
                cuCarePatients.push_back(p);
            }

            //Consultation data
            for(int i = 0; i<consultSplit.size(); i++){
                QStringList consultInfo = consultSplit.at(i).split("|");
                Consultation *c = new Consultation();
                c->setPatientId(QString::fromLocal8Bit(consultInfo.at(1).toLocal8Bit()));
                c->setConsId(QString::fromLocal8Bit(consultInfo.at(2).toLocal8Bit()));
                c->setOhip(QString::fromLocal8Bit(consultInfo.at(3).toLocal8Bit()));
                c->setReason(QString::fromLocal8Bit(consultInfo.at(4).toLocal8Bit()));
                c->setDiagnosis(QString::fromLocal8Bit(consultInfo.at(5).toLocal8Bit()));
                QDate date = QDate::fromString(QString::fromLocal8Bit(consultInfo.at(6).toLocal8Bit()),"yyyyMMdd");
                c->setDate(date);
                QTime time = QTime::fromString(QString::fromLocal8Bit(consultInfo.at(7).toLocal8Bit()),"hh:mm:ss");
                c->setTime(time);
                cuCareConsultations.push_back(c);
            }

            //Reload Combo Box
            setUpComboBox();
            if(currentPatientConsultations.size() > 0){
                ui->consultationList->setCurrentRow(0);
            }
            ui->textBrowser_AppOutput->append(appOutput->dataRetrievalSuccess());

        }
        else if(messageType == "consultationdata"){
            int lastPatientIndex = ui->comboBox_Patients->currentIndex();
            cuCareConsultations.clear();
            QStringList consultSplit = message.split("~");
            for(int i = 0; i<consultSplit.size(); i++){
                QStringList consultInfo = consultSplit.at(i).split("|");
                Consultation *c = new Consultation();
                c->setPatientId(QString::fromLocal8Bit(consultInfo.at(1).toLocal8Bit()));
                c->setConsId(QString::fromLocal8Bit(consultInfo.at(2).toLocal8Bit()));
                c->setOhip(QString::fromLocal8Bit(consultInfo.at(3).toLocal8Bit()));
                c->setReason(QString::fromLocal8Bit(consultInfo.at(4).toLocal8Bit()));
                c->setDiagnosis(QString::fromLocal8Bit(consultInfo.at(5).toLocal8Bit()));
                QDate date = QDate::fromString(QString::fromLocal8Bit(consultInfo.at(6).toLocal8Bit()),"yyyyMMdd");
                c->setDate(date);
                QTime time = QTime::fromString(QString::fromLocal8Bit(consultInfo.at(7).toLocal8Bit()),"hh:mm:ss");
                c->setTime(time);
                cuCareConsultations.push_back(c);
            }
            ui->comboBox_Patients->clear();
            setUpComboBox();
            ui->comboBox_Patients->setCurrentIndex(lastPatientIndex);
            if(currentPatientConsultations.size() > 0){
                ui->consultationList->setCurrentRow(0);
            }

            ui->textBrowser_AppOutput->append(appOutput->addConsultationRecord(currentPatient));

        }
        else if(messageType == "editconsultationsuccessful"){
            ui->textBrowser_AppOutput->append(appOutput->editConsultationSuccess(currentPatient));
        }
    }
}

void CuCare::createPatientAct()
{
    addEditPatientView = new AddEditPatientWindow();
    addEditPatientView->setWindowTitle("Create Patient Record");
    addEditPatientView->setModal(true);
    addEditPatientView->setFixedSize(addEditPatientView->width(), addEditPatientView->height());

    //Need to be sending an object pointer for a new patient to the next window
    //so that information can be passed back for processing

    //If they pressed okay then process data from object and send request to server
    if(addEditPatientView->exec() == 1){

    }
    addEditPatientView->deleteLater();
}

void CuCare::editPatientAct()
{
    addEditPatientView = new AddEditPatientWindow();
    addEditPatientView->setWindowTitle("Edit Patient Record");
    addEditPatientView->setModal(true);
    addEditPatientView->setFixedSize(addEditPatientView->width(), addEditPatientView->height());

    //Need to either have patient info stored locally since last
    //request or do a request to the server for the desired patient info to edit

    //Need to be sending an object pointer for a new patient to the next window
    //so that information can be passed back for processing

    //If they pressed okay then process data from object and send request to server
    if(addEditPatientView->exec() == 1){

    }
    addEditPatientView->deleteLater();
}
void CuCare::deletePatientAct()
{
    //TODO: send a request to the server to delete the currently selected patient
    //The request will have to delete a patient and all corresponding consultation records
    //UI needs to be updated accordingly by getting an updated list of patients send back from the server
}
void CuCare::createPatientRecordAct()
{
    addEditConsultationView = new AddEditConsultationWindow();
    addEditConsultationView->setWindowTitle("Add Consultation Record");
    addEditConsultationView->setModal(true);
    addEditConsultationView->setFixedSize(addEditConsultationView->width(), addEditConsultationView->height());
    addEditConsultationView->setPatientConsult(new Consultation());
    addEditConsultationView->setCurrentUser(cuCareUser);
    addEditConsultationView->updateAccess();

    //Need to be sending an object pointer for a new patient to the next window
    //so that information can be passed back for processing

    //If they pressed okay then process data from object and send request to server
    if(addEditConsultationView->exec() == 1){

        Consultation *newConsult = addEditConsultationView->getPatientConsult();
        newConsult->setPatientId(currentPatient->getPatientId());

        if(currentPatient->getLastConsult() < newConsult->getDate() && newConsult->getDate() < QDate::currentDate()){
            currentPatient->setLastConsult(newConsult->getDate());
            ui->dateEdit_PatLastConsult->setDate(currentPatient->getLastConsult());
        }
        //Send update to server
        QByteArray message = newConsult->getAddMessage().toLocal8Bit();
        connection->write(message);
    }
    addEditConsultationView->deleteLater();
}
void CuCare::editPatientRecordAct()
{
    addEditConsultationView = new AddEditConsultationWindow();
    addEditConsultationView->setWindowTitle("Edit Consultation Record");
    addEditConsultationView->setModal(true);
    addEditConsultationView->setFixedSize(addEditConsultationView->width(), addEditConsultationView->height());

    //Get Index Of Selected Consultation
    addEditConsultationView->setPatientConsult(currentConsultation);
    addEditConsultationView->setCurrentUser(cuCareUser);
    addEditConsultationView->updateFields();
    addEditConsultationView->updateAccess();
    //Need to be sending an object pointer for a new patient to the next window
    //so that information can be passed back for processing

    //If they pressed okay then process data from object and send request to server
    if(addEditConsultationView->exec() == 1){

        //Update local copies of the consultation
        currentConsultation = addEditConsultationView->getPatientConsult();

        if(currentPatient->getLastConsult() < currentConsultation->getDate() && currentConsultation->getDate() < QDate::currentDate()){
            currentPatient->setLastConsult(currentConsultation->getDate());
            ui->dateEdit_PatLastConsult->setDate(currentPatient->getLastConsult());
        }

        //Send update to server
        QByteArray message = currentConsultation->getEditMessage().toLocal8Bit();
        connection->write(message);
    }
    addEditConsultationView->deleteLater();
}
void CuCare::viewPatientsAct()
{

}
void CuCare::runQueryAct()
{

}
void CuCare::manageUsersAct()
{

}

void CuCare::contextMenuEvent(QContextMenuEvent *event)
{

}

void CuCare::setUpComboBox()
{
    QComboBox *comboBoxPatients = ui->comboBox_Patients;

    QStringList names;
    for(int i = 0; i < cuCarePatients.size(); i++){
        QString name = cuCarePatients[i]->getFirstName() + " " + cuCarePatients[i]->getLastName();
        names << tr(name.toStdString().c_str());
    }

    for (int i=0; i<names.size(); i++) {
        comboBoxPatients->addItem(names[i], 1);
    }
}

void CuCare::comboBoxChanged(int value)
{
    if(value != -1){
        if(value <= cuCarePatients.size()){
            ui->lineEdit_patFirstName->setText(cuCarePatients[value]->getFirstName());
            ui->lineEdit_patLastName->setText(cuCarePatients[value]->getLastName());
            ui->lineEdit_patPhoneNum->setText(cuCarePatients[value]->getPhoneNumber());
            ui->dateEdit_PatLastConsult->setDate(cuCarePatients[value]->getLastConsult());
            ui->lineEdit_PatPrimaryPhysician->setText(cuCarePatients[value]->getPhys());

        }

        //Update Consultation List
        ui->consultationList->clear();
        currentPatientConsultations.clear();
        for(int i=0; i<cuCareConsultations.size(); i++){
            if(cuCareConsultations[i]->getPatientId() == cuCarePatients[value]->getPatientId()){
                QString name = "Date: " + cuCareConsultations[i]->getDate().toString() + " Time: " + cuCareConsultations[i]->getTime().toString();
                new QListWidgetItem(tr(name.toStdString().c_str()), ui->consultationList);
                currentPatientConsultations.push_back(cuCareConsultations[i]);
            }
        }

        currentPatient = cuCarePatients[value];
        currentPatientIndex = value;

        if(currentPatientConsultations.size() > 0){
            ui->consultationList->setCurrentRow(0);
        }
    }
}

void CuCare::consultListChanged(int index)
{
    if(currentPatientConsultations.size() != 0 && index != -1){
        currentConsultation = currentPatientConsultations[index];
    }
}

