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

    ui->endingCampus_table->setRowCount(0);
    ui->endingCampus_table->setColumnCount(2);
    ui->endingCampus_table->setHorizontalHeaderItem(0, new QTableWidgetItem("IDs"));
    ui->endingCampus_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Colleges"));
    ui->endingCampus_table->setColumnHidden(0,true);
    ui->endingCampus_table->verticalHeader()->hide();
    ui->endingCampus_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

    ui->collegeList_table->setRowCount(0);
    ui->collegeList_table->setColumnCount(2);
    ui->collegeList_table->setHorizontalHeaderItem(0, new QTableWidgetItem("IDs"));
    ui->collegeList_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Colleges"));
    ui->collegeList_table->setColumnHidden(0,true);
    ui->collegeList_table->verticalHeader()->hide();
    // stretch College name
    ui->collegeList_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

    for (int i = 0; i < collegeList.size(); ++i) {
        ui->startingCampus_table->insertRow(ui->startingCampus_table->rowCount());
        ui->endingCampus_table->insertRow(ui->endingCampus_table->rowCount());
        ui->collegeList_table->insertRow(ui->collegeList_table->rowCount());

        ui->startingCampus_table->setItem(ui->startingCampus_table->rowCount() - 1, 0,
                                           new QTableWidgetItem(QString::number(collegeList.at(i).getCollegeID())));
        ui->startingCampus_table->setItem(ui->startingCampus_table->rowCount() - 1, 1,
                                           new QTableWidgetItem(collegeList.at(i).getCollegeName()));

        ui->endingCampus_table->setItem(ui->endingCampus_table->rowCount() - 1, 0,
                                           new QTableWidgetItem(QString::number(collegeList.at(i).getCollegeID())));
        ui->endingCampus_table->setItem(ui->endingCampus_table->rowCount() - 1, 1,
                                           new QTableWidgetItem(collegeList.at(i).getCollegeName()));

        ui->collegeList_table->setItem(ui->collegeList_table->rowCount() - 1, 0,
                                           new QTableWidgetItem(QString::number(collegeList.at(i).getCollegeID())));
        ui->collegeList_table->setItem(ui->collegeList_table->rowCount() - 1, 1,
                                           new QTableWidgetItem(collegeList.at(i).getCollegeName()));

        // center text
        for (int col = 0; col < ui->startingCampus_table->columnCount(); ++col) {
            ui->startingCampus_table->item(ui->startingCampus_table->rowCount() - 1, col)->setTextAlignment(Qt::AlignCenter);  
            ui->endingCampus_table->item(ui->endingCampus_table->rowCount() - 1, col)->setTextAlignment(Qt::AlignCenter);
            ui->collegeList_table->item(ui->collegeList_table->rowCount() - 1, col)->setTextAlignment(Qt::AlignCenter);
        }
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

    findDistanceTwoCollege();
}

void tourCampuses::findDistanceTwoCollege()
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

void tourCampuses::on_distanceMode_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void tourCampuses::on_tripMode_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void tourCampuses::on_addColleges_button_clicked()
{
    College obj;
    QModelIndex current = ui->collegeList_table->currentIndex();
    if(!current.isValid()) {
        QMessageBox::warning(this, "Error", "Select A College from the table!");
    } else {
        obj.setCollegeId(ui->collegeList_table->item(current.row(),0)->text().toInt());
        obj.setCollegeName(ui->collegeList_table->item(current.row(),1)->text());
        selectedColleges.push_back(obj);

    displaySelectedColleges();
    }
}

void tourCampuses::on_deleteColleges_button_clicked()
{
    if(selectedColleges.empty()) {
        QMessageBox::warning(this, "Error", "There is no college selected!");
    } else {
        selectedColleges.pop_back();
        displaySelectedColleges();
    }
}

void tourCampuses::displaySelectedColleges()
{
    ui->selectedVisitColleges_table->setRowCount(0);
    ui->selectedVisitColleges_table->setColumnCount(2);
    ui->selectedVisitColleges_table->setHorizontalHeaderItem(0, new QTableWidgetItem("IDs"));
    ui->selectedVisitColleges_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Colleges"));
    ui->selectedVisitColleges_table->setColumnHidden(0,true);
    ui->selectedVisitColleges_table->verticalHeader()->hide();

    // stretch College name
    ui->startingCampus_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    // stretch College name
    ui->selectedVisitColleges_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

    for (int i = 0; i < selectedColleges.size(); ++i) {
        ui->selectedVisitColleges_table->insertRow(ui->selectedVisitColleges_table->rowCount());

        ui->selectedVisitColleges_table->setItem(ui->selectedVisitColleges_table->rowCount() - 1, 0,
                                           new QTableWidgetItem(QString::number(selectedColleges.at(i).getCollegeID())));
        ui->selectedVisitColleges_table->setItem(ui->selectedVisitColleges_table->rowCount() - 1, 1,
                                           new QTableWidgetItem(selectedColleges.at(i).getCollegeName()));

        // center text
        for (int col = 0; col < ui->selectedVisitColleges_table->columnCount(); ++col) {
            ui->selectedVisitColleges_table->item(ui->selectedVisitColleges_table->
                                                  rowCount() - 1, col)->setTextAlignment(Qt::AlignCenter);

        }
    }
}

void tourCampuses::on_beginTrip_pushButton_clicked()
{
    if(selectedColleges.empty()) {
        return;
    } else {
        findTrip(0,0,0);
    }
}

void tourCampuses::findTrip(int count, int visitedCollege, double totalDistance)
{
    if(count == 0) {
        ui->trip_table->setRowCount(0);
        ui->trip_table->setColumnCount(2);
        ui->trip_table->setHorizontalHeaderItem(0, new QTableWidgetItem("Visiting Colleges"));
        ui->trip_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Distance"));
        ui->trip_table->setColumnHidden(1,true);
        ui->trip_table->verticalHeader()->hide();
        ui->trip_table->insertRow(ui->trip_table->rowCount());
        ui->trip_table->setItem(ui->trip_table->rowCount() - 1, 0,
                                           new QTableWidgetItem(selectedColleges.at(0).getCollegeName()));
        ui->trip_table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    }

    if(selectedColleges.empty()) {
        count = 0;
        ui->totalDistanceTraveled_table->setRowCount(0);
        ui->totalDistanceTraveled_table->setColumnCount(1);
        ui->totalDistanceTraveled_table->verticalHeader()->hide();
        ui->totalDistanceTraveled_table->setHorizontalHeaderItem(0, new QTableWidgetItem("Total Distance"));
        ui->totalDistanceTraveled_table->insertRow(ui->totalDistanceTraveled_table->rowCount());
        ui->totalDistanceTraveled_table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        ui->totalDistanceTraveled_table->setItem(ui->totalDistanceTraveled_table->rowCount() - 1,0,
                                                 new QTableWidgetItem(QString::number(totalDistance)));
        ui->totalDistanceTraveled_table->item(0,0)->setTextAlignment(Qt::AlignCenter);
        return;
    } else {
        Distance distObj;
        College  initCollegeObj;
        College  endCollegeObj;
        int index = 0;
        // finds the first college visited in the database
        while(selectedColleges.at(visitedCollege).getCollegeID() !=
              distanceList.at(index).getStartCollege().getCollegeID()) {
            index++;
        }
        // creating the vector for all the visiting colleges
        for(int counter = 1; counter < selectedColleges.size(); counter++) {
            for(int i = index; i < collegeList.size() - 1 + index; i++) {
                if(selectedColleges.at(counter).getCollegeID() == distanceList.at(i).getEndCollege().getCollegeID()) {
                    initCollegeObj.setCollege(selectedColleges.at(visitedCollege).getCollegeName(),
                                              selectedColleges.at(visitedCollege).getCollegeID());
                    endCollegeObj.setCollege(distanceList.at(i).getEndCollege().getCollegeName(),
                                             distanceList.at(i).getEndCollege().getCollegeID());
                    distObj.setDistance(initCollegeObj, endCollegeObj, distanceList.at(i).getDistance());
                    tourDistanceColleges.push_back(distObj);
                }
            }
        }
        // sorting the colleges visited
        for(int j = 1; j < tourDistanceColleges.size(); j++) {
            Distance temp = tourDistanceColleges.at(j);
            int k = j - 1;
            while(k >= 0 && tourDistanceColleges.at(k).getDistance() > temp.getDistance()) {
                tourDistanceColleges.replace(k+1, tourDistanceColleges.at(k));
                k = k - 1;
            }
            tourDistanceColleges.replace(k+1, temp);
        }
        ui->trip_table->insertRow(ui->trip_table->rowCount());
        ui->trip_table->setItem(ui->trip_table->rowCount() - 1, 0,
        new QTableWidgetItem(tourDistanceColleges.at(0).getEndCollege().getCollegeName()));
        int r = 0;
        while(tourDistanceColleges.at(0).getEndCollege().getCollegeID() != selectedColleges.at(r).getCollegeID()) {
            r++;
        }
        totalDistance += tourDistanceColleges.at(0).getDistance();
        selectedColleges.pop_front();
        if(selectedColleges.size() == 1) {
            selectedColleges.pop_front();
        } else {
            College tempObj = selectedColleges.at(0);
            selectedColleges.replace(0, selectedColleges.at(r - 1));
            selectedColleges.replace(r - 1, tempObj);
        }
        tourDistanceColleges.clear();
        findTrip(count + 1, 0, totalDistance);
    }
}


void tourCampuses::on_pushButton_UCI_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

    //store all the colleges into the uciTourColleges
    for(int i=0; i<collegeList.size(); i++)
    {
        uciTourColleges.push_back(collegeList.at(i));
    }

    //switching uci with the first element
     College temp1 = uciTourColleges.at(0);
     College temp2 = uciTourColleges.at(1);
     uciTourColleges.replace(1, temp1);
     uciTourColleges.replace(0, temp2);

    findUciTrip(0,0);
}

void tourCampuses::findUciTrip(int count, int uciVisitedColleges)
{

    if(count == 0) {
        ui->trip_table_uci->setRowCount(0);
        ui->trip_table_uci->setColumnCount(2);
        ui->trip_table_uci->setHorizontalHeaderItem(0, new QTableWidgetItem("Visiting Colleges"));
        ui->trip_table_uci->setHorizontalHeaderItem(1, new QTableWidgetItem("Distance"));
        ui->trip_table_uci->setColumnHidden(1,true);
        ui->trip_table_uci->verticalHeader()->hide();
        ui->trip_table_uci->insertRow(ui->trip_table_uci->rowCount());
        ui->trip_table_uci->setItem(ui->trip_table_uci->rowCount() - 1, 0,
                                           new QTableWidgetItem(uciTourColleges.at(0).getCollegeName()));
        ui->trip_table_uci->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    }

    if(uciTourColleges.empty()) {
        count = 0;
        return;
    } else {
        Distance distObj;
        College  initCollegeObj;
        College  endCollegeObj;
        int index = 0;
        // finds the first college visited in the database
        while(uciTourColleges.at(uciVisitedColleges).getCollegeID() !=
              distanceList.at(index).getStartCollege().getCollegeID()) {
            index++;
        }
        // creating the vector for all the visiting colleges
        for(int counter = 1; counter < uciTourColleges.size(); counter++) {
            for(int i = index; i < collegeList.size() - 1 + index; i++) {
                if(uciTourColleges.at(counter).getCollegeID() == distanceList.at(i).getEndCollege().getCollegeID()) {
                    initCollegeObj.setCollege(uciTourColleges.at(uciVisitedColleges).getCollegeName(),
                                              uciTourColleges.at(uciVisitedColleges).getCollegeID());
                    endCollegeObj.setCollege(distanceList.at(i).getEndCollege().getCollegeName(),
                                             distanceList.at(i).getEndCollege().getCollegeID());
                    distObj.setDistance(initCollegeObj, endCollegeObj, distanceList.at(i).getDistance());
                    uciTourDistanceColleges.push_back(distObj);
                }
            }
        }
        // sorting the colleges visited
        for(int j = 1; j < uciTourDistanceColleges.size(); j++) {
            Distance temp = uciTourDistanceColleges.at(j);
            int k = j - 1;
            while(k >= 0 && uciTourDistanceColleges.at(k).getDistance() > temp.getDistance()) {
                uciTourDistanceColleges.replace(k+1, uciTourDistanceColleges.at(k));
                k = k - 1;
            }
            uciTourDistanceColleges.replace(k+1, temp);
        }
        ui->trip_table_uci->insertRow(ui->trip_table_uci->rowCount());
        ui->trip_table_uci->setItem(ui->trip_table_uci->rowCount() - 1, 0,
        new QTableWidgetItem(uciTourDistanceColleges.at(0).getEndCollege().getCollegeName()));
        int r = 0;
        while(uciTourDistanceColleges.at(0).getEndCollege().getCollegeID() != uciTourColleges.at(r).getCollegeID()) {
            r++;
        }
        uciTourColleges.pop_front();
        if(uciTourColleges.size() == 1) {
            uciTourColleges.pop_front();
        } else {
            College tempObj = uciTourColleges.at(0);
            uciTourColleges.replace(0, uciTourColleges.at(r - 1));
            uciTourColleges.replace(r - 1, tempObj);
        }
        uciTourDistanceColleges.clear();
        findUciTrip(count + 1, 0);
    }
}

void tourCampuses::on_pushButton_MICHIGAN_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

    //store all the colleges into the uciTourColleges
    for(int i=0; i<collegeList.size(); i++) {
        miTourColleges.push_back(collegeList.at(i));
    }

    //switching uci with the first element
     College temp1 = miTourColleges.at(0);
     College temp2 = miTourColleges.at(6);
     miTourColleges.replace(6, temp1);
     miTourColleges.replace(0, temp2);

    findMichiganTrip(0,0);
}

void tourCampuses::findMichiganTrip(int count, int miVisitedColleges)
{
    if(count == 0) {
        ui->trip_table_michigan->setRowCount(0);
        ui->trip_table_michigan->setColumnCount(2);
        ui->trip_table_michigan->setHorizontalHeaderItem(0, new QTableWidgetItem("Visiting Colleges"));
        ui->trip_table_michigan->setHorizontalHeaderItem(1, new QTableWidgetItem("Distance"));
        ui->trip_table_michigan->setColumnHidden(1,true);
        ui->trip_table_michigan->verticalHeader()->hide();
        ui->trip_table_michigan->insertRow(ui->trip_table_michigan->rowCount());
        ui->trip_table_michigan->setItem(ui->trip_table_michigan->rowCount() - 1, 0,
                                           new QTableWidgetItem(miTourColleges.at(0).getCollegeName()));
        ui->trip_table_michigan->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    }

    if(miTourColleges.empty()) {
        count = 0;
        return;
    } else {
        Distance distObj;
        College  initCollegeObj;
        College  endCollegeObj;
        int index = 0;
        // finds the first college visited in the database
        while(miTourColleges.at(miVisitedColleges).getCollegeID() !=
              distanceList.at(index).getStartCollege().getCollegeID()) {
            index++;
        }
        // creating the vector for all the visiting colleges
        for(int counter = 1; counter < miTourColleges.size(); counter++) {
            for(int i = index; i < collegeList.size() - 1 + index; i++) {
                if(miTourColleges.at(counter).getCollegeID() == distanceList.at(i).getEndCollege().getCollegeID()) {
                    initCollegeObj.setCollege(miTourColleges.at(miVisitedColleges).getCollegeName(),
                                              miTourColleges.at(miVisitedColleges).getCollegeID());
                    endCollegeObj.setCollege(distanceList.at(i).getEndCollege().getCollegeName(),
                                             distanceList.at(i).getEndCollege().getCollegeID());
                    distObj.setDistance(initCollegeObj, endCollegeObj, distanceList.at(i).getDistance());
                    miTourDistanceColleges.push_back(distObj);
                }
            }
        }
        // sorting the colleges visited
        for(int j = 1; j < miTourDistanceColleges.size(); j++) {
            Distance temp = miTourDistanceColleges.at(j);
            int k = j - 1;
            while(k >= 0 && miTourDistanceColleges.at(k).getDistance() > temp.getDistance()) {
                miTourDistanceColleges.replace(k+1, miTourDistanceColleges.at(k));
                k = k - 1;
            }
            miTourDistanceColleges.replace(k+1, temp);
        }
        ui->trip_table_michigan->insertRow(ui->trip_table_michigan->rowCount());
        ui->trip_table_michigan->setItem(ui->trip_table_michigan->rowCount() - 1, 0,
                                        new QTableWidgetItem(miTourDistanceColleges.at(0).getEndCollege().getCollegeName()));
        int r = 0;
        while(miTourDistanceColleges.at(0).getEndCollege().getCollegeID() != miTourColleges.at(r).getCollegeID()) {
            r++;
        }
        miTourColleges.pop_front();
        if(miTourColleges.size() == 1) {
            miTourColleges.pop_front();
        } else {
            College tempObj = miTourColleges.at(0);
            miTourColleges.replace(0, miTourColleges.at(r - 1));
            miTourColleges.replace(r - 1, tempObj);
        }
        miTourDistanceColleges.clear();
        findMichiganTrip(count + 1, 0);
    }
}

void tourCampuses::on_pushButton_SADDLEBACK_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

    //store all the colleges into the uciTourColleges
    for(int i=0; i<collegeList.size(); i++) {
        saTourColleges.push_back(collegeList.at(i));
    }
    //switching uci with the first element
     College temp1 = saTourColleges.at(0);
     College temp2 = saTourColleges.at(10);
     saTourColleges.replace(10, temp1);
     saTourColleges.replace(0, temp2);

    findSaddlebackTrip(0,0);

}

void tourCampuses::findSaddlebackTrip(int count, int saVisitedColleges)
{
    if(count == 0) {
        ui->trip_table_saddleback->setRowCount(0);
        ui->trip_table_saddleback->setColumnCount(2);
        ui->trip_table_saddleback->setHorizontalHeaderItem(0, new QTableWidgetItem("Visiting Colleges"));
        ui->trip_table_saddleback->setHorizontalHeaderItem(1, new QTableWidgetItem("Distance"));
        ui->trip_table_saddleback->setColumnHidden(1,true);
        ui->trip_table_saddleback->verticalHeader()->hide();
        ui->trip_table_saddleback->insertRow(ui->trip_table_saddleback->rowCount());
        ui->trip_table_saddleback->setItem(ui->trip_table_saddleback->rowCount() - 1, 0,
                                           new QTableWidgetItem(saTourColleges.at(0).getCollegeName()));
        ui->trip_table_saddleback->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    }

    if(saTourColleges.empty()) {
        count = 0;
        return;
    } else {
        Distance distObj;
        College  initCollegeObj;
        College  endCollegeObj;
        int index = 0;
        // finds the first college visited in the database
        while(saTourColleges.at(saVisitedColleges).getCollegeID() !=
              distanceList.at(index).getStartCollege().getCollegeID()) {
            index++;
        }
        // creating the vector for all the visiting colleges
        for(int counter = 1; counter < saTourColleges.size(); counter++) {
            for(int i = index; i < collegeList.size() - 1 + index; i++) {
                if(saTourColleges.at(counter).getCollegeID() == distanceList.at(i).getEndCollege().getCollegeID()) {
                    initCollegeObj.setCollege(saTourColleges.at(saVisitedColleges).getCollegeName(),
                                              saTourColleges.at(saVisitedColleges).getCollegeID());
                    endCollegeObj.setCollege(distanceList.at(i).getEndCollege().getCollegeName(),
                                             distanceList.at(i).getEndCollege().getCollegeID());
                    distObj.setDistance(initCollegeObj, endCollegeObj, distanceList.at(i).getDistance());
                    saTourDistanceColleges.push_back(distObj);
                }
            }
        }
        // sorting the colleges visited
        for(int j = 1; j < saTourDistanceColleges.size(); j++) {
            Distance temp = saTourDistanceColleges.at(j);
            int k = j - 1;
            while(k >= 0 && saTourDistanceColleges.at(k).getDistance() > temp.getDistance()) {
                saTourDistanceColleges.replace(k+1, saTourDistanceColleges.at(k));
                k = k - 1;
            }
            saTourDistanceColleges.replace(k+1, temp);
        }
        ui->trip_table_saddleback->insertRow(ui->trip_table_saddleback->rowCount());
        ui->trip_table_saddleback->setItem(ui->trip_table_saddleback->rowCount() - 1, 0,
        new QTableWidgetItem(saTourDistanceColleges.at(0).getEndCollege().getCollegeName()));
        int r = 0;
        while(saTourDistanceColleges.at(0).getEndCollege().getCollegeID() != saTourColleges.at(r).getCollegeID()) {
            r++;
        }
        saTourColleges.pop_front();
        if(saTourColleges.size() == 1) {
            saTourColleges.pop_front();
        } else {
            College tempObj = saTourColleges.at(0);
            saTourColleges.replace(0, saTourColleges.at(r - 1));
            saTourColleges.replace(r - 1, tempObj);
        }
        saTourDistanceColleges.clear();
        findSaddlebackTrip(count + 1, 0);
    }
}
