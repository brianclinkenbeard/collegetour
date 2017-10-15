#ifndef TOURPURCHASE_H
#define TOURPURCHASE_H

#include <QDialog>
#include <QHash>
#include "college.h"
#include "souvenir.h"
#include "tourcampuses.h"

namespace Ui {
class tourpurchase;
}

class tourpurchase : public QDialog
{
    Q_OBJECT

public:
    explicit tourpurchase(QWidget *parent = 0);
    ~tourpurchase();
    tourpurchase(QVector<int> tour_keys, QVector<int> chosenTour, QVector<Souvenir> souvenirs);

private slots:
    void on_shopping_button_clicked();
    void displaySouvenirs(int count);
    void findPage(int index);
    void tourPurchasesTable(int count);

    void on_pushButton_clicked();

    void on_pushButton_selectPurchase_asu_clicked();

    void on_pushButton_quantityAsu_clicked();

    void on_next_3_clicked();

    void on_next_4_clicked();

    void on_next_11_clicked();

    void on_next_5_clicked();

    void on_next_6_clicked();

    void on_next_7_clicked();

    void on_next_8_clicked();

    void on_next_9_clicked();

    void on_next_10_clicked();

    void on_next_12_clicked();

    void on_next_13_clicked();

    void on_next_14_clicked();

    void on_next_15_clicked();

private:
    Ui::tourpurchase *ui;
     QVector<Souvenir> tempSouvenirs;
    static QVector<int> keys;
    static QVector<int> selectedTourColleges;
    static QVector<Souvenir> souvenirList;
    QVector<Souvenir> receipt;
    QVector<double> prices;
    QVector<int> quantity;
    static double total;
    static int souvenirCount;
    static int pageIndicator;
    int tempCount;
};

#endif // TOURPURCHASE_H
