#ifndef COLLEGES_H
#define COLLEGES_H
#include <QString>
#include <QVector>

class colleges
{
private:

    QVector<int> collegeId;
    QVector<QString> collegeName;
    QString id;
    QString collegeNameE;

public:
    colleges();
    colleges(QString collegeNameE, QString id);

    void addCollege(int collegeId, QString collegName);
    void deleteCollege(QString collegeName);
    bool findCollege(QString collegeName);
    int getCollegeIDsSize();
    int getCollegeNamesSize();
    int getCollegeIDsValue(int index);
    QString getCollegeNamesValue(int index);


};

#endif // COLLEGES_H
