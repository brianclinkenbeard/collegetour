#ifndef DISTANCE_H
#define DISTANCE_H

#include "college.h"

class Distance {
private:
    College startCollege;
    College endCollege;
    int distance;
public:
    Distance(College, College, int);
    College getStartCollege() const;
    College getEndCollege() const;
    int getDistance() const;
};

#endif // DISTANCE_H
