#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    Button *button = new Button(this);
    button->setText("Button");
    ui->verticalLayout->addWidget(button);
    connect(button, &QPushButton::clicked, this, [](){
    qDebug() << "Button clicked";
    });
}

Widget::~Widget()
{
    delete ui;
}

