#include "loginscreen.h"
#include "ui_loginscreen.h"
#include <QDebug>
#include <QTcpSocket>
#include <QTcpServer>

static QString LOGIN_HEADER = "login|";

LoginScreen::LoginScreen(QWidget *parent, QTcpSocket *conn) :
    QDialog(parent),
    ui(new Ui::LoginScreen)
{
    ui->setupUi(this);
    this->connection = conn;

    connect(ui->buttonBox, SIGNAL(clicked(QAbstractButton*)), this, SLOT(updateUsername(QAbstractButton*)));
    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
}

User* LoginScreen::getUser(){ return cuCareUser; }
QString LoginScreen::getUsername(){ return username; }
void LoginScreen::setUsername(QString uname){ username = uname; }

void LoginScreen::updateUsername(QAbstractButton *button)
{
    if(button->text() == "&OK"){
        setUsername(ui->editUsername->text());
        QByteArray data;
        data.append(LOGIN_HEADER);
        data.append(getUsername());
        connection->write(data);
    }
}

LoginScreen::~LoginScreen()
{
    delete ui;
}
