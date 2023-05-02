#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    int test {};
    w.show();
    w.hide();
    w.show();
    return a.exec();
}
