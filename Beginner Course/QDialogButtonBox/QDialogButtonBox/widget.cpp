#include "widget.h"
#include "./ui_widget.h"
#include "infodialog.h"

#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->showInfoButton, &QPushButton::clicked, this, &Widget::showInfoButtonClicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::showInfoButtonClicked()
{
    InfoDialog *dialog{new InfoDialog{}};

    dialog->exec();
    dialog->raise();
    dialog->activateWindow();
}
