#include "souvenir.h"

Souvenir::Souvenir() {}

Souvenir::Souvenir(College initSouvenirCollege, QString initSouvenirName, double initSouvenirPrice) :
    souvenirCollege(initSouvenirCollege), souvenirName(initSouvenirName), souvenirPrice(initSouvenirPrice) {}

College Souvenir::getSouvenirCollege() const
{
    return this->souvenirCollege;
}

QString Souvenir::getSouvenirName() const
{
    return this->souvenirName;
}

double Souvenir::getSouvenirPrice() const
{
    return this->souvenirPrice;
}
