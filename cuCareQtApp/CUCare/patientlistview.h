#ifndef PATIENTLISTVIEW_H
#define PATIENTLISTVIEW_H

#include <QDialog>
#include <QDebug>
#include "patient.h"
#include "user.h"
#include "consultation.h"
#include "followup.h"

namespace Ui {
class PatientListView;
}

class PatientListView : public QDialog
{
    Q_OBJECT
    
public:
    explicit PatientListView(QWidget *parent = 0);
    ~PatientListView();

    void setCuCarePatients(QVector<Patient*>);
    void setCuCareConsultations(QVector<Consultation*>);
    void setCuCareFollowUps(QVector<FollowUp*>);
    void setCuCarePhysicians(QVector<User*>);

public slots:
    void setupPhysiciansComboBox();
    void setupTables();
    void patientTableClicked(int,int,int,int);
    void consultationTableClicked(int,int,int,int);
    void followUpTableClicked(int,int,int,int);

private slots:
    void loadPatientTable(QVector<Patient*> patients);
    void loadConsultationTable(QVector<Consultation*> consultations);
    void loadFollowUpTable(QVector<FollowUp*> followUps);
    
private:
    Ui::PatientListView *ui;

    QVector<Patient*> cuCarePatients;
    QVector<Consultation*> cuCareConsultations;
    QVector<FollowUp*> cuCareFollowUps;
    QVector<User*> cuCarePhysicians;

    QVector<Patient*> currentPatients;
    QVector<Consultation*> currentConsultations;
    QVector<FollowUp*> currentFollowUps;

    Patient *currentPatient;
    Consultation *currentConsultation;
};

#endif // PATIENTLISTVIEW_H
