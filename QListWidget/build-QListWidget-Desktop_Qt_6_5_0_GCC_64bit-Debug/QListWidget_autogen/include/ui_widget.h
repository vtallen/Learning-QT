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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QPushButton *addItemButton;
    QPushButton *removeItemButton;
    QPushButton *selectedItemsButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(432, 406);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName("horizontalLayout");
        listWidget = new QListWidget(Widget);
        listWidget->setObjectName("listWidget");

        horizontalLayout->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        addItemButton = new QPushButton(Widget);
        addItemButton->setObjectName("addItemButton");

        verticalLayout->addWidget(addItemButton);

        removeItemButton = new QPushButton(Widget);
        removeItemButton->setObjectName("removeItemButton");

        verticalLayout->addWidget(removeItemButton);

        selectedItemsButton = new QPushButton(Widget);
        selectedItemsButton->setObjectName("selectedItemsButton");

        verticalLayout->addWidget(selectedItemsButton);

        verticalSpacer = new QSpacerItem(20, 308, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        addItemButton->setText(QCoreApplication::translate("Widget", "Add Item", nullptr));
        removeItemButton->setText(QCoreApplication::translate("Widget", "Remove Item", nullptr));
        selectedItemsButton->setText(QCoreApplication::translate("Widget", "Selected Items", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
