#include "widget.h"
#include "./ui_widget.h"

#include <QPushButton>
#include <QTableWidget>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->listItemsButton, &QPushButton::clicked, this, &Widget::onListItemsButtonClicked);
    connect(ui->setItemButton, &QPushButton::clicked, this, &Widget::onSetItemButtonClicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onListItemsButtonClicked() {
    for (std::size_t i{}; i < ui->tableWidget->rowCount(); ++i) {
        for (std::size_t j{}; j < ui->tableWidget->columnCount(); ++j) {
            auto itemPtr{ui->tableWidget->item(i, j)};

            if (itemPtr) {
                QVariant data{itemPtr->data(Qt::DisplayRole)};
                qDebug() << data.toString();
            } else {
                qDebug() << "no data";
            }
        }
    }
}

void Widget::onSetItemButtonClicked() {
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->insertColumn(ui->tableWidget->columnCount());

    QTableWidgetItem *newItem {new QTableWidgetItem("Hello")};
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, ui->tableWidget->columnCount() - 1, newItem);
}

