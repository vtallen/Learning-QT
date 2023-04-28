/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *buttonOne;
    QPushButton *buttonTwo;
    QPushButton *buttonFour;
    QPushButton *buttonFive;
    QPushButton *buttonSeven;
    QPushButton *buttonNine;
    QPushButton *buttonThree;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        buttonOne = new QPushButton(Widget);
        buttonOne->setObjectName("buttonOne");
        buttonOne->setGeometry(QRect(120, 90, 100, 32));
        buttonTwo = new QPushButton(Widget);
        buttonTwo->setObjectName("buttonTwo");
        buttonTwo->setGeometry(QRect(230, 90, 100, 32));
        buttonFour = new QPushButton(Widget);
        buttonFour->setObjectName("buttonFour");
        buttonFour->setGeometry(QRect(120, 170, 100, 32));
        buttonFive = new QPushButton(Widget);
        buttonFive->setObjectName("buttonFive");
        buttonFive->setGeometry(QRect(250, 180, 100, 32));
        buttonSeven = new QPushButton(Widget);
        buttonSeven->setObjectName("buttonSeven");
        buttonSeven->setGeometry(QRect(120, 260, 100, 32));
        buttonNine = new QPushButton(Widget);
        buttonNine->setObjectName("buttonNine");
        buttonNine->setGeometry(QRect(360, 250, 100, 32));
        buttonThree = new QPushButton(Widget);
        buttonThree->setObjectName("buttonThree");
        buttonThree->setGeometry(QRect(350, 90, 100, 32));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonThree->sizePolicy().hasHeightForWidth());
        buttonThree->setSizePolicy(sizePolicy);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        buttonOne->setText(QCoreApplication::translate("Widget", "One", nullptr));
        buttonTwo->setText(QCoreApplication::translate("Widget", "Two", nullptr));
        buttonFour->setText(QCoreApplication::translate("Widget", "Four", nullptr));
        buttonFive->setText(QCoreApplication::translate("Widget", "Five", nullptr));
        buttonSeven->setText(QCoreApplication::translate("Widget", "Seven", nullptr));
        buttonNine->setText(QCoreApplication::translate("Widget", "Nine", nullptr));
        buttonThree->setText(QCoreApplication::translate("Widget", "Three", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
