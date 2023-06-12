#include "widget.h"
#include "./ui_widget.h"

#include <QFile>
#include <QFileDialog>
#include <QIODevice>
#include <QMessageBox>
#include <QTextStream>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->writeButton, &QPushButton::clicked, this, &Widget::onWriteButtonClicked);
    connect(ui->readButton, &QPushButton::clicked, this, &Widget::onReadButtonClicked);
    connect(ui->copyButton, &QPushButton::clicked, this, &Widget::onCopyButtonClicked);
    connect(ui->selectFileButton, &QPushButton::clicked, this, &Widget::onSelectFileButtonClicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onWriteButtonClicked()
{
    QString filename{QFileDialog::getSaveFileName(this, "Save as")};
    if (filename.isEmpty())
        return;

    QFile file{filename};

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
        return;

    QTextStream out{&file};
    out << ui->textEdit->toPlainText() << '\n';

    file.close();
}

void Widget::onReadButtonClicked()
{
    QString fileContent{};

    QString filename{QFileDialog::getOpenFileName(this, "Open File")};

    if (filename.isEmpty())
        return;

    QFile file{filename};
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in{&file};
    QString line{in.readLine()};

    while (!line.isNull()) {
        fileContent.append(line);
        line = in.readLine();
    }
    file.close();

    ui->textEdit->clear();
    ui->textEdit->setPlainText(fileContent);
}

void Widget::onCopyButtonClicked()
{
    QString srcFileName{ui->sourceLineEdit->text()};
    QString destFileName{ui->destLineEdit->text()};

    if (srcFileName.isEmpty() || destFileName.isEmpty())
        return;

    QFile file{srcFileName};
    if (file.copy(destFileName)) {
        QMessageBox::information(this, "Success", "Copy successful");
    } else {
        QMessageBox::information(this, "Failure", "Copy Failed");
    }
}

void Widget::onSelectFileButtonClicked()
{
    QString filename{QFileDialog::getOpenFileName(this, "Choose File")};
    if (filename.isEmpty())
        return;
    ui->sourceLineEdit->setText(filename);
}
