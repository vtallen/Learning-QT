#ifndef ADDPERSONDIALOG_H
#define ADDPERSONDIALOG_H

#include <QDialog>
#include "person.h"

namespace Ui {
class AddPersonDialog;
}

class AddPersonDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddPersonDialog(QWidget *parent = nullptr);
    ~AddPersonDialog();

    Person *getPerson();
    void deletePerson();

private:
    Ui::AddPersonDialog *ui;
    QString m_name;
    int m_age;
    QString m_favoriteColor;

    Person *m_person{nullptr};
};

#endif // ADDPERSONDIALOG_H
