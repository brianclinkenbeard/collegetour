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

    ui->progressBar->hide();
    ui->progressBar_2->hide();

    /* stretch vertical headers to fit table */
    ui->display_college_table->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->search_college_table->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->college_souvenirs_table->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    /*
     * horizontal headers will stretch according to element size, certain columns
     * will later be selected to stretch to fit the remaining width of the table
     */
    ui->display_college_table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->search_college_table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->college_souvenirs_table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    /* center header text */
    ui->display_college_table->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->search_college_table->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->college_souvenirs_table->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);

    /* no editing elements */
    ui->display_college_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->search_college_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->college_souvenirs_table->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->pushButton_purchase->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::readDatabase()
{
    // Reading from the Sql Database to the campuses vectors
    QSqlQuery colleges_qry("SELECT * FROM College_Touring");

    while(colleges_qry.next()) {
        /* push back College */
        collegesList.push_back(College(colleges_qry.record().value("ID").toInt(),
                                colleges_qry.record().value("Universities").toString()));
    }

    //Reading from the Sql Database to the souvenirs vectors
    QSqlQuery souvenirs_qry("SELECT * FROM colleges_souvenirs");

    while(souvenirs_qry.next()) {
        /* push back Souvenir */
        souvenirsList.push_back(Souvenir(College(souvenirs_qry.record().value("ID").toInt(),
                                                 souvenirs_qry.record().value("Universities").toString()),
                                         souvenirs_qry.record().value("souvenir").toString(),
                                         souvenirs_qry.record().value("price").toDouble()));
    }

    //Reading from the Sql Database to the distances vectors
    QSqlQuery distances_qry("SELECT * FROM distances");

    while(distances_qry.next())
    {
        /* find College by ID from existing list */
        College startCollege(distances_qry.record().value("startingPointCollegeId").toInt(),
                             distances_qry.record().value("startingPointCollegeName").toString());
        College endCollege(distances_qry.record().value("endingPointCollegeId").toInt(),
                             distances_qry.record().value("endingPointCollegeName").toString());

        distancesList.push_back(Distance(startCollege, endCollege, souvenirs_qry.record().value("distance").toInt()));
    }
}

bool MainWindow::connectionOpen()
{
    // Created a Database Object
    myDatabase = QSqlDatabase::addDatabase("QSQLITE");

    // Proided the database path and name
    myDatabase.setDatabaseName("Database/project.sqlite.sqlite");

    // If the database is not open the following message will be displayed otherwise it says connected
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

void MainWindow::on_display_college_list_button_clicked()
{
    ui->progressBar->setValue(0);
    ui->progressBar->show();

    for (int i = 0; i < 40000000; ++i)
    {
        if (i % 100 == 0)
        {
            qApp->processEvents();
        }
    }

    ui->progressBar->setValue(50);
    for (int i = 0; i < 40000000; ++i)
    {
        if (i % 100 == 0)
        {
           qApp->processEvents();
        }
    }

    ui->progressBar->hide();

    if(ui->display_colleges_radio_button->isChecked())
    {
        ui->display_college_table->setColumnCount(2);
        ui->display_college_table->setRowCount(collegesList.size());

        ui->display_college_table->setHorizontalHeaderItem(0, new QTableWidgetItem("IDs"));
        ui->display_college_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Colleges"));

        /* stretch college name */
        ui->display_college_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

        for(int row = 0; row < collegesList.size(); row++)
        {
            ui->display_college_table->setItem(row, 0, new QTableWidgetItem(QString::number(collegesList.at(row).getCollegeID())));
            ui->display_college_table->setItem(row, 1, new QTableWidgetItem(collegesList.at(row).getCollegeName()));

            ui->display_college_table->item(row, 0)->setTextAlignment(Qt::AlignCenter);
            ui->display_college_table->item(row, 1)->setTextAlignment(Qt::AlignCenter);
        }
    }
    else if(ui->display_souvenirs_radio_button->isChecked())
    {
        ui->display_college_table->setColumnCount(4);
        ui->display_college_table->setRowCount(souvenirsList.size());

        ui->display_college_table->setHorizontalHeaderItem(0, new QTableWidgetItem("IDs"));
        ui->display_college_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Campuses"));
        ui->display_college_table->setHorizontalHeaderItem(2, new QTableWidgetItem("Souvenirs"));
        ui->display_college_table->setHorizontalHeaderItem(3, new QTableWidgetItem("Prices"));

        /* stretch campus name */
        ui->display_college_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

        int row = 0;

        for(int i = 0; i < collegesList.size(); i++)
        {
            int currentId = collegesList.at(i).getCollegeID();

            for(int j = 0; j < souvenirsList.size(); j++)
            {
                if(currentId == souvenirsList.at(j).getSouvenirCollege().getCollegeID())
                {
                    ui->display_college_table->setItem(row, 0, new QTableWidgetItem(QString::number(souvenirsList.at(j).getSouvenirCollege().getCollegeID())));
                    ui->display_college_table->setItem(row, 1, new QTableWidgetItem(souvenirsList.at(j).getSouvenirCollege().getCollegeName()));
                    ui->display_college_table->setItem(row, 2, new QTableWidgetItem(souvenirsList.at(j).getSouvenirName()));
                    ui->display_college_table->setItem(row, 3, new QTableWidgetItem("$" + QString::number(souvenirsList.at(j).getSouvenirPrice())));

                    ui->display_college_table->item(row, 0)->setTextAlignment(Qt::AlignCenter);
                    ui->display_college_table->item(row, 1)->setTextAlignment(Qt::AlignCenter);
                    ui->display_college_table->item(row, 2)->setTextAlignment(Qt::AlignCenter);
                    ui->display_college_table->item(row, 3)->setTextAlignment(Qt::AlignCenter);

                    row++;
                }
            }
        }
    }
}

void MainWindow::on_find_campus_push_button_clicked()
{
    QString collegeNameSearched = ui->campusName_lineEdit->text().toLower();
    int collegeIdSearched       = ui->campusId_lineEdit->text().toInt();

    int collegeIdFoundByName;
    int collegeIdFoundById;

    if(ui->campusName_lineEdit->text().isEmpty() && !ui->campusId_lineEdit->text().isEmpty())
    {
        collegeIdFoundById = findCollegeIdById(collegeIdSearched);
        displayCollegeFoundTable(collegeIdFoundById, collegesList.at(collegeIdFoundById).getCollegeID());
        ui->pushButton_purchase->show();
    }
    else if(!ui->campusName_lineEdit->text().isEmpty() && ui->campusId_lineEdit->text().isEmpty())
    {
        collegeIdFoundByName = findCollegeIdByName(collegeNameSearched);
        displayCollegeFoundTable(collegeIdFoundByName, collegesList.at(collegeIdFoundByName).getCollegeID());
        ui->pushButton_purchase->show();
    }
    else if(!ui->campusId_lineEdit->text().isEmpty() && !ui->campusName_lineEdit->text().isEmpty())
    {
        collegeIdFoundByName = findCollegeIdByName(collegeNameSearched);
        collegeIdFoundById   = findCollegeIdById(collegeIdSearched);

        if(collegeIdFoundById == collegeIdFoundByName)
        {
            displayCollegeFoundTable(collegeIdFoundById, collegesList.at(collegeIdFoundById).getCollegeID());
            ui->pushButton_purchase->show();
        }
        else
        {
            ui->college_souvenirs_table->clear();
            ui->search_college_table->clear();
            qDebug() << "Name and id doesn't match";
        }
    }
    else
    {
        qDebug() << "No Input Entered";
    }
}

int MainWindow::findCollegeIdByName(QString collegeNameSearched)
{
    QVector<College>::iterator foundCollege = std::find_if(collegesList.begin(), collegesList.end(), [&] (const College &c)
                                                          { return c.getCollegeName().toLower().contains(collegeNameSearched); });

    /* check if college is found */
    if (foundCollege != collegesList.end()) {
        /* calculate and return index from iterator */
        return foundCollege - collegesList.begin();
    } else {
        /* TODO: return -1 instead of 0 and check for success on find campus button click */
        return 0;
    }
}

int MainWindow::findCollegeIdById(int collegeIdSearched)
{
    QVector<College>::iterator foundCollege = std::find_if(collegesList.begin(), collegesList.end(), [&] (const College &c)
                                                          { return c.getCollegeID() == collegeIdSearched; });

    /* check if college is found */
    if (foundCollege != collegesList.end()) {
        /* calculate and return index from iterator */
        return foundCollege - collegesList.begin();
    } else {
        /* TODO: return -1 instead of 0 and check for success on find campus button click */
        return 0;
    }
}

void MainWindow::displayCollegeFoundTable(int collegeIdFound, int collegeId)
{
    ui->progressBar_2->setValue(0);
    ui->progressBar_2->show();

    for (int i = 0; i < 40000000; ++i)
    {
        if (i % 100 == 0)
        {
            qApp->processEvents();
        }
    }

    ui->progressBar_2->setValue(50);
    for (int i = 0; i < 40000000; ++i)
    {
        if (i % 100 == 0)
        {
           qApp->processEvents();
        }
    }
    ui->progressBar_2->hide();

    if(collegeIdFound >= collegesList.size())
    {
        qDebug() << "Name was not found";
    }
    else
    {
        ui->search_college_table->setColumnCount(2);
        ui->search_college_table->setRowCount(1);

        ui->search_college_table->setHorizontalHeaderItem(0, new QTableWidgetItem("ID"));
        ui->search_college_table->setHorizontalHeaderItem(1, new QTableWidgetItem("College"));

        /* stretch college name */
        ui->search_college_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

        ui->search_college_table->setItem(0, 0, new QTableWidgetItem(QString::number(collegesList.at(collegeIdFound).getCollegeID())));
        ui->search_college_table->setItem(0, 1, new QTableWidgetItem(collegesList.at(collegeIdFound).getCollegeName()));

        ui->search_college_table->item(0, 0)->setTextAlignment(Qt::AlignCenter);
        ui->search_college_table->item(0, 1)->setTextAlignment(Qt::AlignCenter);

        ui->college_souvenirs_table->setColumnCount(2);

        ui->college_souvenirs_table->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenirs"));
        ui->college_souvenirs_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Prices"));

        /* stretch souvenir name */
        ui->college_souvenirs_table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);

        int row = 0;
        int rowCount = 0;

        for(int index = 0; index < souvenirsList.size(); index++)
        {
            if(souvenirsList.at(index).getSouvenirCollege().getCollegeID() == collegeId)
            {
                ui->college_souvenirs_table->setRowCount(++rowCount);

                ui->college_souvenirs_table->setItem(row, 0, new QTableWidgetItem(souvenirsList.at(index).getSouvenirName()));
                ui->college_souvenirs_table->setItem(row, 1, new QTableWidgetItem("$" + QString::number(souvenirsList.at(index).getSouvenirPrice())));

                ui->college_souvenirs_table->item(row, 0)->setTextAlignment(Qt::AlignCenter);
                ui->college_souvenirs_table->item(row, 1)->setTextAlignment(Qt::AlignCenter);

                row++;
            }
        }
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    AdminLogin *login_window = new AdminLogin;
    login_window->show();
    this->close();
}

void MainWindow::on_pushButton_purchase_clicked()
{
    purchaseSouvenirs *purchase_souvenirs = new purchaseSouvenirs;
    purchase_souvenirs->show();
}
