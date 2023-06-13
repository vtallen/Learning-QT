#include "widget.h"
#include "./ui_widget.h"

#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->listItemsButton, &QPushButton::clicked, this, &Widget::listItemsButtonClicked);

    ui->treeWidget->setColumnCount(2);

    ui->treeWidget->setHeaderLabels(QStringList() << "ID" << "Name");

    QTreeWidgetItem *treeItem1{new QTreeWidgetItem(ui->treeWidget)};
    treeItem1->setText(0, "11");
    treeItem1->setText(1, "Snow");

    QTreeWidgetItem *treeItem2{new QTreeWidgetItem(ui->treeWidget)};
    treeItem2->setText(0, "22");
    treeItem2->setText(1, "David");

    QTreeWidgetItem *treeItem3{new QTreeWidgetItem(treeItem2)};
    treeItem3->setText(0, "69");
    treeItem3->setText(1, "Timmy");

    QTreeWidgetItem *treeItem4{new QTreeWidgetItem(treeItem3)};
    treeItem4->setText(0, "100");
    treeItem4->setText(1, "bobby boi");

 }

Widget::~Widget()
{
    delete ui;
}

void Widget::printChildren(QTreeWidgetItem *item)
{
    if (item->childCount() > 0) {
        for (std::size_t i{}; i < item->childCount(); ++i) {
            QTreeWidgetItem *tempChild{item->child(i)};
            qDebug() << tempChild->data(0, Qt::DisplayRole).toString() << " : " << tempChild->data(1, Qt::DisplayRole).toString() << "\n";
            printChildren(tempChild);
        }
    }

}

void Widget::listItemsButtonClicked() {
    for (std::size_t i{}; i < ui->treeWidget->topLevelItemCount(); ++i) {
        auto item{ui->treeWidget->topLevelItem(i)};
        qDebug() << item->data(0, Qt::DisplayRole).toString() << " : " << item->data(1, Qt::DisplayRole).toString() << "\n";
        printChildren(item);
    }
}
