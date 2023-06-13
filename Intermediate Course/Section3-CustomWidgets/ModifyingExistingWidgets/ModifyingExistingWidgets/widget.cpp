#include "widget.h"
#include "./ui_widget.h"
#include "datetimewidget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    DateTimeWidget *dtWid = new DateTimeWidget(this);
    ui->verticalLayout->addWidget(dtWid);
}

Widget::~Widget()
{
    delete ui;
}

