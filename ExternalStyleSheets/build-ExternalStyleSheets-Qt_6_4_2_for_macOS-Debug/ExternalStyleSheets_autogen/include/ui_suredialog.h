/********************************************************************************
** Form generated from reading UI file 'suredialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUREDIALOG_H
#define UI_SUREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SureDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *areYouSureLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *yesButton;
    QPushButton *noButton;

    void setupUi(QDialog *SureDialog)
    {
        if (SureDialog->objectName().isEmpty())
            SureDialog->setObjectName("SureDialog");
        SureDialog->resize(400, 154);
        verticalLayout = new QVBoxLayout(SureDialog);
        verticalLayout->setObjectName("verticalLayout");
        areYouSureLabel = new QLabel(SureDialog);
        areYouSureLabel->setObjectName("areYouSureLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(25);
        areYouSureLabel->setFont(font);

        verticalLayout->addWidget(areYouSureLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        yesButton = new QPushButton(SureDialog);
        yesButton->setObjectName("yesButton");

        horizontalLayout->addWidget(yesButton);

        noButton = new QPushButton(SureDialog);
        noButton->setObjectName("noButton");

        horizontalLayout->addWidget(noButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SureDialog);

        QMetaObject::connectSlotsByName(SureDialog);
    } // setupUi

    void retranslateUi(QDialog *SureDialog)
    {
        SureDialog->setWindowTitle(QCoreApplication::translate("SureDialog", "Dialog", nullptr));
        areYouSureLabel->setText(QCoreApplication::translate("SureDialog", "Are You Sure?", nullptr));
        yesButton->setText(QCoreApplication::translate("SureDialog", "Yes", nullptr));
        noButton->setText(QCoreApplication::translate("SureDialog", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SureDialog: public Ui_SureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUREDIALOG_H
