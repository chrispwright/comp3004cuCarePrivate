#include <QtGui/QApplication>
#include <QDesktopWidget>
#include "cucare.h"
#include "loginscreen.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CuCare mainw;

    //Set size and center main window
    QDesktopWidget *desktop = QApplication::desktop();

    int screenWidth, width;
    int screenHeight, height;
    int x, y;
    QSize windowSize;

    screenWidth = desktop->width();
    screenHeight = desktop->height();

    windowSize = mainw.size();
    width = windowSize.width();
    height = windowSize.height();


    x = (screenWidth - width) / 2;
    y = (screenHeight - height) / 2;
    y -= 50;

    mainw.show();
    mainw.move(x, y);
    //mainw.setFixedSize(mainw.width(), mainw.height());
    
    return a.exec();
}
