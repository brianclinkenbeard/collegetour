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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_search_edit_textEdited(const QString &arg1);
    void on_display_comboBox_currentIndexChanged(int index);
    void on_login_button_clicked();
    void on_purchase_button_clicked();

private:
    Ui::MainWindow *ui;

    /**
     * @brief populate
     * Helper function to populate object vectors
     */
    void populate();
    /**
     * @brief distance_by_ID
     * @return Distance from Saddleback College
     * Helper function to find the distance of a College from Saddleback by its ID
     */
    int distance_by_ID(int);

    QVector<College> collegesList;
    QVector<Souvenir> souvenirsList;
    QVector<Distance> distancesList;

};

#endif // MAINWINDOW_H
