#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

//    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(changeText()));
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::changeText);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeText()
{
    ui->myLabel->setText("HELLO THERE");
}

