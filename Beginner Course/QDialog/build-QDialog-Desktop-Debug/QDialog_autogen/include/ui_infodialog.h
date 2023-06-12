/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *positionLineEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *windowsRadioButton;
    QRadioButton *linuxRadioButton;
    QRadioButton *macRadioButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QString::fromUtf8("InfoDialog"));
        InfoDialog->resize(239, 196);
        verticalLayout_2 = new QVBoxLayout(InfoDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(InfoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        positionLineEdit = new QLineEdit(InfoDialog);
        positionLineEdit->setObjectName(QString::fromUtf8("positionLineEdit"));

        horizontalLayout->addWidget(positionLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        groupBox = new QGroupBox(InfoDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        windowsRadioButton = new QRadioButton(groupBox);
        windowsRadioButton->setObjectName(QString::fromUtf8("windowsRadioButton"));

        verticalLayout->addWidget(windowsRadioButton);

        linuxRadioButton = new QRadioButton(groupBox);
        linuxRadioButton->setObjectName(QString::fromUtf8("linuxRadioButton"));

        verticalLayout->addWidget(linuxRadioButton);

        macRadioButton = new QRadioButton(groupBox);
        macRadioButton->setObjectName(QString::fromUtf8("macRadioButton"));

        verticalLayout->addWidget(macRadioButton);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        okButton = new QPushButton(InfoDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cancelButton = new QPushButton(InfoDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QCoreApplication::translate("InfoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("InfoDialog", "Position:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InfoDialog", "Favorite OS", nullptr));
        windowsRadioButton->setText(QCoreApplication::translate("InfoDialog", "Windows", nullptr));
        linuxRadioButton->setText(QCoreApplication::translate("InfoDialog", "Linux", nullptr));
        macRadioButton->setText(QCoreApplication::translate("InfoDialog", "Mac", nullptr));
        okButton->setText(QCoreApplication::translate("InfoDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("InfoDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
