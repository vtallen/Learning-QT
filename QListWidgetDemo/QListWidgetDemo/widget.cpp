#include "widget.h"
#include <QDebug>
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->listItemsButton, &QPushButton::clicked, this, &Widget::listItemsButtonPressed);
    connect(ui->addItemButton, &QPushButton::clicked, this, &Widget::addItemButtonPressed);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::listItemsButtonPressed()
{
    qDebug() << "count: " << ui->listWidget->count() << '\n';
    for (std::size_t i{0}; i < ui->listWidget->count(); ++i) {
        auto item{ui->listWidget->item(i)};
        item->setToolTip("Tooltip" + QString::number(i));
        QVariant data{item->data(Qt::DisplayRole)};
        qDebug() << data.toString();
    }
}

void Widget::addItemButtonPressed()
{
    ui->listWidget->addItem("Hello world!");
}
