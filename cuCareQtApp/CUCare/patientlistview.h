#ifndef PATIENTLISTVIEW_H
#define PATIENTLISTVIEW_H

#include <QDialog>

namespace Ui {
class PatientListView;
}

class PatientListView : public QDialog
{
    Q_OBJECT
    
public:
    explicit PatientListView(QWidget *parent = 0);
    ~PatientListView();
    
private:
    Ui::PatientListView *ui;
};

#endif // PATIENTLISTVIEW_H
