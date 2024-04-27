#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    QApplication app(argc, argv);
    //MainWindow w;
    QRect initialGeometry(100, 100, 800, 600);
    MainWindow* mainWin = MainWindow::getInstance(initialGeometry);
    //w.show();
    mainWin->show();
    //return a.exec();
    return app.exec();
}
