#include "application.h"

Application::Application(int &argc, char **argv)
    : QApplication{argc, argv}
{

}


bool Application::notify(QObject *dest, QEvent *event)
{
    qDebug() << "Notify called";
    return QApplication::notify(dest, event);
}
