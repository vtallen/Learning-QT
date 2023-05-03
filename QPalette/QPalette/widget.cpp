#include "widget.h"
#include "./ui_widget.h"


#include <QDebug>
#include <QPalette>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->label->setAutoFillBackground(true);

    connect(ui->activeButton, &QPushButton::clicked, this, &Widget::activeButtonClicked);
    connect(ui->disabledButton, &QPushButton::clicked, this, &Widget::disabledButtonClicked);

    QPalette palette{ui->label->palette()};

    palette.setColor(QPalette::Window, Qt::blue);
    palette.setColor(QPalette::WindowText, Qt::red);

    ui->label->setPalette(palette);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::activeButtonClicked() {
    static bool clicked{false};

    qDebug() << "Active Button Clicked";
    if (!clicked) {
        ui->disabledButton->setDisabled(false);
        clicked = true;
    } else {
        ui->disabledButton->setDisabled(true);
        clicked = false;
    }

    QPalette::ColorGroup activeButtonColorGroup{ui->activeButton->palette().currentColorGroup()};
    QPalette::ColorGroup disabledButtonColorGroup{ui->disabledButton->palette().currentColorGroup()};

    qDebug() << "Active button color group " << activeButtonColorGroup;
    qDebug() << "Disabled button color group " << disabledButtonColorGroup;
}

void Widget::disabledButtonClicked() {
    qDebug() << "Disabled button clicked";
}

