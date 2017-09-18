#include "colleges.h"

colleges::colleges()
{

}

colleges::colleges(QString collegeNameE, QString id)
{
    this->collegeNameE = collegeNameE;
    this->id = id;
}

void colleges::addCollege(int collegeId, QString collegeName)
{
    this->collegeName.push_back(collegeName);
    this->collegeId.push_back(collegeId);
}

int colleges::getCollegeIDsSize()
{
    return this->collegeId.size();
}


int colleges::getCollegeNamesSize()
{
    return this->collegeName.size();
}

int colleges::getCollegeIDsValue(int index)
{
    return this->collegeId.at(index);
}

QString colleges::getCollegeNamesValue(int index)
{
    return this->collegeName.at(index);
}
