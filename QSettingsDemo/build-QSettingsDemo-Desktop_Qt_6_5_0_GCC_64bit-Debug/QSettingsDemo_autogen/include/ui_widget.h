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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *threeButton;
    QPushButton *fourButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QPushButton *sevenButton;
    QPushButton *eightButton;
    QPushButton *nineButton;
    QPushButton *clearButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(636, 708);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        oneButton = new QPushButton(Widget);
        oneButton->setObjectName("oneButton");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(oneButton->sizePolicy().hasHeightForWidth());
        oneButton->setSizePolicy(sizePolicy);
        oneButton->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(oneButton, 0, 0, 1, 1);

        twoButton = new QPushButton(Widget);
        twoButton->setObjectName("twoButton");
        sizePolicy.setHeightForWidth(twoButton->sizePolicy().hasHeightForWidth());
        twoButton->setSizePolicy(sizePolicy);
        twoButton->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(twoButton, 0, 1, 1, 1);

        threeButton = new QPushButton(Widget);
        threeButton->setObjectName("threeButton");
        sizePolicy.setHeightForWidth(threeButton->sizePolicy().hasHeightForWidth());
        threeButton->setSizePolicy(sizePolicy);
        threeButton->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(threeButton, 0, 2, 1, 1);

        fourButton = new QPushButton(Widget);
        fourButton->setObjectName("fourButton");
        sizePolicy.setHeightForWidth(fourButton->sizePolicy().hasHeightForWidth());
        fourButton->setSizePolicy(sizePolicy);
        fourButton->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(fourButton, 1, 0, 1, 1);

        fiveButton = new QPushButton(Widget);
        fiveButton->setObjectName("fiveButton");
        fiveButton->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(fiveButton, 1, 1, 1, 1);

        sixButton = new QPushButton(Widget);
        sixButton->setObjectName("sixButton");
        sixButton->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(sixButton, 1, 2, 1, 1);

        sevenButton = new QPushButton(Widget);
        sevenButton->setObjectName("sevenButton");
        sevenButton->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(sevenButton, 2, 0, 1, 1);

        eightButton = new QPushButton(Widget);
        eightButton->setObjectName("eightButton");
        eightButton->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(eightButton, 2, 1, 1, 1);

        nineButton = new QPushButton(Widget);
        nineButton->setObjectName("nineButton");
        nineButton->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(nineButton, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        clearButton = new QPushButton(Widget);
        clearButton->setObjectName("clearButton");

        verticalLayout->addWidget(clearButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        oneButton->setText(QCoreApplication::translate("Widget", "One", nullptr));
        twoButton->setText(QCoreApplication::translate("Widget", "Two", nullptr));
        threeButton->setText(QCoreApplication::translate("Widget", "Three", nullptr));
        fourButton->setText(QCoreApplication::translate("Widget", "Four", nullptr));
        fiveButton->setText(QCoreApplication::translate("Widget", "Five", nullptr));
        sixButton->setText(QCoreApplication::translate("Widget", "Six", nullptr));
        sevenButton->setText(QCoreApplication::translate("Widget", "Seven", nullptr));
        eightButton->setText(QCoreApplication::translate("Widget", "Eight", nullptr));
        nineButton->setText(QCoreApplication::translate("Widget", "Nine", nullptr));
        clearButton->setText(QCoreApplication::translate("Widget", "Clear Grid", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
