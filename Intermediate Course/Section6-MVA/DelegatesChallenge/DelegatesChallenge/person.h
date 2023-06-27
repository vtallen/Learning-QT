#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QVariant>

class Person : public QObject
{
    Q_OBJECT

public:
    explicit Person(QObject *parent = nullptr);
    Person(const QString &names, const QString &favoritecolor,
           const int &age , const int rating, QObject * parent = nullptr);

    QString names() const;
    QString favoriteColor() const;
    int age() const;
    int rating() const;

    void setNames(QString names);
    void setFavoriteColor(QString favoriteColor);
    void setAge(int age);
    void setRating(int rating = 5);

signals:
    void namesChanged(QString names);
    void favoriteColorChanged(QString favoriteColor);
    void ageChanged(int age);

private:
    QString m_names;
    QString m_favoriteColor;
    int m_age;
    int m_rating;
};

#endif // PERSON_H
