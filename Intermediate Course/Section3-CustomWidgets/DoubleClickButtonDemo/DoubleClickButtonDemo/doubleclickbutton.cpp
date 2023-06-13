#include "doubleclickbutton.h"

DoubleClickButton::DoubleClickButton(QWidget *parent)
    : QPushButton(parent)
{

}


void DoubleClickButton::mouseDoubleClickEvent(QMouseEvent *event)
{
    QPushButton::mouseDoubleClickEvent(event);
    emit doubleClicked();
}
