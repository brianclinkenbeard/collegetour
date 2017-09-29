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
