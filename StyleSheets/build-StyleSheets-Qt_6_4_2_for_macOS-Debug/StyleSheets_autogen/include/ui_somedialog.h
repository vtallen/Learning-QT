/********************************************************************************
** Form generated from reading UI file 'somedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOMEDIALOG_H
#define UI_SOMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SomeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *SomeDialog)
    {
        if (SomeDialog->objectName().isEmpty())
            SomeDialog->setObjectName("SomeDialog");
        SomeDialog->resize(380, 289);
        verticalLayout = new QVBoxLayout(SomeDialog);
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(SomeDialog);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(SomeDialog);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(SomeDialog);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(SomeDialog);

        QMetaObject::connectSlotsByName(SomeDialog);
    } // setupUi

    void retranslateUi(QDialog *SomeDialog)
    {
        SomeDialog->setWindowTitle(QCoreApplication::translate("SomeDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("SomeDialog", "Gib Moneis", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SomeDialog", "Start money printer", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SomeDialog", "Stop money printer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SomeDialog: public Ui_SomeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOMEDIALOG_H
