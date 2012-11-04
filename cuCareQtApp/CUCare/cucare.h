#ifndef CUCARE_H
#define CUCARE_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>
#include "addeditconsultationwindow.h"
#include "addeditpatientwindow.h"
#include "loginscreen.h"
#include "user.h"
#include "patient.h"
#include "consultation.h"
#include "outputmessages.h"

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

public slots:


private slots:
    void createPatientAct();
    void editPatientAct();
    void deletePatientAct();
    void createPatientRecordAct();
    void editPatientRecordAct();
    void viewPatientsAct();
    void runQueryAct();
    void manageUsersAct();
    void setUpComboBox();
    void comboBoxChanged(int);
    void consultListChanged(int);
    void readResponse();
    
private:
    AddEditConsultationWindow *addEditConsultationView;
    AddEditPatientWindow *addEditPatientView;
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

    LoginScreen *loginScreen;
    User *cuCareUser;
    QTcpSocket *connection;
    OutputMessages *appOutput;
    QVector<Patient*> cuCarePatients;
    QVector<Consultation*> cuCareConsultations;
    QVector<Consultation*> currentPatientConsultations;
    Patient *currentPatient;
    Consultation *currentConsultation;
    int currentPatientIndex;

};

#endif // CUCARE_H
