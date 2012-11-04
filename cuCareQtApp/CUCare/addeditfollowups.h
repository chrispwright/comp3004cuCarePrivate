#ifndef ADDEDITFOLLOWUPS_H
#define ADDEDITFOLLOWUPS_H

#include <QDialog>

namespace Ui {
class AddEditFollowUps;
}

class AddEditFollowUps : public QDialog
{
    Q_OBJECT
    
public:
    explicit AddEditFollowUps(QWidget *parent = 0);
    ~AddEditFollowUps();
    
private:
    Ui::AddEditFollowUps *ui;
};

#endif // ADDEDITFOLLOWUPS_H
