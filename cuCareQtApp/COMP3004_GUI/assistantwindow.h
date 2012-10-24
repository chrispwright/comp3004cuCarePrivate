#ifndef ASSISTANTWINDOW_H
#define ASSISTANTWINDOW_H

#include <QWidget>

namespace Ui {
class AssistantWindow;
}

class AssistantWindow : public QWidget
{
    Q_OBJECT
    
public:
    explicit AssistantWindow(QWidget *parent = 0);
    ~AssistantWindow();
    
private:
    Ui::AssistantWindow *ui;
};

#endif // ASSISTANTWINDOW_H
