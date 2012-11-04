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
    ui->editReason->setText(this->patientConsult->getReason());
    ui->editDiagnosis->setPlainText(this->patientConsult->getDiagnosis());
}

void AddEditConsultationWindow::saveConsultation()
{
    this->patientConsult->setDate(ui->dateTimeEdit->date());
    this->patientConsult->setTime(ui->dateTimeEdit->time());
    this->patientConsult->setOhip(ui->editOHIP->text());
    this->patientConsult->setReason(ui->editReason->text());
    this->patientConsult->setDiagnosis(ui->editDiagnosis->toPlainText());
}

