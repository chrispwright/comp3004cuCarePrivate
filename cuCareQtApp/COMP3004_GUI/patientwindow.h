#ifndef PATIENTWINDOW_H
#define PATIENTWINDOW_H

#include <QWidget>

namespace Ui {
class PatientWindow;
}

class PatientWindow : public QWidget
{
    Q_OBJECT
    
public:
    explicit PatientWindow(QWidget *parent = 0);
    ~PatientWindow();
    
private:
    Ui::PatientWindow *ui;
};

#endif // PATIENTWINDOW_H
