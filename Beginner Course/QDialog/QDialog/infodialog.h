#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InfoDialog(QWidget *parent = nullptr);
    ~InfoDialog();

    const QString &position() const;
    const QString &favoriteOS() const;

private slots:
    void okClicked();
    void cancelClicked();

private:
    Ui::InfoDialog *ui;

    QString m_position;
    QString m_favoriteOS;
};

#endif // INFODIALOG_H
