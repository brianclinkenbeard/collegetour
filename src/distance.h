#ifndef DISTANCE_H
#define DISTANCE_H

#include "college.h"

/**
 * @brief The Distance class
 * Represents two colleges and their distances
 */
class Distance {
private:
    College startCollege;
    College endCollege;
    double distance;
public:
    /**
     * @brief Distance constructor
     * @param initStartCollege Starting College
     * @param initEndCollege Ending College
     * @param initDistance distance between Colleges
     */
    Distance(College initStartCollege, College initEndCollege, double initDistance);
    College getStartCollege() const;   /**< Returns starting College */
    College getEndCollege() const;     /**< Returns ending College */
    double getDistance() const;        /**< Returns distance between Colleges */
};

#endif // DISTANCE_H
