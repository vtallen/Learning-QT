#include "widget.h"
#include "./ui_widget.h"
#include <QPainter>
#include <QPainterPath>

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
    QPainterPath path;
    path.addRect(100, 100, 100, 100);
    path.moveTo(150, 150);
    path.lineTo(150, 50);
    path.arcTo(50, 50, 200, 200, 90, 90);
    path.lineTo(150, 150);

    painter.setBrush(Qt::green);
    painter.drawPath(path);

    QPainterPath circlePath;
    circlePath.addEllipse(200, 200, 100, 100);
    circlePath.moveTo(250, 200);
    circlePath.lineTo(400, 200);
    circlePath.moveTo(250, 300);
    circlePath.lineTo(400, 300);
    circlePath.addEllipse(350, 200, 100, 100);
    painter.drawPath(circlePath);
}
