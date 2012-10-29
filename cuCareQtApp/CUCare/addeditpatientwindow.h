#ifndef ADDEDITPATIENTWINDOW_H
#define ADDEDITPATIENTWINDOW_H

#include <QDialog>

namespace Ui {
class AddEditPatientWindow;
}

class AddEditPatientWindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit AddEditPatientWindow(QWidget *parent = 0);
    ~AddEditPatientWindow();
    
private:
    Ui::AddEditPatientWindow *ui;
};

#endif // ADDEDITPATIENTWINDOW_H
