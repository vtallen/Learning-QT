#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    StarDelegate *delegate = new StarDelegate(this);

    m_table.append({"Nodus sector field - Blue", "Nodus", 5});
    m_table.append({"Orient Kanno - Green", "Orient", 3});
    m_table.append({"Seagull 1963", "Seaguss", 5});

    ui->tableWidget->setRowCount(m_table.size());
    ui->tableWidget->setColumnCount(m_table[0].size());
    ui->tableWidget->setItemDelegateForColumn(2, delegate);

    for (int row{0}; row < m_table.size(); ++row) {
        QTableWidgetItem *item0 = new QTableWidgetItem(m_table[row][0].toString());
        QTableWidgetItem *item1 = new QTableWidgetItem(m_table[row][1].toString());
        QTableWidgetItem *item2 = new QTableWidgetItem(m_table[row][2].toString());

        ui->tableWidget->setItem(row, 0, item0);
        ui->tableWidget->setItem(row, 1, item1);
        ui->tableWidget->setItem(row, 2, item2);
    }
}

Widget::~Widget()
{
    delete ui;
}

