#include "addeditconsultationwindow.h"
#include "ui_addeditconsultationwindow.h"

static QString PHYSICIAN = "Physician";
static QString ADMIN_ASSISTANT = "AdminAssistant";

AddEditConsultationWindow::AddEditConsultationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEditConsultationWindow)
{
    ui->setupUi(this);

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(saveConsultation()));
    connect(ui->listWidget_FollowUps, SIGNAL(currentRowChanged(int)), this, SLOT(followUpListChanged(int)));

    //Buttons
    connect(ui->pushButton_CreateFollowUp, SIGNAL(clicked()), this, SLOT(createFollowUpAct()));
    connect(ui->pushButton_EditFollowUp, SIGNAL(clicked()), this, SLOT(editFollowUpAct()));

    lastFollowUpIndex = -1;
}

AddEditConsultationWindow::~AddEditConsultationWindow()
{
    delete ui;
}

Consultation* AddEditConsultationWindow::getPatientConsult(){ return patientConsult; }
int AddEditConsultationWindow::getLastFollowUpIndex(){ return lastFollowUpIndex; }
void AddEditConsultationWindow::setCurrentPatient(Patient *patient) { currentPatient = patient; }
void AddEditConsultationWindow::setPatientConsult(Consultation *pConsult) { patientConsult = pConsult; }
void AddEditConsultationWindow::setCurrentUser(User *user){ currentUser = user; }
void AddEditConsultationWindow::setPatientConsultFollowUps(QVector<FollowUp*> patConsFUps){ patientConsultFollowUps = patConsFUps; }
void AddEditConsultationWindow::setConnection(QTcpSocket *conn){ connection = conn; }

void AddEditConsultationWindow::updateFields()
{
    ui->dateTimeEdit->setDate(patientConsult->getDate());
    ui->dateTimeEdit->setTime(patientConsult->getTime());
    ui->editOHIP->setText(patientConsult->getOhip());
    ui->editReason->setText(patientConsult->getReason());
    if(currentUser->getType() == PHYSICIAN){
        ui->editActualReason->setText(patientConsult->getActualReason());
        ui->editDiagnosis->setPlainText(patientConsult->getDiagnosis());
    }

    loadFollowUps();
}

void AddEditConsultationWindow::updateAccess()
{
    if(currentUser->getType() == ADMIN_ASSISTANT){
        ui->editActualReason->setReadOnly(true);
        ui->editDiagnosis->setReadOnly(true);
        ui->groupBox_FollowUps->setEnabled(false);
    }
}

void AddEditConsultationWindow::saveConsultation()
{
    patientConsult->setDate(ui->dateTimeEdit->date());
    patientConsult->setTime(ui->dateTimeEdit->time());
    patientConsult->setOhip(ui->editOHIP->text());
    patientConsult->setReason(ui->editReason->text());

    if(currentUser->getType() == PHYSICIAN){
        patientConsult->setActualReason(ui->editActualReason->text());
        patientConsult->setDiagnosis(ui->editDiagnosis->toPlainText());
    }
}

void AddEditConsultationWindow::loadFollowUps()
{
    ui->listWidget_FollowUps->clear();
    for(int i=0; i<patientConsultFollowUps.size(); i++){
        QString name = "Type: " + patientConsultFollowUps[i]->getType() + " Due Date: " + patientConsultFollowUps[i]->getDate().toString() + " Status: " + patientConsultFollowUps[i]->getStatus();
        new QListWidgetItem(tr(name.toStdString().c_str()), ui->listWidget_FollowUps);
    }

    if(patientConsultFollowUps.size() > 0){
        if(lastFollowUpIndex != -1)
            ui->listWidget_FollowUps->setCurrentRow(lastFollowUpIndex);
        else
            ui->listWidget_FollowUps->setCurrentRow(0);
    }
}

void AddEditConsultationWindow::followUpListChanged(int index)
{
    if(patientConsultFollowUps.size() != 0 && index != -1){
        currentFollowUp = patientConsultFollowUps[index];
        lastFollowUpIndex = index;
    }
}

void AddEditConsultationWindow::createFollowUpAct()
{
    addEditFollowUpView = new AddEditFollowUps(this);
    addEditFollowUpView->setWindowTitle("Add Follow Up (" + currentPatient->getFirstName() + " " + currentPatient->getLastName() + ")");
    addEditFollowUpView->setModal(true);
    addEditFollowUpView->setFixedSize(addEditFollowUpView->width(), addEditFollowUpView->height());
    addEditFollowUpView->setConsultationFollowUp(new FollowUp());

    //If they pressed okay then process data from object and send request to server
    if(addEditFollowUpView->exec() == 1){

        FollowUp *newFollowUp = addEditFollowUpView->getConsultationFollowUp();
        newFollowUp->setConsId(patientConsult->getConsId());
        patientConsultFollowUps.push_back(newFollowUp);

        //Send update to server

        QByteArray message = newFollowUp->getAddMessage().toLocal8Bit();
        connection->write(message);
    }
    addEditFollowUpView->deleteLater();

    //Reload Follow Up list
    loadFollowUps();
}

void AddEditConsultationWindow::editFollowUpAct()
{
    addEditFollowUpView = new AddEditFollowUps(this);
    addEditFollowUpView->setWindowTitle("Edit Follow Up (" + currentPatient->getFirstName() + " " + currentPatient->getLastName() + ")");
    addEditFollowUpView->setModal(true);
    addEditFollowUpView->setFixedSize(addEditFollowUpView->width(), addEditFollowUpView->height());

    addEditFollowUpView->setConsultationFollowUp(currentFollowUp);
    addEditFollowUpView->updateFields();

    //If they pressed okay then process data from object and send request to server
    if(addEditFollowUpView->exec() == 1){

        //Update local copies of the consultation
        currentFollowUp = addEditFollowUpView->getConsultationFollowUp();

        //Send update to server

        QByteArray message = currentFollowUp->getEditMessage().toLocal8Bit();
        connection->write(message);
    }
    addEditFollowUpView->deleteLater();

    //Reload Follow Up list
    loadFollowUps();
}
