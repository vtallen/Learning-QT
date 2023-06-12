#include "widget.h"
#include "./ui_widget.h"
#include "doubleclickbutton.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    DoubleClickButton *button = new DoubleClickButton(this);
    button->setText("Double Clickable Button");
    connect(button, &DoubleClickButton::doubleClicked, this, [](){
        qDebug() << "Button double clicked";
    });
}

Widget::~Widget()
{
    delete ui;
}

