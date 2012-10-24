#ifndef PHYSICIANWINDOW_H
#define PHYSICIANWINDOW_H

#include <QWidget>

namespace Ui {
class PhysicianWindow;
}

class PhysicianWindow : public QWidget
{
    Q_OBJECT
    
public:
    explicit PhysicianWindow(QWidget *parent = 0);
    ~PhysicianWindow();
    
private:
    Ui::PhysicianWindow *ui;
};

#endif // PHYSICIANWINDOW_H
