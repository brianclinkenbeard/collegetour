#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adminlogin.h"
#include "purchasesouvenirs.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connectionOpen();
    readDatabase();

    ui->tour_button->hide();
    ui->purchase_button->hide();

    // stretch vertical headers to fit table
    //ui->display_college_table->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // center header text
    ui->display_college_table->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);

    // no editing elements
    ui->display_college_table->setEditTriggers(QAbstractItemView::NoEditTriggers);

    /*
     * horizontal headers will stretch according to element size, certain columns
     * will later be selected to stretch to fit the remaining width of the table
     */
    ui->display_college_table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::readDatabase()
{
    // reading from the SQL database into the College vector
    QSqlQuery colleges_qry("SELECT * FROM College_Touring");

    while(colleges_qry.next()) {
        // push back College
        collegesList.push_back(College(colleges_qry.record().value("ID").toInt(),
                                colleges_qry.record().value("Universities").toString()));
    }

    // read from the SQL Database into the Souvenir vector
    QSqlQuery souvenirs_qry("SELECT * FROM colleges_souvenirs");

    while(souvenirs_qry.next()) {
        // push back Souvenir
        souvenirsList.push_back(Souvenir(College(souvenirs_qry.record().value("ID").toInt(),
                                                 souvenirs_qry.record().value("Universities").toString()),
                                         souvenirs_qry.record().value("souvenir").toString(),
                                         souvenirs_qry.record().value("price").toDouble()));
    }

    // reading from the SQL Database into the Distance vector
    QSqlQuery distances_qry("SELECT * FROM distances");

    while(distances_qry.next())
    {
        // find College by ID from existing list
        College startCollege(distances_qry.record().value("startingPointCollegeId").toInt(),
                             distances_qry.record().value("startingPointCollegeName").toString());
        College endCollege(distances_qry.record().value("endingPointCollegeId").toInt(),
                             distances_qry.record().value("endingPointCollegeName").toString());

        distancesList.push_back(Distance(startCollege, endCollege, distances_qry.record().value("distance").toInt()));
    }
}

bool MainWindow::connectionOpen()
{
    // create a Database object
    myDatabase = QSqlDatabase::addDatabase("QSQLITE");

    // provide the database path and name
    myDatabase.setDatabaseName("res/project.sqlite");

    // display whether or not database is connected
    if(!myDatabase.open())
    {
        ui->status->setStyleSheet("color:red");
        ui->status->setText("Error: Failed to connect to database");
        return false;
    }
    else
    {
        ui->status->setStyleSheet("color:green");
        ui->status->setText("Database connected successfully");
        return true;
    }
}

void MainWindow::connectionClose()
{
    myDatabase.close();
    myDatabase.removeDatabase(QSqlDatabase::defaultConnection);
}

int MainWindow::distance_by_ID(int ID)
{
    // find Distance object that starts at Saddleback and ends at our College
    int distance = -1;

    // if our College is Saddleback than distance to Saddleback is 0
    if (ID == 8918) {
        distance = 0;
    } else {
        for (int j = 0; j < distancesList.size(); ++j) {
            // if start College is Saddleback and end College is our College get distance
            if (distancesList.at(j).getStartCollege().getCollegeID() == 8918 &&
                    distancesList.at(j).getEndCollege().getCollegeID() == ID) {
                distance = distancesList.at(j).getDistance(); // set distance to distance of object that matches
                break;
            }
        }
    }

    return distance;
}

void MainWindow::on_display_comboBox_currentIndexChanged(int index)
{
    ui->purchase_button->hide();
    ui->tour_button->hide();

    switch (index) {
    case 0:
        ui->display_college_table->setColumnCount(0);
        ui->display_college_table->setRowCount(0);
        break;
    case 1:
        ui->tour_button->show();

        ui->display_college_table->setRowCount(0);

        ui->display_college_table->setColumnCount(3);
        ui->display_college_table->setHorizontalHeaderItem(0, new QTableWidgetItem("IDs"));
        ui->display_college_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Colleges"));
        ui->display_college_table->setHorizontalHeaderItem(2, new QTableWidgetItem("Distance from Saddleback"));

        // stretch College name
        ui->display_college_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

        for (int i = 0; i < collegesList.size(); ++i) {
            ui->display_college_table->insertRow(ui->display_college_table->rowCount());

            ui->display_college_table->setItem(ui->display_college_table->rowCount() - 1, 0,
                                               new QTableWidgetItem(QString::number(collegesList.at(i).getCollegeID())));
            ui->display_college_table->setItem(ui->display_college_table->rowCount() - 1, 1,
                                               new QTableWidgetItem(collegesList.at(i).getCollegeName()));
            ui->display_college_table->setItem(ui->display_college_table->rowCount() - 1, 2,
                                               new QTableWidgetItem(QString::number(distance_by_ID(collegesList.at(i).getCollegeID()))));

            // center text
            for (int col = 0; col < ui->display_college_table->columnCount(); ++col)
                ui->display_college_table->item(ui->display_college_table->rowCount() - 1, col)->setTextAlignment(Qt::AlignCenter);
        }
        break;
    case 2:
        ui->purchase_button->show();

        ui->display_college_table->setRowCount(0);

        ui->display_college_table->setColumnCount(4);
        ui->display_college_table->setHorizontalHeaderItem(0, new QTableWidgetItem("IDs"));
        ui->display_college_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Campuses"));
        ui->display_college_table->setHorizontalHeaderItem(2, new QTableWidgetItem("Souvenirs"));
        ui->display_college_table->setHorizontalHeaderItem(3, new QTableWidgetItem("Prices"));

        // stretch college name
        ui->display_college_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

        for (int i = 0; i < souvenirsList.size(); ++i) {
            ui->display_college_table->insertRow(ui->display_college_table->rowCount());

            ui->display_college_table->setItem(ui->display_college_table->rowCount() - 1, 0,
                                               new QTableWidgetItem(QString::number(souvenirsList.at(i).getSouvenirCollege().getCollegeID())));
            ui->display_college_table->setItem(ui->display_college_table->rowCount() - 1, 1,
                                               new QTableWidgetItem(souvenirsList.at(i).getSouvenirCollege().getCollegeName()));
            ui->display_college_table->setItem(ui->display_college_table->rowCount() - 1, 2,
                                               new QTableWidgetItem(souvenirsList.at(i).getSouvenirName()));
            ui->display_college_table->setItem(ui->display_college_table->rowCount() - 1, 3,
                                               new QTableWidgetItem("$" + QString::number(souvenirsList.at(i).getSouvenirPrice())));

            // center text
            for (int col = 0; col < ui->display_college_table->columnCount(); ++col)
                ui->display_college_table->item(ui->display_college_table->rowCount() - 1, col)->setTextAlignment(Qt::AlignCenter);
        }
        // fall through
    }
}

void MainWindow::on_login_button_clicked()
{
    AdminLogin *login_window = new AdminLogin;
    login_window->show();
    this->close();
}

void MainWindow::on_purchase_button_clicked()
{
    purchaseSouvenirs *purchase_souvenirs = new purchaseSouvenirs;
    purchase_souvenirs->show();
}

void MainWindow::on_search_edit_textEdited(const QString &arg1)
{
    if (arg1.length() == 0) {
        // display all colleges and exit
        on_display_comboBox_currentIndexChanged(ui->display_comboBox->currentIndex());
        return;
    } else {
        // clear the table
        ui->display_college_table->setRowCount(0);

        switch (ui->display_comboBox->currentIndex()) {
        case 0:
            return;
        case 1:
            for (int i = 0; i < collegesList.size(); ++i) {
                // add matching colleges
                if (collegesList.at(i).getCollegeName().toLower().contains(arg1.toLower())) {
                    ui->display_college_table->insertRow(ui->display_college_table->rowCount());

                    ui->display_college_table->setItem(ui->display_college_table->rowCount() - 1, 0,
                                                       new QTableWidgetItem(QString::number(collegesList.at(i).getCollegeID())));
                    ui->display_college_table->setItem(ui->display_college_table->rowCount() - 1, 1,
                                                       new QTableWidgetItem(collegesList.at(i).getCollegeName()));
                    ui->display_college_table->setItem(ui->display_college_table->rowCount() - 1, 2,
                                                       new QTableWidgetItem(QString::number(distance_by_ID(collegesList.at(i).getCollegeID()))));

                    // center text
                    for (int col = 0; col < ui->display_college_table->columnCount(); ++col)
                        ui->display_college_table->item(ui->display_college_table->rowCount() - 1, col)->setTextAlignment(Qt::AlignCenter);
                }
            }
            break;
        case 2:
            for (int i = 0; i < souvenirsList.size(); ++i) {
                // add matching colleges
                if (souvenirsList.at(i).getSouvenirCollege().getCollegeName().toLower().contains(arg1.toLower())) {
                    ui->display_college_table->insertRow(ui->display_college_table->rowCount());

                    ui->display_college_table->setItem(ui->display_college_table->rowCount() - 1, 0,
                                                       new QTableWidgetItem(QString::number(souvenirsList.at(i).getSouvenirCollege().getCollegeID())));
                    ui->display_college_table->setItem(ui->display_college_table->rowCount() - 1, 1,
                                                       new QTableWidgetItem(souvenirsList.at(i).getSouvenirCollege().getCollegeName()));
                    ui->display_college_table->setItem(ui->display_college_table->rowCount() - 1, 2,
                                                       new QTableWidgetItem(souvenirsList.at(i).getSouvenirName()));
                    ui->display_college_table->setItem(ui->display_college_table->rowCount() - 1, 3,
                                                       new QTableWidgetItem("$" + QString::number(souvenirsList.at(i).getSouvenirPrice())));

                    // center text
                    for (int col = 0; col < ui->display_college_table->columnCount(); ++col)
                        ui->display_college_table->item(ui->display_college_table->rowCount() - 1, col)->setTextAlignment(Qt::AlignCenter);
                }
            }
            // fall through
        }
    }
}
