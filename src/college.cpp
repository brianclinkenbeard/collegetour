#include "college.h"

College::College() {}

College::College(int initID, QString initName) : collegeID(initID), collegeName(initName) {}

int College::getCollegeID() const
{
    return this->collegeID;
}

QString College::getCollegeName() const
{
    return this->collegeName;
}

void College::setCollegeName(QString name)
{
    collegeName = name;
}

void College::setCollegeId(int id)
{
    collegeID = id;
}

void College::setCollege(QString name, int id)
{
    collegeID   = id;
    collegeName = name;
}

