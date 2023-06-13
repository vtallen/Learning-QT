#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    a.setStyleSheet("QPushButton{background-color: green; color: blue;} QWidget#Widget{background-color:pink;}");
    w.show();
    return a.exec();
}
