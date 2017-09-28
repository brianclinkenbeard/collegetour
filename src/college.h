#ifndef COLLEGE_H
#define COLLEGE_H

#include <QString>

class College {
private:
    int collegeID;
    QString collegeName;
public:
    College(int collegeID, QString collegeName);
    int getCollegeID() const;
    QString getCollegeName() const;
};

#endif // COLLEGE_H
