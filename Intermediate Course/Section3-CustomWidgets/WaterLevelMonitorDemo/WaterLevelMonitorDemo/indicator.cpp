#include "indicator.h"
#include <QPainter>
#include <QPen>
#include <QBrush>

Indicator::Indicator(QWidget *parent) : QWidget(parent),
    m_greenActive(false),
    m_yellowActive(false),
    m_redActive(false),
    m_lightsOn(true)
{
    setSizePolicy(QSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred));

    m_timer = new QTimer(this);
    m_timer->setInterval(750);
    connect(m_timer, &QTimer::timeout, this, &Indicator::toggleLights);
    m_timer->start();
}

void Indicator::paintEvent(QPaintEvent *event)
{

    QPen mPen;
    mPen.setWidth(3);
    mPen.setColor(Qt::black);

    QPainter painter(this);
    painter.setPen(mPen);
    painter.setBrush(Qt::gray);//Filll color

    painter.drawRect(QRectF(0,0,120,330));

    // Draw lights
    if (m_redActive) {
        painter.setBrush((m_lightsOn == true) ? Qt::red : Qt::black);
        painter.drawEllipse(10, 10, 100, 100);

        painter.setBrush(Qt::black);
        painter.drawEllipse(10, 115, 100, 100);

        painter.setBrush(Qt::black);
        painter.drawEllipse(10, 220, 100, 100);
    } else if (m_greenActive) {
        painter.setBrush(Qt::black);
        painter.drawEllipse(10, 10, 100, 100);

        painter.setBrush((m_lightsOn == true) ? Qt::green : Qt::black);
        painter.drawEllipse(10, 115, 100, 100);

        painter.setBrush(Qt::black);
        painter.drawEllipse(10, 220, 100, 100);
    } else if (m_yellowActive) {
        painter.setBrush(Qt::black);
        painter.drawEllipse(10, 10, 100, 100);

        painter.setBrush(Qt::black);
        painter.drawEllipse(10, 115, 100, 100);

        painter.setBrush((m_lightsOn == true) ? Qt::yellow : Qt::black);
        painter.drawEllipse(10, 220, 100, 100);
    } else {
        painter.setBrush(Qt::black);
        painter.drawEllipse(10, 10, 100, 100);

        painter.setBrush(Qt::black);
        painter.drawEllipse(10, 115, 100, 100);

        painter.setBrush(Qt::black);
        painter.drawEllipse(10, 220, 100, 100);
    }
}

void Indicator::toggleLights() {
    if (!m_lightsOn) {
        m_lightsOn = true;
    } else {
        m_lightsOn = false;
    }
    update();
}

void Indicator::activateNormal() {
    m_greenActive = true;
    m_redActive = m_yellowActive = false;
}

void Indicator::activateWarning() {
    m_yellowActive = true;
    m_redActive = m_greenActive = false;
}

void Indicator::activateDanger() {
    m_redActive = true;
    m_greenActive = m_yellowActive = false;
}

QSize Indicator::sizeHint() const
{
    return QSize(120,350);
}

