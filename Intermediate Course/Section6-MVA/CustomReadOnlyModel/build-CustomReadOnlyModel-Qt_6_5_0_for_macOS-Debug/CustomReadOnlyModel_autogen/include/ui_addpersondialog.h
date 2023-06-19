/********************************************************************************
** Form generated from reading UI file 'addpersondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPERSONDIALOG_H
#define UI_ADDPERSONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddPersonDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *ageSpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *colorLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddPersonDialog)
    {
        if (AddPersonDialog->objectName().isEmpty())
            AddPersonDialog->setObjectName("AddPersonDialog");
        AddPersonDialog->resize(293, 153);
        verticalLayout = new QVBoxLayout(AddPersonDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(AddPersonDialog);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        nameLineEdit = new QLineEdit(AddPersonDialog);
        nameLineEdit->setObjectName("nameLineEdit");

        horizontalLayout_3->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(AddPersonDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        ageSpinBox = new QSpinBox(AddPersonDialog);
        ageSpinBox->setObjectName("ageSpinBox");

        horizontalLayout_2->addWidget(ageSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(AddPersonDialog);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        colorLineEdit = new QLineEdit(AddPersonDialog);
        colorLineEdit->setObjectName("colorLineEdit");

        horizontalLayout->addWidget(colorLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(AddPersonDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddPersonDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddPersonDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddPersonDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddPersonDialog);
    } // setupUi

    void retranslateUi(QDialog *AddPersonDialog)
    {
        AddPersonDialog->setWindowTitle(QCoreApplication::translate("AddPersonDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddPersonDialog", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("AddPersonDialog", "Age", nullptr));
        label_3->setText(QCoreApplication::translate("AddPersonDialog", "Favorite Color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPersonDialog: public Ui_AddPersonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPERSONDIALOG_H
