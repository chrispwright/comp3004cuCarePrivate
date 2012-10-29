#include "addeditconsultationwindow.h"
#include "ui_addeditconsultationwindow.h"

AddEditConsultationWindow::AddEditConsultationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEditConsultationWindow)
{
    ui->setupUi(this);
}

AddEditConsultationWindow::~AddEditConsultationWindow()
{
    delete ui;
}
