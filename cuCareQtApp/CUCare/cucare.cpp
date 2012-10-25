#include "cucare.h"
#include "ui_cucare.h"
#include "loginscreen.h"

CuCare::CuCare(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CuCare)
{
    ui->setupUi(this);
    loginView = new LoginScreen();
    loginView->open();

}

CuCare::~CuCare()
{
    delete ui;
}

void CuCare::createPatientAct(){
    ui->tabWidget->activateWindow();
}

void CuCare::editPatientAct(){

}
void CuCare::deletePatientAct(){

}
void CuCare::createPatientRecordAct(){

}
void CuCare::editPatientRecordAct(){

}
void CuCare::viewPatientsAct(){

}
void CuCare::runQueryAct(){

}
void CuCare::manageUsersAct(){

}

void CuCare::contextMenuEvent(QContextMenuEvent *event){

}
