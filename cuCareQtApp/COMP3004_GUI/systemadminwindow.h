#ifndef SYSTEMADMINWINDOW_H
#define SYSTEMADMINWINDOW_H

#include <QWidget>

namespace Ui {
class SystemAdminWindow;
}

class SystemAdminWindow : public QWidget
{
    Q_OBJECT
    
public:
    explicit SystemAdminWindow(QWidget *parent = 0);
    ~SystemAdminWindow();
    
private:
    Ui::SystemAdminWindow *ui;
};

#endif // SYSTEMADMINWINDOW_H
