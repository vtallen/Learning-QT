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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListView *listView;
    QTableView *tableView;
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *removeButton;
    QPushButton *addButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1575, 606);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        listView = new QListView(Widget);
        listView->setObjectName("listView");

        horizontalLayout->addWidget(listView);

        tableView = new QTableView(Widget);
        tableView->setObjectName("tableView");

        horizontalLayout->addWidget(tableView);

        treeView = new QTreeView(Widget);
        treeView->setObjectName("treeView");

        horizontalLayout->addWidget(treeView);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        removeButton = new QPushButton(Widget);
        removeButton->setObjectName("removeButton");

        horizontalLayout_2->addWidget(removeButton);

        addButton = new QPushButton(Widget);
        addButton->setObjectName("addButton");

        horizontalLayout_2->addWidget(addButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        removeButton->setText(QCoreApplication::translate("Widget", "Remove Person", nullptr));
        addButton->setText(QCoreApplication::translate("Widget", "Add Person", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
