#include "souvenirs.h"

souvenirs::souvenirs()
{

}

void souvenirs::addSouvenir(int id, QString souvenirName, double souvenirPrice, int souvenirQuantity)
{
    this->id.push_back(id);
    this->souvenirName.push_back(souvenirName);
    this->souvenirPrice.push_back(souvenirPrice);
    this->souvenirQuantity.push_back(souvenirQuantity);
}

int souvenirs::getSouvenirsIdSize()
{
    return this->id.size();
}

int souvenirs::getSouvenirCollegeId(int index)
{
    return this->id.at(index);
}

QString souvenirs::getSouvenirName(int index)
{
    return this->souvenirName.at(index);
}

double souvenirs::getSouvenirPrice(int index)
{
    return this->souvenirPrice.at(index);
}

int souvenirs::getSouvenirQuantity(int index)
{
    return this->souvenirQuantity.at(index);
}
