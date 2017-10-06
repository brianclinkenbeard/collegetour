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

    void populate();

private slots:
    void on_back_to_main_clicked();

    void on_pushButton_startColleges_clicked();
    void on_endingCollege_pushButton_clicked();
    void findDistanceTwoCollege(int distanceColleges[]);

private:
    Ui::tourCampuses *ui;
    QVector<College>  collegeList;
    QVector<Distance> distanceList;
   int IdsDistances[2];
};

#endif // TOURCAMPUSES_H
