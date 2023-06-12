#include "infodialog.h"
#include "ui_infodialog.h"

#include <QDebug>
#include <QDialogButtonBox>

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
    connect(ui->buttonBox, &QDialogButtonBox::clicked, this, &InfoDialog::onDialogButtonClicked);

}

InfoDialog::~InfoDialog()
{
    delete ui;
}



const QString &InfoDialog::position() const
{
    return m_position;
}

const QString &InfoDialog::favoriteOS() const
{
    return m_favoriteOS;
}

void InfoDialog::onDialogButtonClicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton{ui->buttonBox->standardButton(button)};

    if (stdButton == QDialogButtonBox::SaveAll) {
        accept();
        qDebug() << "The save all button was clicked.";
    }
}
