#include "widget.h"
#include "./ui_widget.h"

#include <QColorDialog>
#include <QFontDialog>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setAutoFillBackground(true);

    connect(ui->textColorButton, &QPushButton::clicked, this, &Widget::textColorButtonClicked);
    connect(ui->fontButton, &QPushButton::clicked, this, &Widget::fontButtonClicked);
    connect(ui->backgroundColorButton, &QPushButton::clicked, this, &Widget::backgroundColorButtonClicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::textColorButtonClicked() {
    QPalette palette{ui->label->palette()};
    QColor color{palette.color(QPalette::WindowText)};
    QColor chosenColor{QColorDialog::getColor(color, this, "Choose Text Color")};

    if (chosenColor.isValid()) {
        palette.setColor(QPalette::WindowText, chosenColor);
        ui->label->setPalette(palette);
        qDebug() << "User chose a valid color";
    } else {
        qDebug() << "User exited the dialog";
    }
}

void Widget::backgroundColorButtonClicked() {
    QPalette palette{ui->label->palette()};
    QColor color{palette.color(QPalette::Window)};
    QColor chosenColor{QColorDialog::getColor(color, this, "Choose Text Color")};

    if (chosenColor.isValid()) {
        palette.setColor(QPalette::Window, chosenColor);
        ui->label->setPalette(palette);
        qDebug() << "User chose a valid color";
    } else {
        qDebug() << "User exited the dialog";
    }
}
void Widget::fontButtonClicked() {
    bool ok;
    QFont font{QFontDialog::getFont(&ok, QFont("Times", 12), this)};

    if (ok) {
        ui->label->setFont(font);
        qDebug() << "Font Chosen";
    } else {
        qDebug() << "User exited the dialog";
    }
}

