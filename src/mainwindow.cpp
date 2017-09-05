
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connectionOpen();
    ui->progressBar->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::connectionOpen()
{
    // Created a Database Object
    myDatabase = QSqlDatabase::addDatabase("QSQLITE");

    // Proided the database path and name
    myDatabase.setDatabaseName("C:/Users/sfoto/Documents/collegetour/Database/project.sqlite.sqlite");

    // If the database is not open the following message will be displayed otherwise it says connected
    if(!myDatabase.open())
    {
        ui->status->setText("Database is not Connected");
        return false;
    }
    else
    {
        ui->status->setText("Database is Connected seccessfully");

        // Reading from the Sql Database to the vectors
        //QSqlQueryModel *modal = new QSqlQueryModel();

        QSqlQuery colleges_qry("SELECT * FROM College_Touring");

        while(colleges_qry.next())
        {
            collegesList.addCollege(colleges_qry.record().value("ID").toInt(),
                                    colleges_qry.record().value("Universities").toString());
        }
        qDebug() << collegesList.getCollegeIDsSize();


        //Reading from the Sql Database to the vectors

        QSqlQuery souvenirs_qry("SELECT * FROM colleges_souvenirs");

        while(souvenirs_qry.next())
        {
            souvenirsList.addSouvenir(souvenirs_qry.record().value("ID").toInt(),
                                      souvenirs_qry.record().value("souvenir").toString(),
                                      souvenirs_qry.record().value("price").toDouble(),
                                      souvenirs_qry.record().value("Quantity").toInt());
        }
        qDebug() << souvenirsList.getSouvenirsIdSize();

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

    for (int i = 0; i < 40000000; ++i){
        if (i % 100 == 0){
            qApp->processEvents();
        }
    }

    {
      ui->progressBar->setValue(50);
      for (int i = 0; i < 40000000; ++i){
        if (i % 100 == 0){
            qApp->processEvents();
        }
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
        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setRowCount(souvenirsList.getSouvenirsIdSize());

        ui->tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("IDs"));
        ui->tableWidget->setHorizontalHeaderItem(1, new QTableWidgetItem("Souvenirs"));
        ui->tableWidget->setHorizontalHeaderItem(2, new QTableWidgetItem("Prices"));
        ui->tableWidget->setHorizontalHeaderItem(3, new QTableWidgetItem("Quantities"));

        ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
        ui->tableWidget->verticalHeader()->setStretchLastSection(true);

        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        for(int row = 0; row < souvenirsList.getSouvenirsIdSize(); row++)
        {
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(souvenirsList.getSouvenirCollegeId(row))));
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(souvenirsList.getSouvenirPrice(row))));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(souvenirsList.getSouvenirName(row)));
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(souvenirsList.getSouvenirQuantity(row))));

            ui->tableWidget->item(row, 0)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->item(row, 1)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->item(row, 2)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->item(row, 3)->setTextAlignment(Qt::AlignCenter);

           ui->tableWidget->resizeRowsToContents();
           ui->tableWidget->resizeColumnsToContents();
        }

    }



}

