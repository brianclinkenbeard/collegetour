#include "distances.h"

distances::distances()
{

}


void distances::addDistances(int startingPointCollgeId, int endingPointCollegeId,
                             QString startingPointCollgeName, QString endingPointCollegeName,
                             double collegeDistance)
{
    this->startingPointCollgeId.push_back(startingPointCollgeId);
    this->endingPointCollegeId.push_back(endingPointCollegeId);
    this->startingPointCollgeName.push_back(startingPointCollgeName);
    this->endingPointCollegeName.push_back(endingPointCollegeName);
    this->collegeDistance.push_back(collegeDistance);
}

int distances::getDistancesContainerSize()
{
    return this->startingPointCollgeId.size();
}

int distances::getStartingPointCollegeIdValue(int index)
{
    return this->startingPointCollgeId.at(index);
}

