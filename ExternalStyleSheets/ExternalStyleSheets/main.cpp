#include "widget.h"

#include <QApplication>
#include <QFile>
#include <QIODevice>

QString readTextFile(QString path) {
    QFile file{path};

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in{&file};
        return in.readAll();
    }

    return "";
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    a.setStyleSheet(readTextFile(":/styles/style.css"));

    w.show();
    return a.exec();
}
