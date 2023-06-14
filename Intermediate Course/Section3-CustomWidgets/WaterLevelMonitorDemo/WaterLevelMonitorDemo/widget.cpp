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
    //Indicator *indicator = new Indicator(this);
    //WaterTank *tank = new WaterTank(this);

    connect(ui->tank, &WaterTank::normalLevel, ui->indicator, &Indicator::activateNormal);
    connect(ui->tank, &WaterTank::warningLevel, ui->indicator, &Indicator::activateWarning);
    connect(ui->tank, &WaterTank::dangerLevel, ui->indicator, &Indicator::activateDanger);

    QTimer *timer = new QTimer(this);
    timer->setInterval(300);
    connect(timer, &QTimer::timeout, this, [=](){
        ui->tank->fillTank(1.5);
        if (ui->tank->getPercentFull() == 100) ui->tank->resetTank();
    });
    timer->start();
}

Widget::~Widget()
{
    delete ui;
}

