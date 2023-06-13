#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->readDataButton, &QPushButton::clicked, this, &Widget::onReadDataButtonClicked);

    m_model = new QStandardItemModel(4, 4);
    for (int row{0}; row < m_model->rowCount(); ++row) {
        for (int column{0}; column < m_model->columnCount(); ++column) {
            QStandardItem *item{new QStandardItem(QString("row %0, column %1").arg(row).arg(column))};
            m_model->setItem(row, column, item);
        }
    }

    ui->tableView->setModel(m_model);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onReadDataButtonClicked() {
    for (int row{0}; row < m_model->rowCount(); ++row) {
        for (int column{0}; column < m_model->columnCount(); ++column) {
            auto index{m_model->index(row, column, QModelIndex())};

            auto data{m_model->data(index, Qt::DisplayRole)};
            qDebug() << data.toString();
        }
        qDebug() << "------------------";
    }
}
