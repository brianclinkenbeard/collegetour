#ifndef SOUVENIRS_H
#define SOUVENIRS_H

#include <QVector>

class souvenirs
{
private:
    QVector<int> id;
    QVector<QString> souvenirName;
    QVector<double>  souvenirPrice;
    QVector<int> souvenirQuantity;
public:
    souvenirs();

    void addSouvenir(int id, QString souvenirName, double souvenirPrice, int souvenirQuantity);

    int getSouvenirsIdSize();
    void deleteSouvenir(QString souvenir);
    void addPrice(double price);
    void editPrice(double price);
    int getSouvenirCollegeId(int index);
    QString getSouvenirName(int index);
    double getSouvenirPrice(int index);
    int getSouvenirQuantity(int index);
};

#endif // SOUVENIRS_H
