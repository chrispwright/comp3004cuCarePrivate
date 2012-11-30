#include "addeditfollowups.h"
#include "ui_addeditfollowups.h"

AddEditFollowUps::AddEditFollowUps(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEditFollowUps)
{
    ui->setupUi(this);

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(saveFollowUp()));
}

AddEditFollowUps::~AddEditFollowUps()
{
    delete ui;
}

void AddEditFollowUps::setConsultationFollowUp(FollowUp* consFUp) { consultationFollowUp = consFUp; }

FollowUp* AddEditFollowUps::getConsultationFollowUp(){ return consultationFollowUp; }

void AddEditFollowUps::updateFields()
{
    if(consultationFollowUp->getType() == "Return Consultation")
        ui->comboBox_Type->setCurrentIndex(0);
    else if(consultationFollowUp->getType() == "Prescription Renewal")
        ui->comboBox_Type->setCurrentIndex(1);
    else if(consultationFollowUp->getType() == "Referral")
        ui->comboBox_Type->setCurrentIndex(2);
    else if(consultationFollowUp->getType() == "Return Consultation")
        ui->comboBox_Type->setCurrentIndex(3);


    ui->dateEdit->setDate(consultationFollowUp->getDate());
    ui->lineEdit_Status->setReadOnly(false);
    ui->lineEdit_Status->setEnabled(true);
    ui->lineEdit_Status->setText(consultationFollowUp->getStatus());
    ui->plainTextEdit_Details->setPlainText(consultationFollowUp->getDetails());
}

void AddEditFollowUps::saveFollowUp()
{
    consultationFollowUp->setType(ui->comboBox_Type->currentText());
    consultationFollowUp->setDate(ui->dateEdit->date());
    consultationFollowUp->setStatus(ui->lineEdit_Status->text());
    consultationFollowUp->setDetails(ui->plainTextEdit_Details->toPlainText());
}
