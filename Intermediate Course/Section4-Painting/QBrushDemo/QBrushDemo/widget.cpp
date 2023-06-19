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

    QBrush brush;
    brush.setColor(Qt::red);
    brush.setStyle(Qt::SolidPattern);

    painter.setBrush(brush);
    painter.drawRect(20, 20, 100, 100);

    brush.setColor(Qt::blue);
    brush.setStyle(Qt::Dense1Pattern);
    painter.setBrush(brush);
    painter.drawRect(130, 20, 100, 100);

    brush.setColor(Qt::red);
    brush.setStyle(Qt::Dense2Pattern);
    painter.setBrush(brush);
    painter.drawRect(240, 20, 100, 100);

    brush.setColor(Qt::blue);
    brush.setStyle(Qt::Dense3Pattern);
    painter.setBrush(brush);
    painter.drawRect(350, 20, 100, 100);

    brush.setColor(Qt::red);
    brush.setStyle(Qt::Dense4Pattern);
    painter.setBrush(brush);
    painter.drawRect(460, 20, 100, 100);

    brush.setColor(Qt::blue);
    brush.setStyle(Qt::Dense5Pattern);
    painter.setBrush(brush);
    painter.drawRect(570, 20, 100, 100);

    brush.setColor(Qt::red);
    brush.setStyle(Qt::Dense6Pattern);
    painter.setBrush(brush);
    painter.drawRect(680, 20, 100, 100);

    brush.setColor(Qt::blue);
    brush.setStyle(Qt::Dense7Pattern);
    painter.setBrush(brush);
    painter.drawRect(790, 20, 100, 100);

    //Second row
    brush.setColor(Qt::red);
    brush.setStyle(Qt::HorPattern);
    painter.setBrush(brush);
    painter.drawRect(20, 130, 100, 100);

    brush.setColor(Qt::blue);
    brush.setStyle(Qt::VerPattern);
    painter.setBrush(brush);
    painter.drawRect(130, 130, 100, 100);

    brush.setColor(Qt::red);
    brush.setStyle(Qt::CrossPattern);
    painter.setBrush(brush);
    painter.drawRect(240, 130, 100, 100);

    brush.setColor(Qt::blue);
    brush.setStyle(Qt::BDiagPattern);
    painter.setBrush(brush);
    painter.drawRect(350, 130, 100, 100);

    brush.setColor(Qt::red);
    brush.setStyle(Qt::FDiagPattern);
    painter.setBrush(brush);
    painter.drawRect(460, 130, 100, 100);

    brush.setColor(Qt::blue);
    brush.setStyle(Qt::DiagCrossPattern);
    painter.setBrush(brush);
    painter.drawRect(570, 130, 100, 100);
}
