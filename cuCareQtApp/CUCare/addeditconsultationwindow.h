#ifndef ADDEDITCONSULTATIONWINDOW_H
#define ADDEDITCONSULTATIONWINDOW_H

#include <QDialog>
#include <QTcpSocket>
#include "addeditfollowups.h"
#include "patient.h"
#include "consultation.h"
#include "followup.h"
#include "user.h"

namespace Ui {
class AddEditConsultationWindow;
}

class AddEditConsultationWindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit AddEditConsultationWindow(QWidget *parent = 0);
    ~AddEditConsultationWindow();

    Consultation* getPatientConsult();
    int getLastFollowUpIndex();
    void setCurrentPatient(Patient *patient);
    void setPatientConsult(Consultation *pConsult);
    void setCurrentUser(User *user);
    void setPatientConsultFollowUps(QVector<FollowUp*>);
    void setConnection(QTcpSocket*);

    void updateFields();
    void updateAccess();
    void setFollowUpDisabled();

    void loadFollowUps();

private slots:
    void saveConsultation();
    void createFollowUpAct();
    void editFollowUpAct();

public slots:
    void followUpListChanged(int index);
    
private:
    Ui::AddEditConsultationWindow *ui;
    Patient *currentPatient;
    Consultation *patientConsult;
    User *currentUser;
    QVector<FollowUp*> patientConsultFollowUps;
    FollowUp *currentFollowUp;

    AddEditFollowUps *addEditFollowUpView;

    QTcpSocket *connection;

    int lastFollowUpIndex;
};

#endif // ADDEDITCONSULTATIONWINDOW_H
