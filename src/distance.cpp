#include "distance.h"

Distance::Distance() {}

Distance::Distance(College initStartCollege, College initEndCollege, int initDistance) :
    startCollege(initStartCollege), endCollege(initEndCollege), distance(initDistance) {}

College Distance::getStartCollege() const
{
    return this->startCollege;
}

College Distance::getEndCollege() const
{
    return this->endCollege;
}

int Distance::getDistance() const
{
    return this->distance;
}
