#include "rockwidget.h"

#include <QMessageBox>
#include <QLabel>
#include <memory.h>

RockWidget::RockWidget(QWidget *parent)
    : QWidget{parent}
{
    m_label = new QLabel(this);
    m_label->setText("first line\n second line");
    m_label->move(50, 50);

    m_label1Palette.setColor(QPalette::Window, Qt::yellow);
    m_label1Palette.setColor(QPalette::WindowText, Qt::blue);

    m_label1Font = QFont{"Times", 20, QFont::Bold};

    m_label1 = new QLabel(this);
    m_label1->setAutoFillBackground(true);
    m_label1->setText("My colored label");
    m_label1->setFont(m_label1Font);
    m_label1->setPalette(m_label1Palette);
    m_label1->move(50, 100);

    m_label2Palette.setColor(QPalette::Window, Qt::green);
    m_label2Palette.setColor(QPalette::WindowText, Qt::black);

    m_label2 = new QLabel(this);
    m_label2->setAutoFillBackground(true);
    m_label2->setPalette(m_label2Palette);
    m_label2->setText("This is label 2");
    m_label2->move(70, 170);
    m_serifFont = QFont{"Times", 20, QFont::Bold};
    m_label2->setFont(m_serifFont);

    m_buttonFont = QFont{"Times", 30, QFont::Bold};
    m_button = new QPushButton(this);

    m_button->setText("Click me");
    m_button->setFont(m_buttonFont);
    m_button->move(100, 250);

    connect(m_button, SIGNAL(clicked()), this, SLOT(buttonClicked()));
}

void RockWidget::buttonClicked()
{
    QMessageBox::information(this, "Message", "You clicked on my button!");
}

QSize RockWidget::sizeHint() const
{
    return QSize{500, 500};
}
