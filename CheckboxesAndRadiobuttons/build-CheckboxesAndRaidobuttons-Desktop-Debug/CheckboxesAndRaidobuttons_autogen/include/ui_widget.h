/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *windowsCheckBox;
    QCheckBox *macCheckBox;
    QCheckBox *linuxCheckBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *coffeeCheckBox;
    QCheckBox *teaCheckBox;
    QCheckBox *juiceCheckBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *aRadioButton;
    QRadioButton *bRadioButton;
    QRadioButton *cRadioButton;
    QPushButton *grabDataButton;
    QPushButton *setDataButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(361, 427);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        windowsCheckBox = new QCheckBox(groupBox);
        windowsCheckBox->setObjectName(QString::fromUtf8("windowsCheckBox"));

        verticalLayout->addWidget(windowsCheckBox);

        macCheckBox = new QCheckBox(groupBox);
        macCheckBox->setObjectName(QString::fromUtf8("macCheckBox"));

        verticalLayout->addWidget(macCheckBox);

        linuxCheckBox = new QCheckBox(groupBox);
        linuxCheckBox->setObjectName(QString::fromUtf8("linuxCheckBox"));

        verticalLayout->addWidget(linuxCheckBox);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        coffeeCheckBox = new QCheckBox(groupBox_2);
        coffeeCheckBox->setObjectName(QString::fromUtf8("coffeeCheckBox"));

        verticalLayout_2->addWidget(coffeeCheckBox);

        teaCheckBox = new QCheckBox(groupBox_2);
        teaCheckBox->setObjectName(QString::fromUtf8("teaCheckBox"));

        verticalLayout_2->addWidget(teaCheckBox);

        juiceCheckBox = new QCheckBox(groupBox_2);
        juiceCheckBox->setObjectName(QString::fromUtf8("juiceCheckBox"));

        verticalLayout_2->addWidget(juiceCheckBox);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout_4->addLayout(horizontalLayout);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        aRadioButton = new QRadioButton(groupBox_3);
        aRadioButton->setObjectName(QString::fromUtf8("aRadioButton"));

        verticalLayout_3->addWidget(aRadioButton);

        bRadioButton = new QRadioButton(groupBox_3);
        bRadioButton->setObjectName(QString::fromUtf8("bRadioButton"));

        verticalLayout_3->addWidget(bRadioButton);

        cRadioButton = new QRadioButton(groupBox_3);
        cRadioButton->setObjectName(QString::fromUtf8("cRadioButton"));

        verticalLayout_3->addWidget(cRadioButton);


        verticalLayout_4->addWidget(groupBox_3);

        grabDataButton = new QPushButton(Widget);
        grabDataButton->setObjectName(QString::fromUtf8("grabDataButton"));

        verticalLayout_4->addWidget(grabDataButton);

        setDataButton = new QPushButton(Widget);
        setDataButton->setObjectName(QString::fromUtf8("setDataButton"));

        verticalLayout_4->addWidget(setDataButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "OS(Exclusive)", nullptr));
        windowsCheckBox->setText(QCoreApplication::translate("Widget", "Windows", nullptr));
        macCheckBox->setText(QCoreApplication::translate("Widget", "Mac", nullptr));
        linuxCheckBox->setText(QCoreApplication::translate("Widget", "Linux", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "Drink(Non-Exclusive)", nullptr));
        coffeeCheckBox->setText(QCoreApplication::translate("Widget", "Coffee", nullptr));
        teaCheckBox->setText(QCoreApplication::translate("Widget", "Tea", nullptr));
        juiceCheckBox->setText(QCoreApplication::translate("Widget", "Juice", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "Choose one", nullptr));
        aRadioButton->setText(QCoreApplication::translate("Widget", "A", nullptr));
        bRadioButton->setText(QCoreApplication::translate("Widget", "B", nullptr));
        cRadioButton->setText(QCoreApplication::translate("Widget", "C", nullptr));
        grabDataButton->setText(QCoreApplication::translate("Widget", "Grab Data", nullptr));
        setDataButton->setText(QCoreApplication::translate("Widget", "Set Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
