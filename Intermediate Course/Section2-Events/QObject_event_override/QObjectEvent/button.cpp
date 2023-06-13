#include "button.h"
#include <QEvent>

Button::Button(QWidget *parent)
    : QPushButton{parent}
{

}


bool Button::event(QEvent *event)
{
    if ((event->type() == QEvent::MouseButtonPress) || (event->type() == QEvent::MouseButtonDblClick)) {
        qDebug() << "Button : mouse press or doubleclick detected";
        return true;
    }

    return QPushButton::event(event);
}
