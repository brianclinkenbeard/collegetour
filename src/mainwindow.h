#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QDebug>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include "displaycolleges.h"
#include "colleges.h"
#include "souvenirs.h"
#include "distances.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase myDatabase;
    void connectionClose();
    bool connectionOpen();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void readDatabase();
    void on_display_college_button_clicked();
    void on_display_college_list_button_clicked();
    void on_find_campus_push_button_clicked();

    int findCollegeIdByName(QString collegeNameSearched);
    int findCollegeIdById(int collegIdSearched);
    void displayCollegeFoundTable(int collegeIdFound, int collegeId);
    void on_pushButton_8_clicked();

private:
    Ui::MainWindow *ui;
    colleges collegesList;
    souvenirs souvenirsList;
    distances distancesList;

};

#endif // MAINWINDOW_H
