#include "patientlistview.h"
#include "ui_patientlistview.h"

PatientListView::PatientListView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PatientListView)
{
    ui->setupUi(this);

    connect(ui->tableWidget_Patients, SIGNAL(currentCellChanged(int,int,int,int)), this, SLOT(patientTableClicked(int,int,int,int)));
    connect(ui->tableWidget_Consultations, SIGNAL(currentCellChanged(int,int,int,int)), this, SLOT(consultationTableClicked(int,int,int,int)));
    connect(ui->tableWidget_FollowUps, SIGNAL(currentCellChanged(int,int,int,int)), this, SLOT(followUpTableClicked(int,int,int,int)));

    setupPhysiciansComboBox();
}

PatientListView::~PatientListView()
{
    delete ui;
}

void PatientListView::setCuCarePatients(QVector<Patient*> patients) { cuCarePatients = patients; }
void PatientListView::setCuCareConsultations(QVector<Consultation*> consultations) { cuCareConsultations = consultations; }
void PatientListView::setCuCareFollowUps(QVector<FollowUp*> followUps) {  cuCareFollowUps = followUps; }
void PatientListView::setCuCarePhysicians(QVector<User*> physicians){ cuCarePhysicians = physicians; }

void PatientListView::patientTableClicked(int row,int col, int row1, int co1l)
{
    if(row != -1){
        //Load consultations and follow ups that correspond to the patient that was clicked
        currentPatient = cuCarePatients[row];
        currentConsultations.clear();
        for(int i = 0; i<cuCareConsultations.size(); i++){
            if(cuCareConsultations[i]->getPatientId() == currentPatient->getPatientId()){
                currentConsultations.push_back(cuCareConsultations[i]);
            }
        }
        loadConsultationTable(currentConsultations);

        //Reload followups
        if(ui->tableWidget_Consultations->currentIndex().row() == -1){
            //ui->tableWidget_Consultations->setEnabled(false);
            ui->tableWidget_FollowUps->setEnabled(false);
            currentFollowUps.clear();
            for(int i = 0; i<currentConsultations.size(); i++){
                for(int j = 0; j<cuCareFollowUps.size(); j++){
                    if(cuCareFollowUps[j]->getConsId() == currentConsultations[i]->getConsId()){
                        currentFollowUps.push_back(cuCareFollowUps[j]);
                    }
                }
            }
            loadFollowUpTable(currentFollowUps);
        }
        ui->tableWidget_Consultations->setEnabled(true);
    }
}

void PatientListView::consultationTableClicked(int row,int col, int row1, int col1)
{
    if(row != -1){
        currentConsultation = currentConsultations[row];
        currentFollowUps.clear();
        for(int i = 0; i<cuCareFollowUps.size(); i++){
            if(cuCareFollowUps[i]->getConsId() == currentConsultation->getConsId()){
                currentFollowUps.push_back(cuCareFollowUps[i]);
            }
        }
        loadFollowUpTable(currentFollowUps);
        ui->tableWidget_FollowUps->setEnabled(true);
    }
}

void PatientListView::followUpTableClicked(int row,int col, int row1, int col1)
{

}

void PatientListView::loadPatientTable(QVector<Patient*> patients)
{
    QStringList headers;
    headers << "First Name" << "Last Name" << "Phone Number" << "Primary Physician";
    ui->tableWidget_Patients->clear();
    ui->tableWidget_Patients->setRowCount(patients.size());
    ui->tableWidget_Patients->setHorizontalHeaderLabels(headers);

    for(int i = 0; i<patients.size(); i++){

        QTableWidgetItem* item1 = new QTableWidgetItem();
        QTableWidgetItem* item2 = new QTableWidgetItem();
        QTableWidgetItem* item3 = new QTableWidgetItem();
        QTableWidgetItem* item4 = new QTableWidgetItem();

        item1->setText(patients[i]->getFirstName());
        item2->setText(patients[i]->getLastName());
        item3->setText(patients[i]->getPhoneNumber());
        item4->setText(patients[i]->getPhys());

        ui->tableWidget_Patients->setItem(i,0,item1);
        ui->tableWidget_Patients->setItem(i,1,item2);
        ui->tableWidget_Patients->setItem(i,2,item3);
        ui->tableWidget_Patients->setItem(i,3,item4);
    }
}

void PatientListView::loadConsultationTable(QVector<Consultation*> consultations)
{
    QStringList headers;
    headers << "Date" << "Time" << "OHIP #" << "Reason" << "Actual Reason" << "Diagnosis";
    ui->tableWidget_Consultations->clear();
    ui->tableWidget_Consultations->setRowCount(consultations.size());
    ui->tableWidget_Consultations->setHorizontalHeaderLabels(headers);

    for(int i = 0; i<consultations.size(); i++){
        QTableWidgetItem* item1 = new QTableWidgetItem();
        QTableWidgetItem* item2 = new QTableWidgetItem();
        QTableWidgetItem* item3 = new QTableWidgetItem();
        QTableWidgetItem* item4 = new QTableWidgetItem();
        QTableWidgetItem* item5 = new QTableWidgetItem();
        QTableWidgetItem* item6 = new QTableWidgetItem();

        item1->setText(consultations[i]->getDate().toString("yyyy/MM/dd"));
        item2->setText(consultations[i]->getTime().toString("hh:mm:ss"));
        item3->setText(consultations[i]->getOhip());
        item4->setText(consultations[i]->getReason());
        item5->setText(consultations[i]->getActualReason());
        item6->setText(consultations[i]->getDiagnosis());

        ui->tableWidget_Consultations->setItem(i,0,item1);
        ui->tableWidget_Consultations->setItem(i,1,item2);
        ui->tableWidget_Consultations->setItem(i,2,item3);
        ui->tableWidget_Consultations->setItem(i,3,item4);
        ui->tableWidget_Consultations->setItem(i,4,item5);
        ui->tableWidget_Consultations->setItem(i,5,item6);
    }
}

void PatientListView::loadFollowUpTable(QVector<FollowUp*> followUps)
{
    QStringList headers;
    headers << "Type" << "Due Date" << "Due Time" << "Status" << "Details";
    ui->tableWidget_FollowUps->clear();
    ui->tableWidget_FollowUps->setRowCount(followUps.size());
    ui->tableWidget_FollowUps->setHorizontalHeaderLabels(headers);

    for(int i = 0; i<followUps.size(); i++){
        QTableWidgetItem* item1 = new QTableWidgetItem();
        QTableWidgetItem* item2 = new QTableWidgetItem();
        QTableWidgetItem* item3 = new QTableWidgetItem();
        QTableWidgetItem* item4 = new QTableWidgetItem();
        QTableWidgetItem* item5 = new QTableWidgetItem();

        item1->setText(followUps[i]->getType());
        item2->setText(followUps[i]->getDate().toString("yyyy/MM/dd"));
        item3->setText(followUps[i]->getTime().toString("hh:mm:ss"));
        item4->setText(followUps[i]->getStatus());
        item5->setText(followUps[i]->getDetails());

        ui->tableWidget_FollowUps->setItem(i,0,item1);
        ui->tableWidget_FollowUps->setItem(i,1,item2);
        ui->tableWidget_FollowUps->setItem(i,2,item3);
        ui->tableWidget_FollowUps->setItem(i,3,item4);
        ui->tableWidget_FollowUps->setItem(i,4,item5);
    }
}

void PatientListView::setupTables()
{
    loadPatientTable(cuCarePatients);
    loadConsultationTable(cuCareConsultations);
    loadFollowUpTable(cuCareFollowUps);
}

void PatientListView::setupPhysiciansComboBox()
{
    QComboBox *comboBoxPatients = ui->comboBox_Physicians;

    QStringList names;

    for(int i = 0; i < cuCarePhysicians.size(); i++){
        QString name = cuCarePhysicians[i]->getFirstName() + " " + cuCarePhysicians[i]->getLastName();
        names << tr(name.toStdString().c_str());
    }

    for (int i=0; i<names.size(); i++) {
        comboBoxPatients->addItem(names[i], 1);
    }
}
