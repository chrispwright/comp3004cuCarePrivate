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

    connect(ui->comboBox_FilterByStatus, SIGNAL(currentIndexChanged(int)), this, SLOT(filterByStatusComboChanged(int)));
    connect(ui->comboBox_Physicians, SIGNAL(currentIndexChanged(int)), this, SLOT(filterByPhysiciansComboChanged(int)));

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
        currentPatient = currentPatients[row];
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
                        if(ui->comboBox_FilterByStatus->currentIndex() == 0){
                                currentFollowUps.push_back(cuCareFollowUps[j]);
                        }
                        else if(ui->comboBox_FilterByStatus->currentIndex() == 1){
                            if(cuCareFollowUps[j]->getStatus() == "Pending"){
                                currentFollowUps.push_back(cuCareFollowUps[j]);
                            }
                        }
                        else if(ui->comboBox_FilterByStatus->currentIndex() == 2){
                            if(cuCareFollowUps[j]->getStatus() == "Completed"){
                                currentFollowUps.push_back(cuCareFollowUps[j]);
                            }
                        }
                        else if(ui->comboBox_FilterByStatus->currentIndex() == 3){
                            if(cuCareFollowUps[j]->getStatus() == "Overdue"){
                                currentFollowUps.push_back(cuCareFollowUps[j]);
                            }
                        }
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
                if(ui->comboBox_FilterByStatus->currentIndex() == 0){
                        currentFollowUps.push_back(cuCareFollowUps[i]);
                }
                else if(ui->comboBox_FilterByStatus->currentIndex() == 1){
                    if(cuCareFollowUps[i]->getStatus() == "Pending"){
                        currentFollowUps.push_back(cuCareFollowUps[i]);
                    }
                }
                else if(ui->comboBox_FilterByStatus->currentIndex() == 2){
                    if(cuCareFollowUps[i]->getStatus() == "Completed"){
                        currentFollowUps.push_back(cuCareFollowUps[i]);
                    }
                }
                else if(ui->comboBox_FilterByStatus->currentIndex() == 3){
                    if(cuCareFollowUps[i]->getStatus() == "Overdue"){
                        currentFollowUps.push_back(cuCareFollowUps[i]);
                    }
                }
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
    headers << "Patient Id" <<"First Name" << "Last Name" << "Phone Number" << "Primary Physician";
    ui->tableWidget_Patients->clear();
    ui->tableWidget_Patients->setRowCount(patients.size());
    ui->tableWidget_Patients->setHorizontalHeaderLabels(headers);

    for(int i = 0; i<patients.size(); i++){
        QTableWidgetItem* item1 = new QTableWidgetItem();
        QTableWidgetItem* item2 = new QTableWidgetItem();
        QTableWidgetItem* item3 = new QTableWidgetItem();
        QTableWidgetItem* item4 = new QTableWidgetItem();
        QTableWidgetItem* item5 = new QTableWidgetItem();

        item1->setText(patients[i]->getPatientId());
        item2->setText(patients[i]->getFirstName());
        item3->setText(patients[i]->getLastName());
        item4->setText(patients[i]->getPhoneNumber());
        item5->setText(patients[i]->getPhys());

        ui->tableWidget_Patients->setItem(i,0,item1);
        ui->tableWidget_Patients->setItem(i,1,item2);
        ui->tableWidget_Patients->setItem(i,2,item3);
        ui->tableWidget_Patients->setItem(i,3,item4);
        ui->tableWidget_Patients->setItem(i,4,item5);
    }
    currentPatients.clear();
    currentPatients = patients;
}

void PatientListView::loadConsultationTable(QVector<Consultation*> consultations)
{
    QStringList headers;
    headers << "Patient ID" << "Consult ID" << "Date" << "Time" << "OHIP #" << "Reason" << "Actual Reason" << "Diagnosis";
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
        QTableWidgetItem* item7 = new QTableWidgetItem();
        QTableWidgetItem* item8 = new QTableWidgetItem();

        item1->setText(consultations[i]->getPatientId());
        item2->setText(consultations[i]->getConsId());
        item3->setText(consultations[i]->getDate().toString("yyyy/MM/dd"));
        item4->setText(consultations[i]->getTime().toString("hh:mm:ss"));
        item5->setText(consultations[i]->getOhip());
        item6->setText(consultations[i]->getReason());
        item7->setText(consultations[i]->getActualReason());
        item8->setText(consultations[i]->getDiagnosis());

        ui->tableWidget_Consultations->setItem(i,0,item1);
        ui->tableWidget_Consultations->setItem(i,1,item2);
        ui->tableWidget_Consultations->setItem(i,2,item3);
        ui->tableWidget_Consultations->setItem(i,3,item4);
        ui->tableWidget_Consultations->setItem(i,4,item5);
        ui->tableWidget_Consultations->setItem(i,5,item6);
        ui->tableWidget_Consultations->setItem(i,6,item7);
        ui->tableWidget_Consultations->setItem(i,7,item8);
    }
    currentConsultations.clear();
    currentConsultations = consultations;
}

void PatientListView::loadFollowUpTable(QVector<FollowUp*> followUps)
{
    QStringList headers;
    headers << "Consult ID" << "Follow Up ID" << "Type" << "Due Date" << "Due Time" << "Status" << "Details";
    ui->tableWidget_FollowUps->clear();
    ui->tableWidget_FollowUps->setRowCount(followUps.size());
    ui->tableWidget_FollowUps->setHorizontalHeaderLabels(headers);

    for(int i = 0; i<followUps.size(); i++){
        QTableWidgetItem* item1 = new QTableWidgetItem();
        QTableWidgetItem* item2 = new QTableWidgetItem();
        QTableWidgetItem* item3 = new QTableWidgetItem();
        QTableWidgetItem* item4 = new QTableWidgetItem();
        QTableWidgetItem* item5 = new QTableWidgetItem();
        QTableWidgetItem* item6 = new QTableWidgetItem();
        QTableWidgetItem* item7 = new QTableWidgetItem();

        item1->setText(followUps[i]->getConsId());
        item2->setText(followUps[i]->getFollowUpId());
        item3->setText(followUps[i]->getType());
        item4->setText(followUps[i]->getDate().toString("yyyy/MM/dd"));
        item5->setText(followUps[i]->getTime().toString("hh:mm:ss"));
        item6->setText(followUps[i]->getStatus());
        item7->setText(followUps[i]->getDetails());

        ui->tableWidget_FollowUps->setItem(i,0,item1);
        ui->tableWidget_FollowUps->setItem(i,1,item2);
        ui->tableWidget_FollowUps->setItem(i,2,item3);
        ui->tableWidget_FollowUps->setItem(i,3,item4);
        ui->tableWidget_FollowUps->setItem(i,4,item5);
        ui->tableWidget_FollowUps->setItem(i,5,item6);
        ui->tableWidget_FollowUps->setItem(i,6,item7);
    }
    currentFollowUps.clear();
    currentFollowUps = followUps;
}

void PatientListView::filterByStatusComboChanged(int)
{
    filterByPhysiciansComboChanged(ui->comboBox_Physicians->currentIndex());
}

void PatientListView::filterByPhysiciansComboChanged(int)
{
    ui->tableWidget_Consultations->setEnabled(false);
    ui->tableWidget_FollowUps->setEnabled(false);

    currentPatients.clear();
    if(ui->comboBox_Physicians->currentText() == "All"){
        currentPatients = cuCarePatients;
    }
    else{
        for(int i = 0; i < cuCarePatients.size(); i++){
            if(cuCarePatients[i]->getPhys() == ui->comboBox_Physicians->currentText()){
                currentPatients.push_back(cuCarePatients[i]);
            }
        }
    }

    loadPatientTable(currentPatients);

    currentConsultations.clear();
    for(int i = 0; i < currentPatients.size(); i++){
        for(int j = 0; j < cuCareConsultations.size(); j++){
            if(currentPatients[i]->getPatientId() == cuCareConsultations[j]->getPatientId()){
                currentConsultations.push_back(cuCareConsultations[j]);
            }
        }
    }

    currentFollowUps.clear();
    for(int i = 0; i < currentConsultations.size(); i++){
        for(int j = 0; j < cuCareFollowUps.size(); j++){
            if(currentConsultations[i]->getConsId() == cuCareFollowUps[j]->getConsId()){
                if(ui->comboBox_FilterByStatus->currentIndex() == 0){
                        currentFollowUps.push_back(cuCareFollowUps[j]);
                }
                else if(ui->comboBox_FilterByStatus->currentIndex() == 1){
                    if(cuCareFollowUps[j]->getStatus() == "Pending"){
                        currentFollowUps.push_back(cuCareFollowUps[j]);
                    }
                }
                else if(ui->comboBox_FilterByStatus->currentIndex() == 2){
                    if(cuCareFollowUps[j]->getStatus() == "Completed"){
                        currentFollowUps.push_back(cuCareFollowUps[j]);
                    }
                }
                else if(ui->comboBox_FilterByStatus->currentIndex() == 3){
                    if(cuCareFollowUps[j]->getStatus() == "Overdue"){
                        currentFollowUps.push_back(cuCareFollowUps[j]);
                    }
                }
            }
        }
    }

    QVector<Consultation*> updatedConsultations;
    for(int i = 0; i < currentFollowUps.size(); i++){
        for(int j = 0; j < currentConsultations.size(); j++){
            if(currentConsultations[j]->getConsId() == currentFollowUps[i]->getConsId()){
                updatedConsultations.push_back(currentConsultations[j]);
            }
        }
    }
    currentConsultations = updatedConsultations;

    loadConsultationTable(currentConsultations);
    loadFollowUpTable(currentFollowUps);
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
