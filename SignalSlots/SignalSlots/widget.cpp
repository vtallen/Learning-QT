#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->buttonOne, SIGNAL(clicked()), this, SLOT(Widget::buttonOneClicked));
//    connect(ui->buttonTwo, SIGNAL(clicked()), this, SLOT((Widget::buttonTwoClicked())));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::buttonOneClicked()
{
    ui->myLabel->setText("TEST");
}

void Widget::buttonTwoClicked()
{
    ui->myLabel->setText("TEST");
}


