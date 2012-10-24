#include "physicianwindow.h"
#include "ui_physicianwindow.h"

PhysicianWindow::PhysicianWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PhysicianWindow)
{
    ui->setupUi(this);
}

PhysicianWindow::~PhysicianWindow()
{
    delete ui;
}
