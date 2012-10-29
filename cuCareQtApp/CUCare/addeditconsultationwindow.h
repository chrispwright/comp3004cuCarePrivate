#ifndef ADDEDITCONSULTATIONWINDOW_H
#define ADDEDITCONSULTATIONWINDOW_H

#include <QDialog>

namespace Ui {
class AddEditConsultationWindow;
}

class AddEditConsultationWindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit AddEditConsultationWindow(QWidget *parent = 0);
    ~AddEditConsultationWindow();
    
private:
    Ui::AddEditConsultationWindow *ui;
};

#endif // ADDEDITCONSULTATIONWINDOW_H
