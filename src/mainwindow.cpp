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


void MainWindow::on_display_college_button_clicked()
{
    displayColleges displayWindow;
    displayWindow.setModal(true);
    displayWindow.exec();
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
        ui->tableWidget->setColumnCount(2);
        ui->tableWidget->setRowCount(collegesList.getCollegeIDsSize());

        ui->tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("IDs"));
        ui->tableWidget->setHorizontalHeaderItem(1, new QTableWidgetItem("Colleges"));

        ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
        ui->tableWidget->verticalHeader()->setStretchLastSection(true);

        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        for(int row = 0; row < collegesList.getCollegeIDsSize(); row++)
        {
            qDebug() << collegesList.getCollegeIDsValue(0);
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(collegesList.getCollegeIDsValue(row))));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(collegesList.getCollegeNamesValue(row)));
            ui->tableWidget->item(row, 0)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->item(row, 1)->setTextAlignment(Qt::AlignCenter);
        }
    }
    else if(ui->display_souvenirs_radio_button->isChecked())
    {
        ui->tableWidget->setColumnCount(5);
        ui->tableWidget->setRowCount(souvenirsList.getSouvenirsContainerSize());

        ui->tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("IDs"));
        ui->tableWidget->setHorizontalHeaderItem(1, new QTableWidgetItem("Campuses"));
        ui->tableWidget->setHorizontalHeaderItem(2, new QTableWidgetItem("Souvenirs"));
        ui->tableWidget->setHorizontalHeaderItem(3, new QTableWidgetItem("Prices"));
        ui->tableWidget->setHorizontalHeaderItem(4, new QTableWidgetItem("Quantities"));

        ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
        ui->tableWidget->verticalHeader()->setStretchLastSection(true);

        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        int row = 0;

        for(int i = 0; i < collegesList.getCollegeIDsSize(); i++)
        {
            int currentId = collegesList.getCollegeIDsValue(i);

            for(int j = 0; j < souvenirsList.getSouvenirsContainerSize(); j++)
            {
                if(currentId == souvenirsList.getSouvenirCollegeId(j))
                {
                    qDebug() << souvenirsList.getSouvenirCollegeId(row);
                    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(souvenirsList.getSouvenirCollegeId(j))));
                    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(souvenirsList.getSouvenirCollegeName(j)));
                    ui->tableWidget->setItem(row, 2, new QTableWidgetItem(souvenirsList.getSouvenirName(j)));
                    ui->tableWidget->setItem(row, 3, new QTableWidgetItem("$" + QString::number(souvenirsList.getSouvenirPrice(j))));

                    if(souvenirsList.getSouvenirQuantity(j) == 0)
                    {
                        ui->tableWidget->setItem(row, 4, new QTableWidgetItem("Out of Stock"));

                        for(int p = 0; p < 5; p++)
                        {
                            ui->tableWidget->item(row, p)->setBackgroundColor(Qt::cyan);
                        }
                    }
                    else
                    {
                        ui->tableWidget->setItem(row, 4, new QTableWidgetItem(QString::number(souvenirsList.getSouvenirQuantity(j))));
                    }
                    ui->tableWidget->item(row, 0)->setTextAlignment(Qt::AlignCenter);
                    ui->tableWidget->item(row, 1)->setTextAlignment(Qt::AlignCenter);
                    ui->tableWidget->item(row, 2)->setTextAlignment(Qt::AlignCenter);
                    ui->tableWidget->item(row, 3)->setTextAlignment(Qt::AlignCenter);
                    ui->tableWidget->item(row, 4)->setTextAlignment(Qt::AlignCenter);

                    ui->tableWidget->resizeRowsToContents();
                    ui->tableWidget->resizeColumnsToContents();
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
            ui->tableWidget_4->clear();
            ui->tableWidget_2->clear();
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
        ui->tableWidget_2->setColumnCount(2);
        ui->tableWidget_2->setRowCount(1);

        ui->tableWidget_2->setHorizontalHeaderItem(0, new QTableWidgetItem("ID"));
        ui->tableWidget_2->setHorizontalHeaderItem(1, new QTableWidgetItem("College"));

        ui->tableWidget_2->setItem(0, 0, new QTableWidgetItem(QString::number(collegesList.getCollegeIDsValue(collegeIdFound))));
        ui->tableWidget_2->setItem(0, 1, new QTableWidgetItem(collegesList.getCollegeNamesValue(collegeIdFound)));

        ui->tableWidget_2->resizeRowsToContents();

        ui->tableWidget_2->item(0, 0)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_2->item(0, 1)->setTextAlignment(Qt::AlignCenter);

        ui->tableWidget_2->horizontalHeader()->setStretchLastSection(true);
        ui->tableWidget_2->verticalHeader()->setStretchLastSection(true);
        ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);

        ui->tableWidget_4->setColumnCount(3);

        ui->tableWidget_4->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenirs"));
        ui->tableWidget_4->setHorizontalHeaderItem(1, new QTableWidgetItem("Prices"));
        ui->tableWidget_4->setHorizontalHeaderItem(2, new QTableWidgetItem("Quantities"));

        ui->tableWidget_4->horizontalHeader()->setStretchLastSection(true);
        ui->tableWidget_4->verticalHeader()->setStretchLastSection(true);
        ui->tableWidget_4->setEditTriggers(QAbstractItemView::NoEditTriggers);

        int row = 0;
        int rowCount = 0;

        for(int index = 0; index < souvenirsList.getSouvenirsContainerSize(); index++)
        {
            if(souvenirsList.getSouvenirCollegeId(index) == collegeId)
            {
                ui->tableWidget_4->setRowCount(++rowCount);

                ui->tableWidget_4->setItem(row, 0, new QTableWidgetItem(souvenirsList.getSouvenirName(index)));
                ui->tableWidget_4->setItem(row, 1, new QTableWidgetItem("$" + QString::number(souvenirsList.getSouvenirPrice(index))));

                if(souvenirsList.getSouvenirQuantity(index) == 0)
                {
                    ui->tableWidget_4->setItem(row, 2, new QTableWidgetItem("Out of Stock"));

                    for(int p = 0; p < 3; p++)
                    {
                        ui->tableWidget_4->item(row, p)->setBackgroundColor(Qt::cyan);
                    }
                }
                else
                {
                    ui->tableWidget_4->setItem(row, 2, new QTableWidgetItem(QString::number(souvenirsList.getSouvenirQuantity(index))));
                }

                ui->tableWidget_4->item(row, 0)->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget_4->item(row, 1)->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget_4->item(row, 2)->setTextAlignment(Qt::AlignCenter);

                row++;
            }
        }
    }
}

void MainWindow::on_actionLogin_triggered()
{
    AdminLogin *login_window = new AdminLogin;
    login_window->show();
    this->close();
}
