#include "widget.h"
#include "./ui_widget.h"

#include <QDebug>
#include <QLabel>
#include <QTextEdit>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setupUi();
    setFixedSize(400, 400);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::setupUi()
{
    QFont labelFont{"Times", 10, QFont::Bold};
    QLabel *mLabel{new QLabel{"This is my text", this}};
    mLabel->setFont(labelFont);
    mLabel->move(100, 25);

    QTextEdit *textEdit{new QTextEdit{this}};
    textEdit->move(70, 55);

    connect(textEdit, &QTextEdit::textChanged, [=](){
        qDebug() << "Text changed";
    });

    QPushButton *copyButton{new QPushButton{"Copy", this}};
    copyButton->setMinimumSize(50, 25);
    copyButton->move(10, 250);
    connect(copyButton, &QPushButton::clicked, [=](){
        textEdit->copy();
    });

    QPushButton *cutButton{new QPushButton{"Cut", this}};
    cutButton->setMinimumSize(50, 25);
    cutButton->move(110, 250);
    connect(cutButton, &QPushButton::clicked, [textEdit](){
        textEdit->cut();
    });

    QPushButton *pastButton{new QPushButton{"Paste", this}};
    pastButton->setMinimumSize(50, 25);
    pastButton->move(210, 250);
    connect(pastButton, &QPushButton::clicked, [=](){
        textEdit->paste();
    });

    QPushButton *undoButton{new QPushButton{"Undo", this}};
    undoButton->setMinimumSize(50, 25);
    undoButton->move(10, 280);
    connect(undoButton, &QPushButton::clicked, [=](){
        textEdit->undo();
    });

    QPushButton *redoButton{new QPushButton{"Redo", this}};
    redoButton->setMinimumSize(50, 25);
    redoButton->move(110, 280);
    connect(redoButton, &QPushButton::clicked, [=](){
        textEdit->redo();
    });

    QPushButton *plainTextButton{new QPushButton{"Plain text", this}};
    plainTextButton->setMinimumSize(100, 25);
    plainTextButton->move(10, 310);
    connect(plainTextButton, &QPushButton::clicked, [=](){
        textEdit->setPlainText("This is some plain text that just got added to your text edit");
    });

    QPushButton *htmlButton{new QPushButton{"Html", this}};
    htmlButton->setMinimumSize(100, 25);
    htmlButton->move(120, 310);
    connect(htmlButton, &QPushButton::clicked, [=](){
        textEdit->setHtml("<h1>This is a heading</h1><p>This is some pragraph text, hello there!</p>");
    });

    QPushButton *grabTextButton{new QPushButton{"Grab text", this}};
    grabTextButton->setMinimumSize(100, 25);
    grabTextButton->move(10, 340);
    connect(grabTextButton, &QPushButton::clicked, [=](){
        qDebug() << "Plain text: " << textEdit->toPlainText();
    });

    QPushButton *grabHtmlButton{new QPushButton{"Grab HTML", this}};
    grabHtmlButton->setMinimumSize(100, 25);
    grabHtmlButton->move(120, 340);
    connect(grabHtmlButton, &QPushButton::clicked, [=](){
        qDebug() << "Html: " << textEdit->toHtml();
    });

}

