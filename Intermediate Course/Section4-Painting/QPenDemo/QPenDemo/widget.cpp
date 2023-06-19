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
    pen.setStyle(Qt::DashDotDotLine);

    painter.setPen(pen);
    painter.setBrush(Qt::red);
    painter.drawRect(10, 10, 100, 100);

    QVector<qreal> dashes;
    qreal space = 4;
    dashes << 1 << space << 3 << space << 9 << space << 27 << space << 9 << space;
    pen.setDashPattern(dashes);
    painter.setPen(pen);
    painter.drawRect(560, 10, 100, 100);

    QPoint start(100, 150);
    QPoint end(500, 150);
    pen.setWidth(20);
    pen.setStyle(Qt::SolidLine);
    pen.setCapStyle(Qt::RoundCap);
    painter.setPen(pen);
    painter.drawLine(start, end);


}
