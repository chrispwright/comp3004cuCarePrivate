#ifndef USER_H
#define USER_H

#include <QString>
class User
{
public:
    User();

private:
    QString *type;
    QString *userId;
    QString *firstName;
    QString *lastName;
};

#endif // USER_H
