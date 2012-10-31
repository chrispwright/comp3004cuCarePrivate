#ifndef CUCARE_H
#define CUCARE_H

#include <QMainWindow>
#include "addeditconsultationwindow.h"
#include "addeditpatientwindow.h"

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

};

#endif // CUCARE_H
