#ifndef ADDEDITFOLLOWUPS_H
#define ADDEDITFOLLOWUPS_H

#include <QDialog>
#include "followup.h"

namespace Ui {
class AddEditFollowUps;
}

class AddEditFollowUps : public QDialog
{
    Q_OBJECT
    
public:
    explicit AddEditFollowUps(QWidget *parent = 0);
    ~AddEditFollowUps();

    void setConsultationFollowUp(FollowUp*);

    FollowUp* getConsultationFollowUp();

    void updateFields();
private slots:
    void saveFollowUp();
    
private:
    Ui::AddEditFollowUps *ui;
    FollowUp *consultationFollowUp;
};

#endif // ADDEDITFOLLOWUPS_H
