#ifndef PERSONMODEL_H
#define PERSONMODEL_H

#include <QObject>
#include <QAbstractTableModel>
#include "person.h"

class PersonModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    enum PersonRoles {
        NamesRole = Qt::UserRole + 1,
        FavoriteColorRole,
        AgeRole,
        RatingRole,
    };
    explicit PersonModel(QObject *parent = nullptr);
    ~PersonModel() override;
    int rowCount(const QModelIndex &parent) const override;
    int columnCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    bool hasChildren(const QModelIndex &parent) const override;

    bool setData(const QModelIndex &index, const QVariant &value, int role) override;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
    Qt::ItemFlags flags(const QModelIndex &index) const override;
    QHash<int, QByteArray> roleNames() const override;

    void addPerson(Person *person);
    void removePerson(QModelIndex index);

    bool insertRows(int row, int count, const QModelIndex &parent) override;
signals:

private:
    QList<Person*> m_people;




    // QAbstractItemModel interface
public:
};

#endif // PERSONMODEL_H
