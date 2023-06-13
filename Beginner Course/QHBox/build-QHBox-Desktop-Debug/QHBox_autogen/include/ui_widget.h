/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonOne;
    QPushButton *buttonTwo;
    QPushButton *buttonThree;
    QPushButton *buttonFour;
    QPushButton *buttonFive;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 75);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName("horizontalLayout");
        buttonOne = new QPushButton(Widget);
        buttonOne->setObjectName("buttonOne");

        horizontalLayout->addWidget(buttonOne);

        buttonTwo = new QPushButton(Widget);
        buttonTwo->setObjectName("buttonTwo");

        horizontalLayout->addWidget(buttonTwo);

        buttonThree = new QPushButton(Widget);
        buttonThree->setObjectName("buttonThree");

        horizontalLayout->addWidget(buttonThree);

        buttonFour = new QPushButton(Widget);
        buttonFour->setObjectName("buttonFour");

        horizontalLayout->addWidget(buttonFour);

        buttonFive = new QPushButton(Widget);
        buttonFive->setObjectName("buttonFive");

        horizontalLayout->addWidget(buttonFive);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        buttonOne->setText(QCoreApplication::translate("Widget", "One", nullptr));
        buttonTwo->setText(QCoreApplication::translate("Widget", "Two", nullptr));
        buttonThree->setText(QCoreApplication::translate("Widget", "Three", nullptr));
        buttonFour->setText(QCoreApplication::translate("Widget", "Four", nullptr));
        buttonFive->setText(QCoreApplication::translate("Widget", "Five", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
