#include "tourcampuses.h"
#include "ui_tourcampuses.h"
#include "mainwindow.h"
#include "QModelIndex"
#include <QMessageBox>

tourCampuses::tourCampuses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tourCampuses)
{
    ui->setupUi(this);

    populate();

    ui->startingCampus_table->setRowCount(0);

    ui->startingCampus_table->setColumnCount(2);
    ui->startingCampus_table->setHorizontalHeaderItem(0, new QTableWidgetItem("IDs"));
    ui->startingCampus_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Colleges"));
    ui->startingCampus_table->setColumnHidden(0,true);

    ui->startingCampus_table->verticalHeader()->hide();
    // stretch College name
    ui->startingCampus_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

    for (int i = 0; i < collegeList.size(); ++i) {
        ui->startingCampus_table->insertRow(ui->startingCampus_table->rowCount());

        ui->startingCampus_table->setItem(ui->startingCampus_table->rowCount() - 1, 0,
                                           new QTableWidgetItem(QString::number(collegeList.at(i).getCollegeID())));
        ui->startingCampus_table->setItem(ui->startingCampus_table->rowCount() - 1, 1,
                                           new QTableWidgetItem(collegeList.at(i).getCollegeName()));
        // center text
        for (int col = 0; col < ui->startingCampus_table->columnCount(); ++col)
            ui->startingCampus_table->item(ui->startingCampus_table->rowCount() - 1, col)->setTextAlignment(Qt::AlignCenter);
    }

    ui->endingCampus_table->setRowCount(0);

    ui->endingCampus_table->setColumnCount(2);
    ui->endingCampus_table->setHorizontalHeaderItem(0, new QTableWidgetItem("IDs"));
    ui->endingCampus_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Colleges"));
    ui->endingCampus_table->setColumnHidden(0,true);

    ui->endingCampus_table->verticalHeader()->hide();
    // stretch College name
    ui->endingCampus_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

    for (int i = 0; i < collegeList.size(); ++i) {
        ui->endingCampus_table->insertRow(ui->endingCampus_table->rowCount());

        ui->endingCampus_table->setItem(ui->endingCampus_table->rowCount() - 1, 0,
                                           new QTableWidgetItem(QString::number(collegeList.at(i).getCollegeID())));
        ui->endingCampus_table->setItem(ui->endingCampus_table->rowCount() - 1, 1,
                                           new QTableWidgetItem(collegeList.at(i).getCollegeName()));
        // center text
        for (int col = 0; col < ui->endingCampus_table->columnCount(); ++col)
            ui->endingCampus_table->item(ui->endingCampus_table->rowCount() - 1, col)->setTextAlignment(Qt::AlignCenter);
    }
}

tourCampuses::~tourCampuses()
{
    delete ui;
}

void tourCampuses::on_back_to_main_clicked()
{
    MainWindow *main_window = new MainWindow;
    main_window->show();
    this->close();
}

void tourCampuses::populate()
{
    // reading from the SQL database into the College vector
    QSqlQuery colleges_qry("SELECT * FROM College_Touring");

    while (colleges_qry.next()) {
        // push back College
        collegeList.push_back(College(colleges_qry.record().value("ID").toInt(),
                                colleges_qry.record().value("Universities").toString()));
    }
    while (colleges_qry.next()) {
        // push back College
        collegeList.push_back(College(colleges_qry.record().value("ID").toInt(),
                                colleges_qry.record().value("Universities").toString()));
    }


    // reading from the SQL Database into the Distance vector
    QSqlQuery distances_qry("SELECT * FROM distances");

    while (distances_qry.next()) {
        // find College by ID from existing list
        College startCollege(distances_qry.record().value("startingPointCollegeId").toInt(),
                             distances_qry.record().value("startingPointCollegeName").toString());
        College endCollege(distances_qry.record().value("endingPointCollegeId").toInt(),
                             distances_qry.record().value("endingPointCollegeName").toString());

        distanceList.push_back(Distance(startCollege, endCollege, distances_qry.record().value("distance").toDouble()));
    }
}

void tourCampuses::on_pushButton_startColleges_clicked()
{
    QModelIndex current = ui->startingCampus_table->currentIndex();
    IdsDistances[0] = ui->startingCampus_table->item(current.row(),0)->text().toInt();
}

void tourCampuses::on_endingCollege_pushButton_clicked()
{
    QModelIndex current = ui->endingCampus_table->currentIndex();
    IdsDistances[1] =  ui->endingCampus_table->item(current.row(),0)->text().toInt();

    findDistanceTwoCollege(IdsDistances);
}

void tourCampuses::findDistanceTwoCollege(int distanceColleges[])
{
    double distance;

    if(IdsDistances[0] == IdsDistances[1]) {
        distance = 0;
    } else {
    int index = 0;
        while(index < distanceList.size()) {
            if(IdsDistances[0] == distanceList.at(index).getStartCollege().getCollegeID() &&
               IdsDistances[1] == distanceList.at(index).getEndCollege().getCollegeID()) {
                distance = distanceList.at(index).getDistance();
            }
            index++;
        }
    }

    ui->distance_table->setRowCount(1);
    ui->distance_table->setColumnCount(1);
    ui->distance_table->verticalHeader()->hide();
    ui->distance_table->setHorizontalHeaderItem(0, new QTableWidgetItem("Distance (Miles)"));
    ui->distance_table->verticalHeader()->hide();
    ui->distance_table->setItem(0,0, new QTableWidgetItem(QString::number(distance)));
    ui->distance_table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->distance_table->item(0,0)->setTextAlignment(Qt::AlignCenter);
}
