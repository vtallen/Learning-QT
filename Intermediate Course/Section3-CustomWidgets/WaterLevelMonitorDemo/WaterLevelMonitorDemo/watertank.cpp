#include "watertank.h"

WaterTank::WaterTank(QWidget *parent)
    : QWidget{parent}
{
    setSizePolicy(QSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred));
    m_percentFull = 0;
}


void WaterTank::paintEvent(QPaintEvent *event)
{
    QPen pen;
    pen.setWidth(3);
    pen.setColor(Qt::white);

    QPainter painter(this);
    painter.setPen(pen);

    //painter.drawRect(QRect(0, 0, 400, 350));
    painter.drawLine(QLineF(0, 0, 0, 350));
    painter.drawLine(QLineF(0, 350, 400, 350));
    painter.drawLine(QLineF(400, 0, 400, 350));

    painter.setBrush(Qt::blue);
    QPen bluePen;
    bluePen.setColor(Qt::blue);
    painter.setPen(bluePen);


    double y{345 - ((m_percentFull / 100.0) * 345)};
    double height{345 - y};
    painter.drawRect(QRect(5, y, 390, height));

    if (m_percentFull >= 50) emit warningLevel();
    if (m_percentFull >= 70) emit dangerLevel();
    if (m_percentFull < 50) emit normalLevel();
}

int WaterTank::getPercentFull() {
    return m_percentFull;
}

void WaterTank::fillTank(double percent) {
    if ((m_percentFull + percent) <= 100) m_percentFull += percent;
    else m_percentFull = 100;
    update();
}

void WaterTank::resetTank() {
    m_percentFull = 0;
    update();
}

QSize WaterTank::sizeHint() const
{
    return QSize(400, 300);
}
