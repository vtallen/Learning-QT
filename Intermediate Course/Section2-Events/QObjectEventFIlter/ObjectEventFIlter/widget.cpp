#include "widget.h"
#include "./ui_widget.h"
#include "keyboardfilter.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->lineEdit->installEventFilter(new KeyboardFilter(this));
}

Widget::~Widget()
{
    delete ui;
}

