#include "addeditfollowups.h"
#include "ui_addeditfollowups.h"

AddEditFollowUps::AddEditFollowUps(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEditFollowUps)
{
    ui->setupUi(this);
}

AddEditFollowUps::~AddEditFollowUps()
{
    delete ui;
}
