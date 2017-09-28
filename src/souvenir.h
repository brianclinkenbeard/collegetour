#ifndef SOUVENIR_H
#define SOUVENIR_H

#include "college.h"

class Souvenir {
private:
    College souvenirCollege;
    QString souvenirName;
    double souvenirPrice;
public:
    Souvenir(QString, double);
    College getSouvenirCollege() const;
    QString getSouvenirName() const;
    double getSouvenirPrice() const;
};

#endif // SOUVENIR_H
