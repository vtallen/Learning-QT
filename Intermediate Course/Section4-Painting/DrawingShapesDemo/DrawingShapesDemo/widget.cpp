#include "widget.h"
#include "./ui_widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}



void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen pen;
    pen.setColor(Qt::white);
    pen.setWidth(5);

    painter.setPen(pen);

    painter.setBrush(Qt::red);
    painter.drawRect(10, 10, 100, 100);

    painter.setBrush(Qt::green);
    painter.drawEllipse(120, 10, 200, 100);

    painter.setBrush(Qt::gray);
    painter.drawRoundedRect(QRect(330, 10, 200, 100), 5, 5);

    painter.drawLine(550, 30, 650, 30);

}
