#include "addpersondialog.h"
#include "ui_addpersondialog.h"

AddPersonDialog::AddPersonDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPersonDialog)
{
    ui->setupUi(this);

    connect(ui->nameLineEdit, &QLineEdit::textChanged, this, [=](){
        m_name = ui->nameLineEdit->text();
    });
    connect(ui->colorLineEdit, &QLineEdit::textChanged, this, [=](){
        m_favoriteColor = ui->colorLineEdit->text();
    });
    connect(ui->ageSpinBox, &QSpinBox::valueChanged, this, [=](){
        m_age = ui->ageSpinBox->value();
    });
}

AddPersonDialog::~AddPersonDialog()
{
    delete ui;
}

Person *AddPersonDialog::getPerson()
{
    if ((m_age > 0) && (!m_name.isEmpty()) && (!m_favoriteColor.isEmpty())) {
        m_person = new Person(m_name, m_favoriteColor, m_age);
    }

    return m_person;
}

void AddPersonDialog::deletePerson()
{
    delete m_person;
}
