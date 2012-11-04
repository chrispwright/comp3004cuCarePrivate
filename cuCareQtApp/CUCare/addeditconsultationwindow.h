#ifndef ADDEDITCONSULTATIONWINDOW_H
#define ADDEDITCONSULTATIONWINDOW_H

#include <QDialog>
#include "consultation.h"
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

    void updateFields();
    void updateAccess();

private slots:
    void saveConsultation();
    
private:
    Ui::AddEditConsultationWindow *ui;
    Consultation *patientConsult;
    User *currentUser;
};

#endif // ADDEDITCONSULTATIONWINDOW_H
