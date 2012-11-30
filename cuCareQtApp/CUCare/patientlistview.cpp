#include "patientlistview.h"
#include "ui_patientlistview.h"

PatientListView::PatientListView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PatientListView)
{
    ui->setupUi(this);
}

PatientListView::~PatientListView()
{
    delete ui;
}
