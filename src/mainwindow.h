#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QDebug>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "displaycolleges.h"
#include "colleges.h"
#include "souvenirs.h"

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
    void on_display_college_button_clicked();

    void on_display_college_list_button_clicked();

private:
    Ui::MainWindow *ui;
    colleges collegesList;
    souvenirs souvenirsList;
};

#endif // MAINWINDOW_H
