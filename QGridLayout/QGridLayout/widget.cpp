#include "widget.h"
#include "./ui_widget.h"

#include <QGridLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QGridLayout *layout{new QGridLayout()};

    //First row
    layout->addWidget(ui->buttonOne, 0, 0);
    layout->addWidget(ui->buttonTwo, 0, 1);
    layout->addWidget(ui->buttonThree, 0, 2, 2, 1);

    //Second row
    layout->addWidget(ui->buttonFour, 1, 0);
    layout->addWidget(ui->buttonFive, 1, 1);

    //Third row
    layout->addWidget(ui->buttonSeven, 2, 0, 1, 2);
    layout->addWidget(ui->buttonNine, 2, 2);
    setLayout(layout);
}

Widget::~Widget()
{
    delete ui;
}

