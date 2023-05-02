#include "widget.h"
#include "./ui_widget.h"

#include <QFont>
#include <QFontDialog>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->changeFontButton, &QPushButton::clicked, this, &Widget::changeFontButtonClicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeFontButtonClicked() {
    bool dialogOK{};

    QFont font{QFontDialog::getFont(&dialogOK, QFont("Helvetica [Cronyx]", 10), this)};

    if (dialogOK) {
        ui->label->setFont(font);
    } else {
        qDebug() << "Dialog rejected";
    }

}

