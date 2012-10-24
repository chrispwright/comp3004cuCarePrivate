#include "assistantwindow.h"
#include "ui_assistantwindow.h"

AssistantWindow::AssistantWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AssistantWindow)
{
    ui->setupUi(this);
}

AssistantWindow::~AssistantWindow()
{
    delete ui;
}
