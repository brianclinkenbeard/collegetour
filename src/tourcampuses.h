#ifndef TOURCAMPUSES_H
#define TOURCAMPUSES_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class tourCampuses;
}

class tourCampuses : public QDialog
{
    Q_OBJECT

public:
    explicit tourCampuses(QWidget *parent = 0);
    ~tourCampuses();

private slots:
    void populate();
    void on_back_to_main_clicked();
    void on_pushButton_startColleges_clicked();
    void on_endingCollege_pushButton_clicked();
    void findDistanceTwoCollege();
    void displaySelectedColleges();
    void on_distanceMode_pushButton_clicked();
    void on_tripMode_pushButton_clicked();
    void on_addColleges_button_clicked();
    void on_deleteColleges_button_clicked();

    void on_beginTrip_pushButton_clicked();
    void findTrip(int count, int visitedCollege);



    void on_pushButton_UCI_clicked();

private:
    Ui::tourCampuses *ui;
    QVector<College>  collegeList;
    QVector<Distance> distanceList;
    int IdsDistances[2];
    QVector<College> selectedColleges;
    QVector<Distance> tourDistanceColleges;
};

#endif // TOURCAMPUSES_H
