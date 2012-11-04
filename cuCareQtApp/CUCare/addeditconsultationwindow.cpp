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
}

AddEditConsultationWindow::~AddEditConsultationWindow()
{
    delete ui;
}

Consultation* AddEditConsultationWindow::getPatientConsult(){ return patientConsult; }
void AddEditConsultationWindow::setPatientConsult(Consultation *pConsult) { patientConsult = pConsult; }
void AddEditConsultationWindow::setCurrentUser(User *user){ currentUser = user; }

void AddEditConsultationWindow::updateFields()
{
    ui->dateTimeEdit->setDate(patientConsult->getDate());
    ui->dateTimeEdit->setTime(patientConsult->getTime());
    ui->editOHIP->setText(patientConsult->getOhip());
    if(currentUser->getType() == PHYSICIAN){
        ui->editReason->setText(patientConsult->getReason());
        ui->editDiagnosis->setPlainText(patientConsult->getDiagnosis());
    }
}

void AddEditConsultationWindow::updateAccess()
{
    if(currentUser->getType() == ADMIN_ASSISTANT){
        ui->editReason->setReadOnly(true);
        ui->editDiagnosis->setReadOnly(true);

        //Disable follow up access as well once it is implemented
    }
}


void AddEditConsultationWindow::saveConsultation()
{
    patientConsult->setDate(ui->dateTimeEdit->date());
    patientConsult->setTime(ui->dateTimeEdit->time());
    patientConsult->setOhip(ui->editOHIP->text());

    if(currentUser->getType() == PHYSICIAN){
        patientConsult->setReason(ui->editReason->text());
        patientConsult->setDiagnosis(ui->editDiagnosis->toPlainText());
    }
}

