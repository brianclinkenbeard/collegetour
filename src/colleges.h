#ifndef COLLEGES_H
#define COLLEGES_H

#include <QVector>

class colleges
{
private:

    QVector<int> collegeID;
    QVector<QString> collegeName;

public:
    colleges();

    void addCollegeName(QString collegName);
    void addCollegeID(int collegeID);
    void deleteCollege(QString collegeName);
    bool findCollege(QString collegeName);
    int getCollegeIDsSize();
    int getCollegeNamesSize();
    int getCollegeIDsValue(int index);
    QString getCollegeNamesValue(int index);


};

#endif // COLLEGES_H
