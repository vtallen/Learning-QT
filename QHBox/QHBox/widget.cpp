#include "widget.h"
#include "./ui_widget.h"
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
//    QHBoxLayout *layout{new QHBoxLayout{}};

//    layout->addWidget(ui->buttonOne);
//    layout->addWidget(ui->buttonTwo);
//    layout->addWidget(ui->buttonThree);
//    layout->addWidget(ui->buttonFour);
//    layout->addWidget(ui->buttonFive);

}

Widget::~Widget()
{
    delete ui;
}

