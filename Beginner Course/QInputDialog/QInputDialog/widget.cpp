#include "widget.h"
#include "./ui_widget.h"

#include <QInputDialog>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->inputDialogButton, &QPushButton::clicked, this, &Widget::inputDialogButtonClicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::inputDialogButtonClicked() {
    bool ok;
    double input{QInputDialog::getDouble(this, "Enter a double", "Amount:", 19.5, -100, 100, 2, &ok)};

    if (ok) {
        qDebug() << "Your double value is " << QString::number(input);
    }
}
