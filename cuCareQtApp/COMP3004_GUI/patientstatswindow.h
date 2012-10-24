#ifndef PATIENTSTATSWINDOW_H
#define PATIENTSTATSWINDOW_H

#include <QWidget>

namespace Ui {
class PatientStatsWindow;
}

class PatientStatsWindow : public QWidget
{
    Q_OBJECT
    
public:
    explicit PatientStatsWindow(QWidget *parent = 0);
    ~PatientStatsWindow();
    
private:
    Ui::PatientStatsWindow *ui;
};

#endif // PATIENTSTATSWINDOW_H
