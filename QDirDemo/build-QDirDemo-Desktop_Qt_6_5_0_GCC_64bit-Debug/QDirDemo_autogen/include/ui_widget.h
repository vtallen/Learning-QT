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
    QVBoxLayout *verticalLayout_2;
    QLineEdit *dirLineEdit;
    QListWidget *fileList;
    QVBoxLayout *verticalLayout;
    QPushButton *chooseDirButton;
    QPushButton *createDirButton;
    QPushButton *dirExistsButton;
    QPushButton *dirOrFileButton;
    QPushButton *folderContentsButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(574, 390);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        dirLineEdit = new QLineEdit(Widget);
        dirLineEdit->setObjectName("dirLineEdit");

        verticalLayout_2->addWidget(dirLineEdit);

        fileList = new QListWidget(Widget);
        fileList->setObjectName("fileList");

        verticalLayout_2->addWidget(fileList);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        chooseDirButton = new QPushButton(Widget);
        chooseDirButton->setObjectName("chooseDirButton");

        verticalLayout->addWidget(chooseDirButton);

        createDirButton = new QPushButton(Widget);
        createDirButton->setObjectName("createDirButton");

        verticalLayout->addWidget(createDirButton);

        dirExistsButton = new QPushButton(Widget);
        dirExistsButton->setObjectName("dirExistsButton");

        verticalLayout->addWidget(dirExistsButton);

        dirOrFileButton = new QPushButton(Widget);
        dirOrFileButton->setObjectName("dirOrFileButton");

        verticalLayout->addWidget(dirOrFileButton);

        folderContentsButton = new QPushButton(Widget);
        folderContentsButton->setObjectName("folderContentsButton");

        verticalLayout->addWidget(folderContentsButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        chooseDirButton->setText(QCoreApplication::translate("Widget", "Choose Dir", nullptr));
        createDirButton->setText(QCoreApplication::translate("Widget", "Create Dir", nullptr));
        dirExistsButton->setText(QCoreApplication::translate("Widget", "Dir exists?", nullptr));
        dirOrFileButton->setText(QCoreApplication::translate("Widget", "Dir or file", nullptr));
        folderContentsButton->setText(QCoreApplication::translate("Widget", "Folder Content", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
