#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFile>
#include <QIODevice>
#include <QTextStream>

#include <cassert>

#include "person.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    Person *mRootPerson{nullptr};

    QStringList getNameAndProfession(QString string);

private slots:
    void readFileClicked();
    void showInfoClicked();
};
#endif // WIDGET_H
