#include "cucare.h"
#include "ui_cucare.h"


CuCare::CuCare(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CuCare)
{

    ui->setupUi(this);
    ui->menuFile->setVisible(true);

    setUpComboBox();

    //Menu Actions
    connect(ui->actionAdd_Patient, SIGNAL(triggered()), this, SLOT(createPatientAct()));
    connect(ui->actionEdit_Patient, SIGNAL(triggered()), this, SLOT(editPatientAct()));
    connect(ui->actionAdd_Consultation, SIGNAL(triggered()), this, SLOT(createPatientRecordAct()));
    connect(ui->actionEdit_Consultation, SIGNAL(triggered()), this, SLOT(editPatientRecordAct()));

    //Button Actions
    connect(ui->pushButton_AddConsultation, SIGNAL(clicked()), this, SLOT(createPatientRecordAct()));
    connect(ui->pushButton_EditConsultation, SIGNAL(clicked()), this, SLOT(editPatientRecordAct()));

    //Add signals for deleting patient and value changed for patient combobox

}

CuCare::~CuCare()
{
    delete ui;
}

void CuCare::createPatientAct(){
    addEditPatientView = new AddEditPatientWindow();
    addEditPatientView->setWindowTitle("Create Patient Record");
    addEditPatientView->setModal(true);
    addEditPatientView->setFixedSize(addEditPatientView->width(), addEditPatientView->height());

    //Need to be sending an object pointer for a new patient to the next window
    //so that information can be passed back for processing

    //If they pressed okay then process data from object and send request to server
    if(addEditPatientView->exec() == 1){

    }
}

void CuCare::editPatientAct(){
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
}
void CuCare::deletePatientAct(){
    //TODO: send a request to the server to delete the currently selected patient
    //The request will have to delete a patient and all corresponding consultation records
    //UI needs to be updated accordingly by getting an updated list of patients send back from the server
}
void CuCare::createPatientRecordAct(){
    addEditConsultationView = new AddEditConsultationWindow();
    addEditConsultationView->setWindowTitle("Add Consultation Record");
    addEditConsultationView->setModal(true);
    addEditConsultationView->setFixedSize(addEditConsultationView->width(), addEditConsultationView->height());

    //Need to be sending an object pointer for a new patient to the next window
    //so that information can be passed back for processing

    //If they pressed okay then process data from object and send request to server
    if(addEditConsultationView->exec() == 1){

    }
}
void CuCare::editPatientRecordAct(){
    addEditConsultationView = new AddEditConsultationWindow();
    addEditConsultationView->setWindowTitle("Edit Consultation Record");
    addEditConsultationView->setModal(true);
    addEditConsultationView->setFixedSize(addEditConsultationView->width(), addEditConsultationView->height());

    //Need to be sending an object pointer for a new patient to the next window
    //so that information can be passed back for processing

    //If they pressed okay then process data from object and send request to server
    if(addEditConsultationView->exec() == 1){

    }
}
void CuCare::viewPatientsAct(){

}
void CuCare::runQueryAct(){

}
void CuCare::manageUsersAct(){

}

void CuCare::contextMenuEvent(QContextMenuEvent *event){

}

void CuCare::setUpComboBox() {

    QComboBox *test = ui->comboBox_Patients;

    QStringList names;
    names << tr("Calvin") << tr("Nick") << tr("Chris"); //make this a list of objects from server

    for (int i=0; i<3; i++) {
        test->addItem(names[i], 1);

    }

    //if (test->findData(1) or findText("patientName")  this finds which data the combo box is selected
    //then perhaps make a function called updatePatient() that updates the text fields

    ui->patFirstName->setText("Calvin");            //patient.getFirstName();
    ui->patLastName->setText("Lewis");              //patient.getLastName();
    ui->patPhoneNum->setText("(613)-407-1234");     //patient.getPhoneNum();
}

