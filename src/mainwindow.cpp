#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adminlogin.h"

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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::readDatabase()
{
    // Reading from the Sql Database to the campuses vectors
    QSqlQuery colleges_qry("SELECT * FROM College_Touring");

    while(colleges_qry.next())
    {
        collegesList.addCollege(colleges_qry.record().value("ID").toInt(),
                                colleges_qry.record().value("Universities").toString());
    }
    qDebug() << collegesList.getCollegeIDsSize();


    //Reading from the Sql Database to the souvenirs vectors
    QSqlQuery souvenirs_qry("SELECT * FROM colleges_souvenirs");


    while(souvenirs_qry.next())
    {
        souvenirsList.addSouvenir(souvenirs_qry.record().value("ID").toInt(),
                                  souvenirs_qry.record().value("Universities").toString(),
                                  souvenirs_qry.record().value("souvenir").toString(),
                                  souvenirs_qry.record().value("price").toDouble(),
                                  souvenirs_qry.record().value("Quantity").toInt());
    }

    //Reading from the Sql Database to the distances vectors
    QSqlQuery distances_qry("SELECT * FROM distances");

        int index = 0;

    while(distances_qry.next())
    {
        distancesList.addDistances(distances_qry.record().value("startingPointCollegeId").toInt(),
                                   distances_qry.record().value("endingPointCollegeId").toInt(),
                                   distances_qry.record().value("startingPointCollegeName").toString(),
                                   distances_qry.record().value("endingPointCollegeId").toString(),
                                   distances_qry.record().value("distance").toDouble());

        qDebug() << distancesList.getStartingPointCollegeIdValue(index);
        index++;
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
        ui->status->setText("Database is not Connected");
        return false;
    }
    else
    {
        ui->status->setText("Database is Connected seccessfully");
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
        ui->display_college_table->setRowCount(collegesList.getCollegeIDsSize());

        ui->display_college_table->setHorizontalHeaderItem(0, new QTableWidgetItem("IDs"));
        ui->display_college_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Colleges"));

        /* stretch college name */
        ui->display_college_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

        for(int row = 0; row < collegesList.getCollegeIDsSize(); row++)
        {
            qDebug() << collegesList.getCollegeIDsValue(0);
            ui->display_college_table->setItem(row, 0, new QTableWidgetItem(QString::number(collegesList.getCollegeIDsValue(row))));
            ui->display_college_table->setItem(row, 1, new QTableWidgetItem(collegesList.getCollegeNamesValue(row)));

            ui->display_college_table->item(row, 0)->setTextAlignment(Qt::AlignCenter);
            ui->display_college_table->item(row, 1)->setTextAlignment(Qt::AlignCenter);
        }
    }
    else if(ui->display_souvenirs_radio_button->isChecked())
    {
        ui->display_college_table->setColumnCount(5);
        ui->display_college_table->setRowCount(souvenirsList.getSouvenirsContainerSize());

        ui->display_college_table->setHorizontalHeaderItem(0, new QTableWidgetItem("IDs"));
        ui->display_college_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Campuses"));
        ui->display_college_table->setHorizontalHeaderItem(2, new QTableWidgetItem("Souvenirs"));
        ui->display_college_table->setHorizontalHeaderItem(3, new QTableWidgetItem("Prices"));
        ui->display_college_table->setHorizontalHeaderItem(4, new QTableWidgetItem("Quantities"));

        /* stretch campus name */
        ui->display_college_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

        int row = 0;

        for(int i = 0; i < collegesList.getCollegeIDsSize(); i++)
        {
            int currentId = collegesList.getCollegeIDsValue(i);

            for(int j = 0; j < souvenirsList.getSouvenirsContainerSize(); j++)
            {
                if(currentId == souvenirsList.getSouvenirCollegeId(j))
                {
                    qDebug() << souvenirsList.getSouvenirCollegeId(row);
                    ui->display_college_table->setItem(row, 0, new QTableWidgetItem(QString::number(souvenirsList.getSouvenirCollegeId(j))));
                    ui->display_college_table->setItem(row, 1, new QTableWidgetItem(souvenirsList.getSouvenirCollegeName(j)));
                    ui->display_college_table->setItem(row, 2, new QTableWidgetItem(souvenirsList.getSouvenirName(j)));
                    ui->display_college_table->setItem(row, 3, new QTableWidgetItem("$" + QString::number(souvenirsList.getSouvenirPrice(j))));

                    if(souvenirsList.getSouvenirQuantity(j) == 0)
                    {
                        ui->display_college_table->setItem(row, 4, new QTableWidgetItem("Out of Stock"));

                        for(int p = 0; p < 5; p++)
                        {
                            ui->display_college_table->item(row, p)->setBackgroundColor(Qt::cyan);
                        }
                    }
                    else
                    {
                        ui->display_college_table->setItem(row, 4, new QTableWidgetItem(QString::number(souvenirsList.getSouvenirQuantity(j))));
                    }

                    ui->display_college_table->item(row, 0)->setTextAlignment(Qt::AlignCenter);
                    ui->display_college_table->item(row, 1)->setTextAlignment(Qt::AlignCenter);
                    ui->display_college_table->item(row, 2)->setTextAlignment(Qt::AlignCenter);
                    ui->display_college_table->item(row, 3)->setTextAlignment(Qt::AlignCenter);
                    ui->display_college_table->item(row, 4)->setTextAlignment(Qt::AlignCenter);

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
        displayCollegeFoundTable(collegeIdFoundById, collegesList.getCollegeIDsValue(collegeIdFoundById));
    }
    else if(!ui->campusName_lineEdit->text().isEmpty() && ui->campusId_lineEdit->text().isEmpty())
    {
        collegeIdFoundByName = findCollegeIdByName(collegeNameSearched);
        displayCollegeFoundTable(collegeIdFoundByName, collegesList.getCollegeIDsValue(collegeIdFoundByName));
    }
    else if(!ui->campusId_lineEdit->text().isEmpty() && !ui->campusName_lineEdit->text().isEmpty())
    {
        collegeIdFoundByName = findCollegeIdByName(collegeNameSearched);
        collegeIdFoundById   = findCollegeIdById(collegeIdSearched);

        if(collegeIdFoundById == collegeIdFoundByName)
        {
            displayCollegeFoundTable(collegeIdFoundById, collegesList.getCollegeIDsValue(collegeIdFoundById));
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
    bool found = false;
    int index  = 0;
    QString currentName;

    while(index < collegesList.getCollegeIDsSize() && !found)
    {
        currentName = collegesList.getCollegeNamesValue(index).toLower();

        if(collegeNameSearched == collegesList.getCollegeNamesValue(index).toLower() ||
           currentName.contains(collegeNameSearched ))
        {
            found = true;
        }
        else
        {
            index++;
        }
    }
    return index;
}

int MainWindow::findCollegeIdById(int collegeIdSearched)
{
    bool found = false;
    int index  = 0;

    while(index < collegesList.getCollegeIDsSize() && !found)
    {
        if(collegeIdSearched == collegesList.getCollegeIDsValue(index))
        {
            found = true;
        }
        else
        {
            index++;
        }
    }
    return index;
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

    if(collegeIdFound >= collegesList.getCollegeIDsSize())
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

        ui->search_college_table->setItem(0, 0, new QTableWidgetItem(QString::number(collegesList.getCollegeIDsValue(collegeIdFound))));
        ui->search_college_table->setItem(0, 1, new QTableWidgetItem(collegesList.getCollegeNamesValue(collegeIdFound)));

        ui->search_college_table->item(0, 0)->setTextAlignment(Qt::AlignCenter);
        ui->search_college_table->item(0, 1)->setTextAlignment(Qt::AlignCenter);

        ui->college_souvenirs_table->setColumnCount(3);

        ui->college_souvenirs_table->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenirs"));
        ui->college_souvenirs_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Prices"));
        ui->college_souvenirs_table->setHorizontalHeaderItem(2, new QTableWidgetItem("Quantities"));

        /* stretch souvenir name */
        ui->college_souvenirs_table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);

        int row = 0;
        int rowCount = 0;

        for(int index = 0; index < souvenirsList.getSouvenirsContainerSize(); index++)
        {
            if(souvenirsList.getSouvenirCollegeId(index) == collegeId)
            {
                ui->college_souvenirs_table->setRowCount(++rowCount);

                ui->college_souvenirs_table->setItem(row, 0, new QTableWidgetItem(souvenirsList.getSouvenirName(index)));
                ui->college_souvenirs_table->setItem(row, 1, new QTableWidgetItem("$" + QString::number(souvenirsList.getSouvenirPrice(index))));

                if(souvenirsList.getSouvenirQuantity(index) == 0)
                {
                    ui->college_souvenirs_table->setItem(row, 2, new QTableWidgetItem("Out of Stock"));

                    for(int p = 0; p < 3; p++)
                    {
                        ui->college_souvenirs_table->item(row, p)->setBackgroundColor(Qt::cyan);
                    }
                }
                else
                {
                    ui->college_souvenirs_table->setItem(row, 2, new QTableWidgetItem(QString::number(souvenirsList.getSouvenirQuantity(index))));
                }

                ui->college_souvenirs_table->item(row, 0)->setTextAlignment(Qt::AlignCenter);
                ui->college_souvenirs_table->item(row, 1)->setTextAlignment(Qt::AlignCenter);
                ui->college_souvenirs_table->item(row, 2)->setTextAlignment(Qt::AlignCenter);

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
