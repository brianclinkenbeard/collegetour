#ifndef SOUVENIR_H
#define SOUVENIR_H

#include "college.h"

/**
 * @brief The Souvenir class
 * Souvenir Class for interacting with souvenirs in the database and displaying in the menus
 */
class Souvenir {
private:
    College souvenirCollege;
    QString souvenirName;
    double souvenirPrice;
public:

    /**
     * @brief Souvenir Constructor for Souvenir
     * @param initSouvenirName Name of the souvenir
     * @param initSouvenirPrice Price of the souvenir
     */
    Souvenir(QString initSouvenirName, double initSouvenirPrice);
    College getSouvenirCollege() const;
    QString getSouvenirName() const;
    double getSouvenirPrice() const;
};

#endif // SOUVENIR_H
