#include <QtWidgets/QApplication>
#include "mainwindow.h"
#include "mapcolorga.h"
#include "mainscene.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

