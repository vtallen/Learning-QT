#include "widget.h"
#include "./ui_widget.h"

#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_model = new QStringListModel(this);
    ui->listView->setModel(m_model);

    connect(ui->showDataButton, &QPushButton::clicked, this, &Widget::showDataButtonClicked);

    QStringList list;
    list << "Dog" << "Cat" << "Potato" << "Fat boy" << "The missile" << "Piano";

    m_model->setStringList(list);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::showDataButtonClicked() {
    QStringList list{m_model->stringList()};
    qDebug() << "The current data is: " << list;
}
