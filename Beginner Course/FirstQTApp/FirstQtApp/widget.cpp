#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_clickMeButton_clicked()
{
    qDebug() << "Button has been clicked!";
    bool returnValue = QMessageBox::information(this, "Message", "You clicked the button");
    qDebug() << returnValue;
}

