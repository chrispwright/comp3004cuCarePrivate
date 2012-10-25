#ifndef CUCARE_H
#define CUCARE_H

#include <QMainWindow>
#include "loginscreen.h"

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

private slots:
    void createPatientAct();
    void editPatientAct();
    void deletePatientAct();
    void createPatientRecordAct();
    void editPatientRecordAct();
    void viewPatientsAct();
    void runQueryAct();
    void manageUsersAct();
    
private:
    LoginScreen *loginView;
    QAction *createPatient;
    QAction *editPatient;
    QAction *deletePatient;
    QAction *createPatientRecord;
    QAction *editPatientRecord;
    QAction *viewPatients;
    QAction *runQuery;
    QAction *manageUsers;
    Ui::CuCare *ui;
};

#endif // CUCARE_H
