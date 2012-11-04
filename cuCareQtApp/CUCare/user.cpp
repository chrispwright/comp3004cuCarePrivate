#include "user.h"

User::User()
{
    type = "NULL";
    userId = "NULL";
    firstName = "NULL";
    lastName = "NULL";
}

User::User(QString t, QString fName, QString lName)
{
    type = t;
    userId = "NULL";
    firstName = fName;
    lastName = lName;
}

QString User::getType() { return type; }
QString User::getUserId() { return userId; }
QString User::getFirstName() { return firstName; }
QString User::getLastName() { return lastName; }
QString User::getUsername() { return username; }

void User::setType(QString t) { type = t; }
void User::setUserId(QString id) { userId = id; }
void User::setFirstName(QString fName) { firstName = fName; }
void User::setLastName(QString lName) { lastName = lName; }
void User::setUsername(QString uName) { username = uName; }

