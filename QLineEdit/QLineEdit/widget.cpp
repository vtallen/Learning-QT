#include "widget.h"
#include "./ui_widget.h"

#include <QDebug>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QLabel *firstNameLabel{new QLabel("First Name", this)};
    firstNameLabel->setMinimumSize(70, 50);
    firstNameLabel->move(10, 10);

    QLineEdit *firstNameLineEdit{new QLineEdit(this)};
    firstNameLineEdit->setMinimumSize(200, 50);
    firstNameLineEdit->move(100, 10);

    QLabel *lastNameLabel{new QLabel("Last Name", this)};
    lastNameLabel->setMinimumSize(70, 50);
    lastNameLabel->move(10, 70);

    QLineEdit *lastNameLineEdit{new QLineEdit(this)};
    lastNameLineEdit->setMinimumSize(200, 50);
    lastNameLineEdit->move(100, 70);

    QLabel *cityLabel{new QLabel("City", this)};
    cityLabel->setMinimumSize(70, 50);
    cityLabel->move(10, 130);

    QLineEdit *cityLineEdit{new QLineEdit(this)};
    cityLineEdit->setMinimumSize(200, 50);
    cityLineEdit->move(100, 130);

    QFont buttonFont{"Times", 20, QFont::Bold};
    QPushButton *button{new QPushButton{"Grab data", this}};
    button->setFont(buttonFont);
    button->move(0, 190);

    firstNameLineEdit->setPlaceholderText("First");
    lastNameLineEdit->setPlaceholderText("Last");
    cityLineEdit->setPlaceholderText("City");

    connect(button, &QPushButton::clicked, [=](){
        QString firstName{firstNameLineEdit->text()};
        QString lastName{lastNameLineEdit->text()};;
        QString city{cityLineEdit->text()};

        if (!firstName.isEmpty() && !lastName.isEmpty() && !city.isEmpty()) {
            qDebug() << firstName << " " << lastName << " from " << city;
            QMessageBox::information(this, "Hello ", "Hello, " + firstName + " " + lastName + ". You are from " + city, QMessageBox::Ok);
        } else {
            qDebug() << "One field is empty";
        }
    });

    connect(firstNameLineEdit, &QLineEdit::cursorPositionChanged, [=](){
        qDebug() << "The current cursor position is : " << firstNameLineEdit->cursorPosition();
    });

    connect(firstNameLineEdit, &QLineEdit::editingFinished, [=](){
        qDebug() << "Editing finished";
    });

    connect(firstNameLineEdit, &QLineEdit::returnPressed, [=](){
        qDebug() << "Return pressed";
    });
}

Widget::~Widget()
{
    delete ui;
}





QSize Widget::sizeHint() const
{
    return QSize(150, 150);
}
