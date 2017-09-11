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
    QVector<QString> souvenirCollegeName;

public:
    souvenirs();

    void addSouvenir(int id, QString souvenirCollegeName, QString souvenirName, double souvenirPrice, int souvenirQuantity);

    int getSouvenirsContainerSize();
    void deleteSouvenir(QString souvenir);
    void addPrice(double price);
    void editPrice(double price);
    int getSouvenirCollegeId(int index);
    QString getSouvenirName(int index);
    QString getSouvenirCollegeName(int index);
    double getSouvenirPrice(int index);
    int getSouvenirQuantity(int index);
};

#endif // SOUVENIRS_H
