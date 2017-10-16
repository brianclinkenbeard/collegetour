#include "college.h"

/**
 * @brief College::College
 */
College::College() {}

/**
 * @brief College::College
 * @param initID
 * @param initName
 */
College::College(int initID, QString initName) : collegeID(initID), collegeName(initName) {}

/**
 * @brief College::getCollegeID
 * @return
 */
int College::getCollegeID() const
{
    return this->collegeID;
}

/**
 * @brief College::getCollegeName
 * @return
 */
QString College::getCollegeName() const
{
    return this->collegeName;
}

/**
 * @brief College::setCollegeName
 * @param name
 */
void College::setCollegeName(QString name)
{
    collegeName = name;
}

/**
 * @brief College::setCollegeId
 * @param id
 */
void College::setCollegeId(int id)
{
    collegeID = id;
}

/**
 * @brief College::setCollege
 * @param name
 * @param id
 */
void College::setCollege(QString name, int id)
{
    collegeID   = id;
    collegeName = name;
}

