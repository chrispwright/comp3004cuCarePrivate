#ifndef CUCARE_H
#define CUCARE_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>
#include "addeditconsultationwindow.h"
#include "addeditpatientwindow.h"
#include "patientlistview.h"
#include "loginscreen.h"
#include "user.h"
#include "patient.h"
#include "consultation.h"
#include "outputmessages.h"
#include "staticdefinitions.h"

class QStringListModel;
class QStandardItem;

namespace Ui {
class CuCare;
}

class CuCare : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit CuCare(QWidget *parent = 0);
    ~CuCare();

protected:
    void contextMenuEvent(QContextMenuEvent *event);
    void openLogin();

private slots:
    void createPatientAct();
    void editPatientAct();
    void deletePatientAct();
    void createPatientRecordAct();
    void showFullPatientListing();
    void editPatientRecordAct();
    void viewPatientsAct();
    void runQueryAct();
    void manageUsersAct();
    void setUpComboBox();
    void comboBoxChanged(int);
    void consultListChanged(int);
    void readResponse();
    
private:
    //Windows
    AddEditConsultationWindow *addEditConsultationView;
    AddEditPatientWindow *addEditPatientView;
    PatientListView *fullPatientListing;
    LoginScreen *loginScreen;

    //Actions
    QAction *createPatient;
    QAction *editPatient;
    QAction *deletePatient;
    QAction *createPatientRecord;
    QAction *editPatientRecord;
    QAction *viewPatients;
    QAction *runQuery;
    QAction *manageUsers;
    Ui::CuCare *ui;

    QStringListModel *typeModel;

    //Utilities
    QTcpSocket *connection;
    OutputMessages *appOutput;

    //Data
    User *cuCareUser;
    QVector<Patient*> cuCarePatients;
    QVector<Consultation*> cuCareConsultations;
    QVector<Consultation*> currentPatientConsultations;
    QVector<FollowUp*> cuCareFollowUps;
    QVector<FollowUp*> currentPatientFollowUps;
    QVector<FollowUp*> currentConsultationFollowUps;
    QVector<User*> cuCarePhysicians;
    Patient *currentPatient;
    Consultation *currentConsultation;
    int currentPatientIndex;
};

#endif // CUCARE_H
