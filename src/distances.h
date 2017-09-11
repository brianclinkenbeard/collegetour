#ifndef DISTANCES_H
#define DISTANCES_H

#include <QVector>

class distances
{
private:

    QVector<int> startingPointCollgeId;
    QVector<int> endingPointCollegeId;
    QVector<QString> startingPointCollgeName;
    QVector<QString> endingPointCollegeName;
    QVector<double>  collegeDistance;

public:
    distances();

    void addDistances(int startingPointCollgeId, int endingPointCollegeId, QString startingPointCollgeName,
                      QString endingPointCollegeName, double collegeDistance);

    int getDistancesContainerSize();
    int getStartingPointCollegeIdValue(int index);
};

#endif // DISTANCES_H
