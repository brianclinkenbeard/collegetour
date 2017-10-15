#include "tourpurchase.h"
#include "ui_tourpurchase.h"
#include <QDebug>

QVector<int> tourpurchase::keys;
QVector<int> tourpurchase::selectedTourColleges;
QVector<Souvenir> tourpurchase::souvenirList;
double tourpurchase::total = 0.0;
int tourpurchase::souvenirCount = 0;
int tourpurchase::pageIndicator = 0;
//QVector<Souvenir> tourpurchase::tempSouvenirs;

tourpurchase::tourpurchase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tourpurchase)
{
    ui->setupUi(this);
}

tourpurchase::~tourpurchase()
{
    delete ui;
}

tourpurchase::tourpurchase(QVector<int> tour_keys, QVector<int> chosenTour, QVector<Souvenir> souvenirs)
{
    selectedTourColleges = chosenTour;
    souvenirList = souvenirs;
    keys = tour_keys;

    qDebug() << "EEEEEEEEEEEEEEEEEEE: " << souvenirList.size();
    qDebug() << "***********************" << keys.size();

    for(int index = 0; index < keys.size(); index++)
    {
        qDebug() << ":::: " << keys.at(index) << " ---> " << selectedTourColleges.at(index);
    }
    tempCount = 0;
}

void tourpurchase::on_shopping_button_clicked()
{
    qDebug() << "%%%%%%%%%%%%%%%%%%%%%";
    qDebug() << "$$$$$$$$$$ " << 246;
    qDebug() << "***********************" << keys.size();
    qDebug() << "***********************Sou " << souvenirList.size();

    findPage(keys.at(0));
    displaySouvenirs(0);
}

void tourpurchase::displaySouvenirs(int count)
{
    tempSouvenirs.clear();
    qDebug() << "Here1";
    qDebug() << "@WWW  " << souvenirList.size();

  //if(count >= selectedTourColleges.size()) {
    //  return;
  //} else {
      for(int index = 0; index < souvenirList.size(); index++) {
          if(selectedTourColleges.at(count) == souvenirList.at(index).getSouvenirCollege().getCollegeID()) {
            qDebug() << "Here6";
            tempSouvenirs.push_back(souvenirList.at(index));
          }
      }
      for(int i = 0; i < tempSouvenirs.size(); i++) {
          qDebug() << tempSouvenirs.at(i).getSouvenirName();
      }
      qDebug() << "Here2";
      qDebug() << "count is: " << count;
      tourPurchasesTable(keys.at(count));
      if(count < keys.size()-1) {
         pageIndicator = keys.at(count + 1);
         count++;
      } else {
          count = 0;
          pageIndicator = keys.at(count);
      }
      tempCount = count;
  //}
}

void tourpurchase::findPage(int index)
{
    qDebug() << "********************&&&^%$##@" << index;
    switch (index) {
    case 1:  ui->purchase_stackedWidget->setCurrentIndex(index);
        break;
    case 2:  ui->purchase_stackedWidget->setCurrentIndex(index);
        break;
    case 3:  ui->purchase_stackedWidget->setCurrentIndex(index);
        break;
    case 4:  ui->purchase_stackedWidget->setCurrentIndex(index);
        break;
    case 5:  ui->purchase_stackedWidget->setCurrentIndex(index);
        break;
    case 6:  ui->purchase_stackedWidget->setCurrentIndex(index);
        break;
    case 7:  ui->purchase_stackedWidget->setCurrentIndex(index);
        break;
    case 8:  ui->purchase_stackedWidget->setCurrentIndex(index);
        break;
    case 9:  ui->purchase_stackedWidget->setCurrentIndex(index);
        break;
    case 10: ui->purchase_stackedWidget->setCurrentIndex(index);
        break;
    case 11: ui->purchase_stackedWidget->setCurrentIndex(index);
        break;
    case 12: ui->purchase_stackedWidget->setCurrentIndex(index);
        break;
    case 13: ui->purchase_stackedWidget->setCurrentIndex(index);
        break;
    }
}

/**
 * @brief tourpurchase::tourPurchasesTable
 * @param count
 */
void tourpurchase::tourPurchasesTable(int count)
{
    qDebug() << "Here3";
    switch(count) {
    case 1:
        ui->tableWidget_arizona->setRowCount(0);
        ui->tableWidget_arizona->setColumnCount(2);
        ui->tableWidget_arizona->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenir"));
        ui->tableWidget_arizona->setHorizontalHeaderItem(1, new QTableWidgetItem("Price"));
        ui->tableWidget_arizona->verticalHeader()->hide();
        ui->tableWidget_arizona->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        qDebug() << "LLLLLL " << tempSouvenirs.size();

        for(int index = 0; index < tempSouvenirs.size(); index++) {
            ui->tableWidget_arizona->insertRow(ui->tableWidget_arizona->rowCount());
            ui->tableWidget_arizona->setItem(ui->tableWidget_arizona->rowCount() - 1, 0,
                                               new QTableWidgetItem(tempSouvenirs.at(index).getSouvenirName()));
            ui->tableWidget_arizona->setItem(ui->tableWidget_arizona->rowCount() - 1, 1,
                                               new QTableWidgetItem(QString::number(tempSouvenirs.at(index).getSouvenirPrice())));
            ui->tableWidget_arizona->item(ui->tableWidget_arizona->rowCount() - 1, 0)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_arizona->item(ui->tableWidget_arizona->rowCount() - 1, 1)->setTextAlignment(Qt::AlignCenter);
        }
        break;
    case 2:
        ui->tableWidget_irvine->setRowCount(0);
        ui->tableWidget_irvine->setColumnCount(2);
        ui->tableWidget_irvine->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenir"));
        ui->tableWidget_irvine->setHorizontalHeaderItem(1, new QTableWidgetItem("Price"));
        ui->tableWidget_irvine->verticalHeader()->hide();
        ui->tableWidget_irvine->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        qDebug() << "LLLLLL " << tempSouvenirs.size();

        for(int index = 0; index < tempSouvenirs.size(); index++) {
            ui->tableWidget_irvine->insertRow(ui->tableWidget_irvine->rowCount());
            ui->tableWidget_irvine->setItem(ui->tableWidget_irvine->rowCount() - 1, 0,
                                               new QTableWidgetItem(tempSouvenirs.at(index).getSouvenirName()));
            ui->tableWidget_irvine->setItem(ui->tableWidget_irvine->rowCount() - 1, 1,
                                               new QTableWidgetItem(QString::number(tempSouvenirs.at(index).getSouvenirPrice())));
            ui->tableWidget_irvine->item(ui->tableWidget_irvine->rowCount() - 1, 0)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_irvine->item(ui->tableWidget_irvine->rowCount() - 1, 1)->setTextAlignment(Qt::AlignCenter);
        }
        break;
    case 3:
        ui->tableWidget_Mit->setRowCount(0);
        ui->tableWidget_Mit->setColumnCount(2);
        ui->tableWidget_Mit->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenir"));
        ui->tableWidget_Mit->setHorizontalHeaderItem(1, new QTableWidgetItem("Price"));
        ui->tableWidget_Mit->verticalHeader()->hide();
        ui->tableWidget_Mit->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        qDebug() << "LLLLLL " << tempSouvenirs.size();

        for(int index = 0; index < tempSouvenirs.size(); index++) {
            ui->tableWidget_Mit->insertRow(ui->tableWidget_Mit->rowCount());
            ui->tableWidget_Mit->setItem(ui->tableWidget_Mit->rowCount() - 1, 0,
                                               new QTableWidgetItem(tempSouvenirs.at(index).getSouvenirName()));
            ui->tableWidget_Mit->setItem(ui->tableWidget_Mit->rowCount() - 1, 1,
                                               new QTableWidgetItem(QString::number(tempSouvenirs.at(index).getSouvenirPrice())));
            ui->tableWidget_Mit->item(ui->tableWidget_Mit->rowCount() - 1, 0)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_Mit->item(ui->tableWidget_Mit->rowCount() - 1, 1)->setTextAlignment(Qt::AlignCenter);
        }
        break;
    case 4:
        ui->tableWidget_northwestern->setRowCount(0);
        ui->tableWidget_northwestern->setColumnCount(2);
        ui->tableWidget_northwestern->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenir"));
        ui->tableWidget_northwestern->setHorizontalHeaderItem(1, new QTableWidgetItem("Price"));
        ui->tableWidget_northwestern->verticalHeader()->hide();
        ui->tableWidget_northwestern->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        qDebug() << "LLLLLL " << tempSouvenirs.size();

        for(int index = 0; index < tempSouvenirs.size(); index++) {
            ui->tableWidget_northwestern->insertRow(ui->tableWidget_northwestern->rowCount());
            ui->tableWidget_northwestern->setItem(ui->tableWidget_northwestern->rowCount() - 1, 0,
                                               new QTableWidgetItem(tempSouvenirs.at(index).getSouvenirName()));
            ui->tableWidget_northwestern->setItem(ui->tableWidget_northwestern->rowCount() - 1, 1,
                                               new QTableWidgetItem(QString::number(tempSouvenirs.at(index).getSouvenirPrice())));
            ui->tableWidget_northwestern->item(ui->tableWidget_northwestern->rowCount() - 1, 0)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_northwestern->item(ui->tableWidget_northwestern->rowCount() - 1, 1)->setTextAlignment(Qt::AlignCenter);
        }
        break;
    case 5:
        ui->tableWidget_ohio->setRowCount(0);
        ui->tableWidget_ohio->setColumnCount(2);
        ui->tableWidget_ohio->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenir"));
        ui->tableWidget_ohio->setHorizontalHeaderItem(1, new QTableWidgetItem("Price"));
        ui->tableWidget_ohio->verticalHeader()->hide();
        ui->tableWidget_ohio->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        qDebug() << "LLLLLL " << tempSouvenirs.size();

        for(int index = 0; index < tempSouvenirs.size(); index++) {
            ui->tableWidget_ohio->insertRow(ui->tableWidget_ohio->rowCount());
            ui->tableWidget_ohio->setItem(ui->tableWidget_ohio->rowCount() - 1, 0,
                                               new QTableWidgetItem(tempSouvenirs.at(index).getSouvenirName()));
            ui->tableWidget_ohio->setItem(ui->tableWidget_ohio->rowCount() - 1, 1,
                                               new QTableWidgetItem(QString::number(tempSouvenirs.at(index).getSouvenirPrice())));
            ui->tableWidget_ohio->item(ui->tableWidget_ohio->rowCount() - 1, 0)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_ohio->item(ui->tableWidget_ohio->rowCount() - 1, 1)->setTextAlignment(Qt::AlignCenter);
        }
        break;
    case 6:
        ui->tableWidget_saddleback->setRowCount(0);
        ui->tableWidget_saddleback->setColumnCount(2);
        ui->tableWidget_saddleback->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenir"));
        ui->tableWidget_saddleback->setHorizontalHeaderItem(1, new QTableWidgetItem("Price"));
        ui->tableWidget_saddleback->verticalHeader()->hide();
        ui->tableWidget_saddleback->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        qDebug() << "LLLLLL " << tempSouvenirs.size();

        for(int index = 0; index < tempSouvenirs.size(); index++) {
            ui->tableWidget_saddleback->insertRow(ui->tableWidget_saddleback->rowCount());
            ui->tableWidget_saddleback->setItem(ui->tableWidget_saddleback->rowCount() - 1, 0,
                                               new QTableWidgetItem(tempSouvenirs.at(index).getSouvenirName()));
            ui->tableWidget_saddleback->setItem(ui->tableWidget_saddleback->rowCount() - 1, 1,
                                               new QTableWidgetItem(QString::number(tempSouvenirs.at(index).getSouvenirPrice())));
            ui->tableWidget_saddleback->item(ui->tableWidget_saddleback->rowCount() - 1, 0)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_saddleback->item(ui->tableWidget_saddleback->rowCount() - 1, 1)->setTextAlignment(Qt::AlignCenter);
        }
        break;
    case 7:
        ui->tableWidget_csuf->setRowCount(0);
        ui->tableWidget_csuf->setColumnCount(2);
        ui->tableWidget_csuf->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenir"));
        ui->tableWidget_csuf->setHorizontalHeaderItem(1, new QTableWidgetItem("Price"));
        ui->tableWidget_csuf->verticalHeader()->hide();
        ui->tableWidget_csuf->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        qDebug() << "LLLLLL " << tempSouvenirs.size();

        for(int index = 0; index < tempSouvenirs.size(); index++) {
            ui->tableWidget_csuf->insertRow(ui->tableWidget_csuf->rowCount());
            ui->tableWidget_csuf->setItem(ui->tableWidget_csuf->rowCount() - 1, 0,
                                               new QTableWidgetItem(tempSouvenirs.at(index).getSouvenirName()));
            ui->tableWidget_csuf->setItem(ui->tableWidget_csuf->rowCount() - 1, 1,
                                               new QTableWidgetItem(QString::number(tempSouvenirs.at(index).getSouvenirPrice())));
            ui->tableWidget_csuf->item(ui->tableWidget_csuf->rowCount() - 1, 0)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_csuf->item(ui->tableWidget_csuf->rowCount() - 1, 1)->setTextAlignment(Qt::AlignCenter);
        }
        break;
    case 8:
        ui->tableWidget_michigan->setRowCount(0);
        ui->tableWidget_michigan->setColumnCount(2);
        ui->tableWidget_michigan->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenir"));
        ui->tableWidget_michigan->setHorizontalHeaderItem(1, new QTableWidgetItem("Price"));
        ui->tableWidget_michigan->verticalHeader()->hide();
        ui->tableWidget_michigan->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        qDebug() << "LLLLLL " << tempSouvenirs.size();

        for(int index = 0; index < tempSouvenirs.size(); index++) {
            ui->tableWidget_michigan->insertRow(ui->tableWidget_michigan->rowCount());
            ui->tableWidget_michigan->setItem(ui->tableWidget_michigan->rowCount() - 1, 0,
                                               new QTableWidgetItem(tempSouvenirs.at(index).getSouvenirName()));
            ui->tableWidget_michigan->setItem(ui->tableWidget_michigan->rowCount() - 1, 1,
                                               new QTableWidgetItem(QString::number(tempSouvenirs.at(index).getSouvenirPrice())));
            ui->tableWidget_michigan->item(ui->tableWidget_michigan->rowCount() - 1, 0)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_michigan->item(ui->tableWidget_michigan->rowCount() - 1, 1)->setTextAlignment(Qt::AlignCenter);
        }
        break;
    case 9:
        ui->tableWidget_ucla->setRowCount(0);
        ui->tableWidget_ucla->setColumnCount(2);
        ui->tableWidget_ucla->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenir"));
        ui->tableWidget_ucla->setHorizontalHeaderItem(1, new QTableWidgetItem("Price"));
        ui->tableWidget_ucla->verticalHeader()->hide();
        ui->tableWidget_ucla->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        qDebug() << "LLLLLL " << tempSouvenirs.size();

        for(int index = 0; index < tempSouvenirs.size(); index++) {
            ui->tableWidget_ucla->insertRow(ui->tableWidget_ucla->rowCount());
            ui->tableWidget_ucla->setItem(ui->tableWidget_ucla->rowCount() - 1, 0,
                                               new QTableWidgetItem(tempSouvenirs.at(index).getSouvenirName()));
            ui->tableWidget_ucla->setItem(ui->tableWidget_ucla->rowCount() - 1, 1,
                                               new QTableWidgetItem(QString::number(tempSouvenirs.at(index).getSouvenirPrice())));
            ui->tableWidget_ucla->item(ui->tableWidget_ucla->rowCount() - 1, 0)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_ucla->item(ui->tableWidget_ucla->rowCount() - 1, 1)->setTextAlignment(Qt::AlignCenter);
        }
        break;
    case 10:
        ui->tableWidget_oregon->setRowCount(0);
        ui->tableWidget_oregon->setColumnCount(2);
        ui->tableWidget_oregon->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenir"));
        ui->tableWidget_oregon->setHorizontalHeaderItem(1, new QTableWidgetItem("Price"));
        ui->tableWidget_oregon->verticalHeader()->hide();
        ui->tableWidget_oregon->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        qDebug() << "LLLLLL " << tempSouvenirs.size();

        for(int index = 0; index < tempSouvenirs.size(); index++) {
            ui->tableWidget_oregon->insertRow(ui->tableWidget_oregon->rowCount());
            ui->tableWidget_oregon->setItem(ui->tableWidget_oregon->rowCount() - 1, 0,
                                               new QTableWidgetItem(tempSouvenirs.at(index).getSouvenirName()));
            ui->tableWidget_oregon->setItem(ui->tableWidget_oregon->rowCount() - 1, 1,
                                               new QTableWidgetItem(QString::number(tempSouvenirs.at(index).getSouvenirPrice())));
            ui->tableWidget_oregon->item(ui->tableWidget_oregon->rowCount() - 1, 0)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_oregon->item(ui->tableWidget_oregon->rowCount() - 1, 1)->setTextAlignment(Qt::AlignCenter);
        }
        break;
    case 11:
        ui->tableWidget_texas->setRowCount(0);
        ui->tableWidget_texas->setColumnCount(2);
        ui->tableWidget_texas->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenir"));
        ui->tableWidget_texas->setHorizontalHeaderItem(1, new QTableWidgetItem("Price"));
        ui->tableWidget_texas->verticalHeader()->hide();
        ui->tableWidget_texas->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        qDebug() << "LLLLLL " << tempSouvenirs.size();

        for(int index = 0; index < tempSouvenirs.size(); index++) {
            ui->tableWidget_texas->insertRow(ui->tableWidget_texas->rowCount());
            ui->tableWidget_texas->setItem(ui->tableWidget_texas->rowCount() - 1, 0,
                                               new QTableWidgetItem(tempSouvenirs.at(index).getSouvenirName()));
            ui->tableWidget_texas->setItem(ui->tableWidget_texas->rowCount() - 1, 1,
                                               new QTableWidgetItem(QString::number(tempSouvenirs.at(index).getSouvenirPrice())));
            ui->tableWidget_texas->item(ui->tableWidget_texas->rowCount() - 1, 0)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_texas->item(ui->tableWidget_texas->rowCount() - 1, 1)->setTextAlignment(Qt::AlignCenter);
        }
        break;
    case 12:
        ui->tableWidget_Pacific->setRowCount(0);
        ui->tableWidget_Pacific->setColumnCount(2);
        ui->tableWidget_Pacific->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenir"));
        ui->tableWidget_Pacific->setHorizontalHeaderItem(1, new QTableWidgetItem("Price"));
        ui->tableWidget_Pacific->verticalHeader()->hide();
        ui->tableWidget_Pacific->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        qDebug() << "LLLLLL " << tempSouvenirs.size();

        for(int index = 0; index < tempSouvenirs.size(); index++) {
            ui->tableWidget_Pacific->insertRow(ui->tableWidget_Pacific->rowCount());
            ui->tableWidget_Pacific->setItem(ui->tableWidget_Pacific->rowCount() - 1, 0,
                                               new QTableWidgetItem(tempSouvenirs.at(index).getSouvenirName()));
            ui->tableWidget_Pacific->setItem(ui->tableWidget_Pacific->rowCount() - 1, 1,
                                               new QTableWidgetItem(QString::number(tempSouvenirs.at(index).getSouvenirPrice())));
            ui->tableWidget_Pacific->item(ui->tableWidget_Pacific->rowCount() - 1, 0)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_Pacific->item(ui->tableWidget_Pacific->rowCount() - 1, 1)->setTextAlignment(Qt::AlignCenter);
        }
        break;
    case 13:
        ui->tableWidget_Wisconsin->setRowCount(0);
        ui->tableWidget_Wisconsin->setColumnCount(2);
        ui->tableWidget_Wisconsin->setHorizontalHeaderItem(0, new QTableWidgetItem("Souvenir"));
        ui->tableWidget_Wisconsin->setHorizontalHeaderItem(1, new QTableWidgetItem("Price"));
        ui->tableWidget_Wisconsin->verticalHeader()->hide();
        ui->tableWidget_Wisconsin->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        qDebug() << "LLLLLL " << tempSouvenirs.size();

        for(int index = 0; index < tempSouvenirs.size(); index++) {
            ui->tableWidget_Wisconsin->insertRow(ui->tableWidget_Wisconsin->rowCount());
            ui->tableWidget_Wisconsin->setItem(ui->tableWidget_Wisconsin->rowCount() - 1, 0,
                                               new QTableWidgetItem(tempSouvenirs.at(index).getSouvenirName()));
            ui->tableWidget_Wisconsin->setItem(ui->tableWidget_Wisconsin->rowCount() - 1, 1,
                                               new QTableWidgetItem(QString::number(tempSouvenirs.at(index).getSouvenirPrice())));
            ui->tableWidget_Wisconsin->item(ui->tableWidget_Wisconsin->rowCount() - 1, 0)->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_Wisconsin->item(ui->tableWidget_Wisconsin->rowCount() - 1, 1)->setTextAlignment(Qt::AlignCenter);
        }
        break;
    }
}
void tourpurchase::on_pushButton_clicked()
{
    tourCampuses *t = new tourCampuses;

    t->show();
    this->close();
}

void tourpurchase::on_pushButton_selectPurchase_asu_clicked()
{
    QModelIndex current = ui->tableWidget_arizona->currentIndex();
    prices.append(ui->tableWidget_arizona->item(current.row(),1)->text().toDouble());
    qDebug() << "count: " << souvenirCount;
    qDebug() << "$$$$$ " << prices.at(souvenirCount);

    total = total + prices.at(souvenirCount);
    souvenirCount += 1;
    ui->tableWidget_totalAsu->setRowCount(1);
    ui->tableWidget_totalAsu->setColumnCount(1);
    ui->tableWidget_totalAsu->setHorizontalHeaderItem(0, new QTableWidgetItem("Total"));
    ui->tableWidget_totalAsu->verticalHeader()->hide();
    ui->tableWidget_totalAsu->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tableWidget_totalAsu->setItem(0,0, new QTableWidgetItem(QString::number(total)));
}

void tourpurchase::on_pushButton_quantityAsu_clicked()
{}

void tourpurchase::on_next_3_clicked() //ARIZONA
{
    findPage(pageIndicator);
    displaySouvenirs(tempCount);
}

void tourpurchase::on_next_4_clicked() //UCI
{
    findPage(pageIndicator);
    displaySouvenirs(tempCount);
}

void tourpurchase::on_next_5_clicked() //MIT
{
    findPage(pageIndicator);
    displaySouvenirs(tempCount);
}

void tourpurchase::on_next_6_clicked() //NORTHWESTERN
{
    findPage(pageIndicator);
    displaySouvenirs(tempCount);
}

void tourpurchase::on_next_7_clicked() //OHIO
{
    findPage(pageIndicator);
    displaySouvenirs(tempCount);
}

void tourpurchase::on_next_8_clicked() //SADDLEBACK
{
    findPage(pageIndicator);
    displaySouvenirs(tempCount);
}

void tourpurchase::on_next_9_clicked() //FULLERTON
{
    findPage(pageIndicator);
    displaySouvenirs(tempCount);
}

void tourpurchase::on_next_10_clicked() //MICHIGAN
{
    findPage(pageIndicator);
    displaySouvenirs(tempCount);
}

void tourpurchase::on_next_11_clicked() //UCLA
{
    qDebug() << "////////////////: here: " << pageIndicator;
    findPage(pageIndicator);
    displaySouvenirs(tempCount);
}

void tourpurchase::on_next_12_clicked() //OREGON
{
    findPage(pageIndicator);
    displaySouvenirs(tempCount);
}

void tourpurchase::on_next_13_clicked() //TEXAS
{
    findPage(pageIndicator);
    displaySouvenirs(tempCount);
}

void tourpurchase::on_next_14_clicked() //PACIFIC
{
    findPage(pageIndicator);
    displaySouvenirs(tempCount);
}

void tourpurchase::on_next_15_clicked() //WISCONSIN
{
    findPage(pageIndicator);
    displaySouvenirs(tempCount);
}
