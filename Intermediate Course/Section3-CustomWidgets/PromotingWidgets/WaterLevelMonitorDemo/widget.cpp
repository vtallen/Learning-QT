#include "widget.h"
#include "./ui_widget.h"
#include "indicator.h"
#include "watertank.h"
#include <QTimer>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    Indicator *indicator = new Indicator(this);
    //WaterTank *tank = new WaterTank(this);
    ui->horizontalLayout->addWidget(indicator);
    ui->horizontalLayout->addWidget(tank);

    connect(ui->waterTank, &WaterTank::normalLevel, indicator, &Indicator::activateNormal);
    connect(ui->waterTank, &WaterTank::warningLevel, indicator, &Indicator::activateWarning);
    connect(ui->waterTank, &WaterTank::dangerLevel, indicator, &Indicator::activateDanger);

    QTimer *timer = new QTimer(this);
    timer->setInterval(300);
    connect(timer, &QTimer::timeout, this, [=](){
        ui->waterTank->fillTank(1.5);
        if (ui->waterTank->getPercentFull() == 100) ui->waterTank->resetTank();
    });
    timer->start();
}

Widget::~Widget()
{
    delete ui;
}

