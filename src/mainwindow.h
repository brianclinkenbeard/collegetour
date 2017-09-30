#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QDebug>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QVector>
#include "displaycolleges.h"
#include "college.h"
#include "souvenir.h"
#include "distance.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow {
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

    void on_search_edit_textEdited(const QString &arg1);
    void on_display_comboBox_currentIndexChanged(int index);
    void on_login_button_clicked();
    void on_purchase_button_clicked();

private:
    int distance_by_ID(int);

    Ui::MainWindow *ui;
    QVector<College> collegesList;
    QVector<Souvenir> souvenirsList;
    QVector<Distance> distancesList;

};

#endif // MAINWINDOW_H
