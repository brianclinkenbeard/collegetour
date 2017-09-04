#ifndef DISPLAYCOLLEGES_H
#define DISPLAYCOLLEGES_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class displayColleges;
}

class displayColleges : public QDialog
{
    Q_OBJECT

public:

    explicit displayColleges(QWidget *parent = 0);
    ~displayColleges();

private slots:
    void on_display_colleges_button_clicked();

private:
    Ui::displayColleges *ui;
};

#endif // DISPLAYCOLLEGES_H
