#include "parentlineedit.h"

ParentLineEdit::ParentLineEdit(QWidget *parent)
    : QLineEdit{parent}
{

}


void ParentLineEdit::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "Parent keyPressEvent";
    QLineEdit::keyPressEvent(event);
}
