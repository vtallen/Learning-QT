#include "widget.h"
#include "./ui_widget.h"
#include <QPixmap>
#include <QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPixmap pix(width() - 10, height() - 10);
    pix.fill(Qt::gray);

    QPen pen;
    pen.setWidth(5);
    pen.setColor(Qt::white);

    QFont font("Consolas", 20, QFont::Bold);

    QPainter painter(&pix);
    painter.setPen(pen);
    painter.setBrush(Qt::green);
    painter.setFont(font);

    painter.drawRect(pix.rect());

    painter.setBrush(Qt::blue);
    painter.drawRect(50, 50, 100, 100);

    painter.drawText(30, 320, "TEXT WITH QPAINTER");

    ui->label->setPixmap(pix);

    qDebug() << "Painter window (logical): " << painter.window();
    qDebug() << "Painter viewPort(physical): " << painter.viewport();
}

Widget::~Widget()
{
    delete ui;
}

