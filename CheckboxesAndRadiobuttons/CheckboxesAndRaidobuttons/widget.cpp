#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QButtonGroup *group = new QButtonGroup(this);
    group->addButton(ui->windowsCheckBox);
    group->addButton(ui->macCheckBox);
    group->addButton(ui->linuxCheckBox);
}

Widget::~Widget()
{
    delete ui;
}

