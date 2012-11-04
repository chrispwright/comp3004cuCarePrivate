#include "loginscreen.h"
#include "ui_loginscreen.h"
#include <QDebug>
#include <QTcpSocket>
#include <QTcpServer>

LoginScreen::LoginScreen(QWidget *parent, QTcpSocket *conn) :
    QDialog(parent),
    ui(new Ui::LoginScreen)
{
    ui->setupUi(this);
    this->connection = conn;

    connect(ui->buttonBox, SIGNAL(clicked(QAbstractButton*)), this, SLOT(updateUsername()));
    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(accept()));

}

void LoginScreen::updateUsername()
{
    this->setUsername(ui->editUsername->text());
    QByteArray data;
    data.append("login|");
    data.append(this->getUsername());
    connection->write(data);
}

User* LoginScreen::getUser(){ return this->cuCareUser; }

LoginScreen::~LoginScreen()
{
    delete ui;
}
