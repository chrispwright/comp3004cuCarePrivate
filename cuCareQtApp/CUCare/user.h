#ifndef USER_H
#define USER_H

#include <QString>

class User
{
public:
    User(); //default constructor
    User(QString, QString, QString); //constructor that takes in type and first/last name parameters

    QString getType(); //returns type of user
    QString getUserId(); //returns id of user
    QString getFirstName(); //returns first name of user
    QString getLastName(); //returns last name of user
    QString getUsername();

    void setType(QString); //sets type of user
    void setUserId(QString); //sets user id
    void setFirstName(QString); //sets first name of user
    void setLastName(QString); //sets last name of user
    void setUsername(QString);
private:
    QString type;
    QString userId;
    QString firstName;
    QString lastName;
    QString username;
};

#endif // USER_H
