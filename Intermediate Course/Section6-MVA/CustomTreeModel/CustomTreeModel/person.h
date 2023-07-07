#ifndef PERSON_H
#define PERSON_H

#include <QString>
#include <QList>
#include <QVariant>
#include <QDebug>

class Person
{
public:
    Person(QString name, QString profession, Person *parent = nullptr);
    ~Person();

    void appendChild(Person *child);
    Person *child(int row);
    int childCount() const;
    QVariant data(int column) const;
    int row() const;
    Person *parentPerson();

    void showInfo();
private:
    QString mName;
    QString mProfession;
    Person *mParent;
    QList<Person*> mChildren;

};

#endif // PERSON_H
