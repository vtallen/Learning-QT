#include "widget.h"
#include "./ui_widget.h"

#include "somedialog.h"

#include <QApplication>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->clickButton->setStyleSheet("QPushButton{background-color:yellow; color:blue;}");

    connect(ui->clickButton, &QPushButton::clicked, this, &Widget::clickButtonClicked);
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::pushButtonClicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::clickButtonClicked() {
    SomeDialog *someDialog{new SomeDialog{this}};
    someDialog->exec();
}

void Widget::pushButtonClicked() {
    QApplication::quit();
}
