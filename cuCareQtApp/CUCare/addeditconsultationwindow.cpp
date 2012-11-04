#include "addeditconsultationwindow.h"
#include "ui_addeditconsultationwindow.h"

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

void AddEditConsultationWindow::updateFields()
{
    ui->dateTimeEdit->setDate(this->patientConsult->getDate());
    ui->dateTimeEdit->setTime(this->patientConsult->getTime());
    ui->editOHIP->setText(this->patientConsult->getOhip());
    if(currentUser->getType() == "Physician"){
        ui->editReason->setText(this->patientConsult->getReason());
        ui->editDiagnosis->setPlainText(this->patientConsult->getDiagnosis());
    }
}

void AddEditConsultationWindow::updateAccess()
{
    if(currentUser->getType() == "AdminAssistant"){
        ui->editReason->setReadOnly(true);
        ui->editDiagnosis->setReadOnly(true);

        //Disable follow up access as well once it is implemented
    }
}


void AddEditConsultationWindow::saveConsultation()
{
    this->patientConsult->setDate(ui->dateTimeEdit->date());
    this->patientConsult->setTime(ui->dateTimeEdit->time());
    this->patientConsult->setOhip(ui->editOHIP->text());

    if(currentUser->getType() == "Physician"){
        this->patientConsult->setReason(ui->editReason->text());
        this->patientConsult->setDiagnosis(ui->editDiagnosis->toPlainText());
    }
}

