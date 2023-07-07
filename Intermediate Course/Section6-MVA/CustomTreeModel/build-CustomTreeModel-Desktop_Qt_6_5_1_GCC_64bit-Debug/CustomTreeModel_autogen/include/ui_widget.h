/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
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
    QPushButton *readFileButton;
    QPushButton *showInfoButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        readFileButton = new QPushButton(Widget);
        readFileButton->setObjectName("readFileButton");
        readFileButton->setGeometry(QRect(250, 270, 80, 26));
        showInfoButton = new QPushButton(Widget);
        showInfoButton->setObjectName("showInfoButton");
        showInfoButton->setGeometry(QRect(430, 260, 80, 26));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        readFileButton->setText(QCoreApplication::translate("Widget", "Read File", nullptr));
        showInfoButton->setText(QCoreApplication::translate("Widget", "Show Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
