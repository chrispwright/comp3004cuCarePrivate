#include "addeditfollowups.h"
#include "ui_addeditfollowups.h"

static QString PHYSICIAN = "Physician";
static QString ADMIN_ASSISTANT = "AdminAssistant";

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
void AddEditFollowUps::setCurrentUser(User* u){ currentUser = u; }
FollowUp* AddEditFollowUps::getConsultationFollowUp(){ return consultationFollowUp; }

void AddEditFollowUps::updateFields()
{
    if(consultationFollowUp->getType() == "Return Consultation")
        ui->comboBox_Type->setCurrentIndex(0);
    else if(consultationFollowUp->getType() == "Prescription Renewal")
        ui->comboBox_Type->setCurrentIndex(1);
    else if(consultationFollowUp->getType() == "Referral")
        ui->comboBox_Type->setCurrentIndex(2);
    else if(consultationFollowUp->getType() == "Medical Test")
        ui->comboBox_Type->setCurrentIndex(3);

    ui->comboBox_Status->setEnabled(true);
    if(consultationFollowUp->getStatus() == "Pending")
        ui->comboBox_Status->setCurrentIndex(0);
    else if(consultationFollowUp->getStatus() == "Completed")
        ui->comboBox_Status->setCurrentIndex(1);
    else if(consultationFollowUp->getStatus() == "Overdue")
        ui->comboBox_Status->setCurrentIndex(2);

    ui->dateTimeEdit->setDate(consultationFollowUp->getDate());
    ui->dateTimeEdit->setTime(consultationFollowUp->getTime());
    if(currentUser->getType() == ADMIN_ASSISTANT){
        ui->plainTextEdit_Details->setEnabled(false);
        ui->comboBox_Type->setEnabled(false);
        ui->dateTimeEdit->setEnabled(false);
    }
    else {
        ui->plainTextEdit_Details->setPlainText(consultationFollowUp->getDetails());
    }
}

void AddEditFollowUps::saveFollowUp()
{
    consultationFollowUp->setType(ui->comboBox_Type->currentText());
    consultationFollowUp->setDate(ui->dateTimeEdit->date());
    consultationFollowUp->setTime(ui->dateTimeEdit->time());
    consultationFollowUp->setStatus(ui->comboBox_Status->currentText());
    consultationFollowUp->setDetails(ui->plainTextEdit_Details->toPlainText());
}
