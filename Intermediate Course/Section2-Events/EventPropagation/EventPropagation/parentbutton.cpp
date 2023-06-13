#include "parentbutton.h"

ParentButton::ParentButton(QWidget *parent) : QPushButton(parent)
{

}


void ParentButton::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "ParentButton Mouse Press Event";
    QPushButton::mousePressEvent(event);
}
