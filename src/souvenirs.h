#ifndef SOUVENIRS_H
#define SOUVENIRS_H

#include "colleges.h"
#include <QVector>

class souvenirs : public colleges
{
private:

    QVector<QString> souvenir;
    QVector<double>  price;

public:
    souvenirs();

    void addSouvenir(QString souvenir);
    void deleteSouvenir(QString souvenir);
    void addPrice(double price);
    void editPrice(double price);
};

#endif // SOUVENIRS_H
