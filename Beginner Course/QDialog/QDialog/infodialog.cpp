#include "infodialog.h"
#include "ui_infodialog.h"

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
    connect(ui->okButton, &QPushButton::clicked, this, &InfoDialog::okClicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &InfoDialog::cancelClicked);

}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::okClicked()
{
    QString userPosition{ui->positionLineEdit->text()};

    if (!userPosition.isEmpty()) {
        m_position = userPosition;
    } else {
        reject();
    }

    if (ui->windowsRadioButton->isChecked()) {
        m_favoriteOS = "Windows";
    } else if (ui->linuxRadioButton->isChecked()) {
        m_favoriteOS = "Linux";
    } else if (ui->macRadioButton->isChecked()) {
        m_favoriteOS = "Mac";
    }

    accept();
}

void InfoDialog::cancelClicked()
{
    reject();
}

const QString &InfoDialog::position() const
{
    return m_position;
}

const QString &InfoDialog::favoriteOS() const
{
    return m_favoriteOS;
}
