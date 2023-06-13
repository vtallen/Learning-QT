#include "childlineedit.h"
#include <QKeyEvent>

ChildLineEdit::ChildLineEdit(QWidget *parent)
    : ParentLineEdit{parent}
{

}


void ChildLineEdit::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "ChildLineEdit keyPressEvent";
    if (event->key() == Qt::Key_Delete) {
        qDebug() << "Pressed the delete key";
        clear();
    } else {
        ParentLineEdit::keyPressEvent(event);
    }
}
