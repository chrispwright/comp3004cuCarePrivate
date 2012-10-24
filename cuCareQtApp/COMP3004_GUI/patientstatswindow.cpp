#include "patientstatswindow.h"
#include "ui_patientstatswindow.h"

PatientStatsWindow::PatientStatsWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PatientStatsWindow)
{
    ui->setupUi(this);
}

PatientStatsWindow::~PatientStatsWindow()
{
    delete ui;
}
