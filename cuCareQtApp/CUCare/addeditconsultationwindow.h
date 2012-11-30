#ifndef ADDEDITCONSULTATIONWINDOW_H
#define ADDEDITCONSULTATIONWINDOW_H

#include <QDialog>
#include "addeditfollowups.h"
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
    void setPatientConsult(Consultation *pConsult);
    void setCurrentUser(User *user);
    void setPatientConsultFollowUps(QVector<FollowUp*>);

    void updateFields();
    void updateAccess();

    void loadFollowUps();

private slots:
    void saveConsultation();
    void createFollowUpAct();
    void editFollowUpAct();

public slots:
    void followUpListChanged(int index);
    
private:
    Ui::AddEditConsultationWindow *ui;
    Consultation *patientConsult;
    User *currentUser;
    QVector<FollowUp*> patientConsultFollowUps;
    FollowUp *currentFollowUp;

    AddEditFollowUps *addEditFollowUpView;
};

#endif // ADDEDITCONSULTATIONWINDOW_H
