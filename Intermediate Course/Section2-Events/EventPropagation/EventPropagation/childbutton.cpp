#include "childbutton.h"
#include <QDebug>

ChildButton::ChildButton(QWidget *parent)
    : ParentButton{parent}
{

}


void ChildButton::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "Child mousePressEvent called";
    ParentButton::mousePressEvent(event);
}
