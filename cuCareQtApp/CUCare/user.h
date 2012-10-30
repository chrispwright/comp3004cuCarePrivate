#ifndef USER_H
#define USER_H

#include <QString>

class User
{
public:
    User(); //default constructor
    //User(QString, QString, QString, QString); //constructor that takes in type, id, first/last name parameters

    QString getType(); //returns type of user
    //QString getUserId(); //returns id of user
    QString getFirstName(); //returns first name of user
    QString getLastName(); //returns last name of user

    void setType(QString); //sets type of user
    void setFirstName(QString); //sets first name of user
    void setLastName(QString); //sets last name of user

private:
    QString *type;
    //QString *userId;
    QString *firstName;
    QString *lastName;
};

#endif // USER_H
