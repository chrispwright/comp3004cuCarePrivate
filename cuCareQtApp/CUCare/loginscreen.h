#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include "user.h"
#include <QDialog>
#include <QTcpSocket>

namespace Ui {
class LoginScreen;
}

class LoginScreen : public QDialog
{
    Q_OBJECT
    
public:
    explicit LoginScreen(QWidget *parent = 0, QTcpSocket *conn = 0);
    ~LoginScreen();

    QString getUsername();
    void setUsername(QString uname);
    User *getUser();

public slots:
    void updateUsername();
    
private:
    Ui::LoginScreen *ui;
    QString username;
    QTcpSocket *connection;
    User *cuCareUser;
};

#endif // LOGINSCREEN_H
