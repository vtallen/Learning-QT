#include "widget.h"
#include "./ui_widget.h"

#include <QColorDialog>
#include <QDebug>
#include <QPushButton>
#include <QSettings>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    for (int row{0}; row < ui->gridLayout->rowCount(); ++row) {
        for (int col{0}; col < ui->gridLayout->columnCount(); ++col) {
            QPushButton *button{
                qobject_cast<QPushButton *>(ui->gridLayout->itemAtPosition(row, col)->widget())};

            QString buttonText{button->text()};
            int index{getButtonColorIndex(buttonText)};

            m_colorList.append(loadColor(buttonText));
            setLoadedColor(button);
        }
    }

    connect(ui->oneButton, &QPushButton::clicked, this, &Widget::onColorButtonClicked);
    connect(ui->twoButton, &QPushButton::clicked, this, &Widget::onColorButtonClicked);
    connect(ui->threeButton, &QPushButton::clicked, this, &Widget::onColorButtonClicked);
    connect(ui->fourButton, &QPushButton::clicked, this, &Widget::onColorButtonClicked);
    connect(ui->fiveButton, &QPushButton::clicked, this, &Widget::onColorButtonClicked);
    connect(ui->sixButton, &QPushButton::clicked, this, &Widget::onColorButtonClicked);
    connect(ui->sevenButton, &QPushButton::clicked, this, &Widget::onColorButtonClicked);
    connect(ui->eightButton, &QPushButton::clicked, this, &Widget::onColorButtonClicked);
    connect(ui->nineButton, &QPushButton::clicked, this, &Widget::onColorButtonClicked);

    connect(ui->clearButton, &QPushButton::clicked, this, &Widget::clearButtonClicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onColorButtonClicked()
{
    QPushButton *button{qobject_cast<QPushButton *>(sender())};
    QString buttonText{button->text()};
    int index{getButtonColorIndex(buttonText)};

    QColor color{QColorDialog::getColor(Qt::black, this, "Choose a color")};
    saveColor(buttonText, color);
    m_colorList[index] = loadColor(buttonText);
    setLoadedColor(button);
}

void Widget::clearButtonClicked()
{
    for (int row{0}; row < ui->gridLayout->rowCount(); ++row) {
        for (int col{0}; col < ui->gridLayout->columnCount(); ++col) {
            QPushButton *button{
                qobject_cast<QPushButton *>(ui->gridLayout->itemAtPosition(row, col)->widget())};

            QString buttonText{button->text()};
            int index{getButtonColorIndex(buttonText)};

            saveColor(buttonText, Qt::white);
            m_colorList[index] = Qt::white;
            setLoadedColor(button);
        }
    }
}

int Widget::getButtonColorIndex(QString buttonText)
{
    if (buttonText == "One")
        return 0;
    else if (buttonText == "Two")
        return 1;
    else if (buttonText == "Three")
        return 2;
    else if (buttonText == "Four")
        return 3;
    else if (buttonText == "Five")
        return 4;
    else if (buttonText == "Six")
        return 5;
    else if (buttonText == "Seven")
        return 6;
    else if (buttonText == "Eight")
        return 7;
    else if (buttonText == "Nine")
        return 8;
    else
        return 0;
}

void Widget::saveColor(QString key, QColor color)
{
    int red{color.red()};
    int green{color.green()};
    int blue{color.blue()};

    QSettings settings{"Vincent", "SettingsDemo"};

    settings.beginGroup("ButtonColor");
    settings.setValue(key + "r", red);
    settings.setValue(key + "g", green);
    settings.setValue(key + "b", blue);
    settings.endGroup();
}

QColor Widget::loadColor(QString key)
{
    int red{};
    int green{};
    int blue{};

    QSettings settings{"Vincent", "SettingsDemo"};

    settings.beginGroup("ButtonColor");
    red = settings.value(key + "r", QVariant(0)).toInt();
    green = settings.value(key + "g", QVariant(0)).toInt();
    blue = settings.value(key + "b", QVariant(0)).toInt();
    settings.endGroup();

    return QColor{red, green, blue};
}

void Widget::setLoadedColor(QPushButton *button)
{
    QString buttonText{button->text()};
    int index{getButtonColorIndex(buttonText)};

    QColor color{loadColor(buttonText)};

    m_colorList[index] = color;
    QString css{QString("background-color: %1;").arg(color.name())};
    button->setStyleSheet(css);
}
