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

User* LoginScreen::getUser(){ return cuCareUser; }
QString LoginScreen::getUsername(){ return username; }
void LoginScreen::setUsername(QString uname){ username = uname; }

void LoginScreen::updateUsername()
{
    setUsername(ui->editUsername->text());
    QByteArray data;
    data.append("login|");
    data.append(getUsername());
    connection->write(data);
}

LoginScreen::~LoginScreen()
{
    delete ui;
}
