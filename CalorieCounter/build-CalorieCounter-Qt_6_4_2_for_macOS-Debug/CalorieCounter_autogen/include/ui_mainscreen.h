/********************************************************************************
** Form generated from reading UI file 'mainscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCREEN_H
#define UI_MAINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainScreen
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLabel *calorieCountLabel;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *timeSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *slopeComboBox;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *weightSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *speedSpinBox;

    void setupUi(QWidget *MainScreen)
    {
        if (MainScreen->objectName().isEmpty())
            MainScreen->setObjectName("MainScreen");
        MainScreen->resize(681, 379);
        verticalLayout_2 = new QVBoxLayout(MainScreen);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_5 = new QLabel(MainScreen);
        label_5->setObjectName("label_5");
        QFont font;
        font.setFamilies({QString::fromUtf8("Andale Mono")});
        font.setPointSize(30);
        label_5->setFont(font);

        horizontalLayout_7->addWidget(label_5);

        calorieCountLabel = new QLabel(MainScreen);
        calorieCountLabel->setObjectName("calorieCountLabel");
        calorieCountLabel->setFont(font);
        calorieCountLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 106, 122);"));

        horizontalLayout_7->addWidget(calorieCountLabel);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(MainScreen);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(label);

        timeSpinBox = new QDoubleSpinBox(MainScreen);
        timeSpinBox->setObjectName("timeSpinBox");
        timeSpinBox->setMinimumSize(QSize(100, 0));
        timeSpinBox->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(timeSpinBox);


        horizontalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(MainScreen);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        slopeComboBox = new QComboBox(MainScreen);
        slopeComboBox->setObjectName("slopeComboBox");

        horizontalLayout_5->addWidget(slopeComboBox);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(MainScreen);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(label_2);

        weightSpinBox = new QDoubleSpinBox(MainScreen);
        weightSpinBox->setObjectName("weightSpinBox");
        weightSpinBox->setMinimumSize(QSize(100, 0));
        weightSpinBox->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(weightSpinBox);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(MainScreen);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 0));

        horizontalLayout_3->addWidget(label_3);

        speedSpinBox = new QDoubleSpinBox(MainScreen);
        speedSpinBox->setObjectName("speedSpinBox");
        speedSpinBox->setMinimumSize(QSize(100, 0));
        speedSpinBox->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(speedSpinBox);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(MainScreen);

        QMetaObject::connectSlotsByName(MainScreen);
    } // setupUi

    void retranslateUi(QWidget *MainScreen)
    {
        MainScreen->setWindowTitle(QCoreApplication::translate("MainScreen", "Calorie Counter", nullptr));
        label_5->setText(QCoreApplication::translate("MainScreen", "Calorie Count:", nullptr));
        calorieCountLabel->setText(QCoreApplication::translate("MainScreen", "100", nullptr));
        label->setText(QCoreApplication::translate("MainScreen", "Time (h):", nullptr));
        label_4->setText(QCoreApplication::translate("MainScreen", "Slope:", nullptr));
        label_2->setText(QCoreApplication::translate("MainScreen", "Weight(Kg):", nullptr));
        label_3->setText(QCoreApplication::translate("MainScreen", "Speed (km/h)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainScreen: public Ui_MainScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCREEN_H
