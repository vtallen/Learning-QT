#include "widget.h"
#include "./ui_widget.h"

#include <QButtonGroup>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QButtonGroup *group = new QButtonGroup(this);
    group->addButton(ui->windowsCheckBox);
    group->addButton(ui->linuxCheckBox);
    group->addButton(ui->macCheckBox);
    group->setExclusive(true);


}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_grabDataButton_clicked()
{
    if(ui->coffeeCheckBox->isChecked()) {
        qDebug() << "Coffee is checked, good choice";
    }
}


void Widget::on_setDataButton_clicked()
{
    ui->coffeeCheckBox->setCheckState(Qt::Checked);
}

