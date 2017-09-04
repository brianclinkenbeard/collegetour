#include "colleges.h"

colleges::colleges()
{

}

void colleges::addCollegeName(QString collegeName)
{
    this->collegeName.push_back(collegeName);
}

void colleges::addCollegeID(int collegeID)
{
    this->collegeID.push_back(collegeID);
}

int colleges::getCollegeIDsSize()
{
    return this->collegeID.size();
}


int colleges::getCollegeNamesSize()
{
    return this->collegeName.size();
}

int colleges::getCollegeIDsValue(int index)
{
    return this->collegeID.at(index);
}

