#include "personmodel.h"

PersonModel::PersonModel(QObject *parent)
    : QAbstractListModel{parent}
{
    m_people.append(new Person("Vincent Allen", "Purple", 99));
    m_people.append(new Person("Billy Bob Allen", "red", 69));
    m_people.append(new Person("Debrah Allen", "Purple", 100));
    m_people.append(new Person("Timmothy Talens", "blue", 4));
    m_people.append(new Person("Karen Killer", "Purple", 99));
    m_people.append(new Person("Kevin Kates", "Purple", 99));

}

PersonModel::~PersonModel()
{
    qDeleteAll(m_people);
}


int PersonModel::rowCount(const QModelIndex &parent) const
{
    return m_people.size();
}

QVariant PersonModel::data(const QModelIndex &index, int role) const
{
    if (index.row() < 0 || index.row() >= m_people.count()) return QVariant();

    Person *person = m_people[index.row()];
    if (role == Qt::DisplayRole) return person->names();
    if (role == Qt::EditRole) return person->names();
    if (role == Qt::ToolTipRole) return person->names();
    if (role == NamesRole) return person->names();
    if (role == FavoriteColorRole) return person->favoriteColor();
    if (role == AgeRole) return person->age();
    return QVariant();
}


bool PersonModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (!index.isValid()) {
        return false;
    }

    Person * person = m_people[index.row()];
    bool isChange = false;

    switch(role) {
    case Qt::EditRole: {
        if (person->names() != value.toString()) {
            person->setNames(value.toString());
            isChange = true;
        }
        break;
    case NamesRole:
        if (person->names() != value.toString()) {
            person->setNames(value.toString());
            isChange = true;
        }
        break;
    case FavoriteColorRole:
        if (person->favoriteColor() != value.toString()) {
            person->setFavoriteColor(value.toString());
            isChange = true;
        }
        break;
    case AgeRole:
        if (person->age() != value.toInt()) {
            person->setAge(value.toInt());
            isChange = true;
        }
    }
    }

    if (isChange) {
        emit dataChanged(index, index);
        return true;
    }

    return false;
}

QVariant PersonModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role != Qt::DisplayRole) {
        return QVariant();
    }
    if (orientation == Qt::Horizontal) {
        return QString("Person names");
    }

    // Vertical rows
    return QString("Person %1").arg(section);

}

Qt::ItemFlags PersonModel::flags(const QModelIndex &index) const
{
    if (!index.isValid()) {
        return QAbstractItemModel::flags(index);
    }
    return QAbstractItemModel::flags(index) | Qt::ItemIsEditable;
}

void PersonModel::addPerson(Person *person)
{
    if (person == nullptr) {
        qDebug() << "NULL";
        return;
    }
    qDebug() << "Adding person";
    beginInsertRows(QModelIndex(), m_people.size(), m_people.size());
    // m_people.append(person);

    insertRows(m_people.size(), 1, QModelIndex());

    setData(index(m_people.size() - 1), person->names(), NamesRole);
    setData(index(m_people.size() - 1), person->favoriteColor(), FavoriteColorRole);
    setData(index(m_people.size() - 1), person->age(), AgeRole);

    endInsertRows();
}

void PersonModel::removePerson(QModelIndex index)
{
    if (!index.isValid()) return;
    if (index.row() >= m_people.size()) return;
    beginRemoveRows(QModelIndex(), index.row(), index.row());
    if (index.row() < m_people.size()) m_people.remove(index.row(), 1);
    endRemoveRows();
}



bool PersonModel::insertRows(int row, int count, const QModelIndex &parent)
{
    if (row < 0 || row > m_people.size() || count <= 0) return false;

    beginInsertRows(QModelIndex(), row, row + count - 1);
    for (int i{0}; i < count; ++i) {
        m_people.insert(row, new Person);
    }
    endInsertRows();

    return true;
}



QHash<int, QByteArray> PersonModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[NamesRole] = "names";
    roles[FavoriteColorRole] = "favoritecolor";
    roles[AgeRole] = "age";
    return roles;
}
