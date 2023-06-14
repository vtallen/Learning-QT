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
    QPen pen(Qt::red);
    pen.setWidth(3);

    QPainter painter(this);

    painter.setPen(pen);
    painter.drawRect(50, 50, 100, 100);

    painter.save();

    painter.setWindow(0, 0, 300, 200);
    pen.setColor(Qt::green);
    painter.setPen(pen);

    painter.drawRect(50, 50, 100, 100);

    painter.restore();

    painter.save();

    pen.setColor(Qt::blue);
    painter.setPen(pen);
    painter.setViewport(0, 0, 300, 200);
    painter.drawRect(50, 50, 100, 100);

    painter.restore();
}
