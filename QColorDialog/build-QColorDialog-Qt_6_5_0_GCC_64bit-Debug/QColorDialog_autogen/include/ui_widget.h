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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *textColorButton;
    QPushButton *backgroundColorButton;
    QPushButton *fontButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(425, 201);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        textColorButton = new QPushButton(Widget);
        textColorButton->setObjectName("textColorButton");

        horizontalLayout->addWidget(textColorButton);

        backgroundColorButton = new QPushButton(Widget);
        backgroundColorButton->setObjectName("backgroundColorButton");

        horizontalLayout->addWidget(backgroundColorButton);

        fontButton = new QPushButton(Widget);
        fontButton->setObjectName("fontButton");

        horizontalLayout->addWidget(fontButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Viverra accumsan in nisl nisi. Laoreet sit amet cursus sit amet dictum sit. Ipsum a arcu cursus vitae. Ipsum a arcu cursus vitae. Mattis nunc sed blandit libero volutpat sed. Risus ultricies tristique nulla aliquet enim tortor at auctor. In nibh mauris cursus mattis. Neque volutpat ac tincidunt vitae semper quis. Mi bibendum neque egestas congue quisque egestas diam in.", nullptr));
        textColorButton->setText(QCoreApplication::translate("Widget", "Text Color", nullptr));
        backgroundColorButton->setText(QCoreApplication::translate("Widget", "Background Color", nullptr));
        fontButton->setText(QCoreApplication::translate("Widget", "Font", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
