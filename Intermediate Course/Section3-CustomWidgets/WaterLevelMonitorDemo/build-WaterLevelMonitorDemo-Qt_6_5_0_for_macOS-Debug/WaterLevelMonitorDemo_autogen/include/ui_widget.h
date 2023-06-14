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
#include <QtWidgets/QWidget>
#include "indicator.h"
#include "watertank.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_2;
    Indicator *indicator;
    WaterTank *tank;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(600, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(600, 400));
        Widget->setMaximumSize(QSize(800, 400));
        horizontalLayout_2 = new QHBoxLayout(Widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        indicator = new Indicator(Widget);
        indicator->setObjectName("indicator");

        horizontalLayout_2->addWidget(indicator);

        tank = new WaterTank(Widget);
        tank->setObjectName("tank");

        horizontalLayout_2->addWidget(tank);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
