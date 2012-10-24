#include "systemadminwindow.h"
#include "ui_systemadminwindow.h"

SystemAdminWindow::SystemAdminWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SystemAdminWindow)
{
    ui->setupUi(this);
}

SystemAdminWindow::~SystemAdminWindow()
{
    delete ui;
}
