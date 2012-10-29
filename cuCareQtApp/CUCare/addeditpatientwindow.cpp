#include "addeditpatientwindow.h"
#include "ui_addeditpatientwindow.h"

AddEditPatientWindow::AddEditPatientWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEditPatientWindow)
{
    ui->setupUi(this);
}

AddEditPatientWindow::~AddEditPatientWindow()
{
    delete ui;
}
