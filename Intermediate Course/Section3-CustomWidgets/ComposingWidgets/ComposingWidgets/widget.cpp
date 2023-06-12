#include "widget.h"
#include "./ui_widget.h"
#include "colorpicker.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ColorPicker *picker = new ColorPicker(this);
}

Widget::~Widget()
{
    delete ui;
}

