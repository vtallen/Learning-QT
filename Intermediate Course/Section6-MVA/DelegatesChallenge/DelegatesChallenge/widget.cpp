#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    PersonModel *model = new PersonModel(this);
    PersonDelegate *delegate = new PersonDelegate(this);

    ui->tableView->setModel(model);
    ui->tableView->setItemDelegate(delegate);

}

Widget::~Widget()
{
    delete ui;
}

