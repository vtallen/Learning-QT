#include "dialog.h"
#include "./ui_dialog.h"
#include <QPainter>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    QLinearGradient linGrad(QPointF(70, 20), QPointF(70, 170));
    linGrad.setColorAt(0, Qt::red);
    linGrad.setColorAt(0.5, Qt::blue);
    linGrad.setColorAt(1, Qt::yellow);
    linGrad.setSpread(QGradient::ReflectSpread);

    QBrush brush(linGrad);
    painter.setBrush(brush);
    painter.drawRect(20, 20, 100, 300);
    painter.drawLine(QLineF(QPointF(70, 20), QPointF(70, 170)));

    QRadialGradient radGrad(QPointF(280, 170), 75);
    radGrad.setColorAt(0, Qt::blue);
    radGrad.setColorAt(1, Qt::yellow);

    radGrad.setSpread(QGradient::RepeatSpread);

    QBrush radBrush(radGrad);

    painter.setBrush(radBrush);
    painter.drawRect(130, 20, 300, 300);


    QConicalGradient conGrad(QPointF(600, 179), 90);
    conGrad.setColorAt(0, Qt::blue);
    conGrad.setColorAt(1, Qt::yellow);

    painter.setBrush(QBrush(conGrad));
    painter.drawEllipse(450, 20, 300, 300);
}
