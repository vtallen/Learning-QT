#ifndef APPLICATION_H
#define APPLICATION_H

#include <QObject>
#include <QApplication>
#include <QDebug>

class Application : public QApplication
{
    Q_OBJECT
public:
    explicit Application(int &argc, char **argv);

signals:


    // QCoreApplication interface
public:
    bool notify(QObject *dest, QEvent *event) override;
};

#endif // APPLICATION_H
