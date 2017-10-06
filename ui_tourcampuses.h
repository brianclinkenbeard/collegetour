/********************************************************************************
** Form generated from reading UI file 'tourcampuses.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOURCAMPUSES_H
#define UI_TOURCAMPUSES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tourCampuses
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *startingCampus_label;
    QTableWidget *distance_table;
    QPushButton *pushButton_startColleges;
    QTableWidget *endingCampus_table;
    QPushButton *endingCollege_pushButton;
    QTableWidget *startingCampus_table;
    QLabel *distance_label;
    QLabel *endingCampus_label;
    QLabel *label;
    QWidget *page_2;
    QTableWidget *trip_table;
    QLabel *trip_label;
    QPushButton *beginTrip_pushButton;
    QTableWidget *selectedVisitColleges_table;
    QTableWidget *collegeList_table;
    QPushButton *addColleges_button;
    QLabel *trip_label_3;
    QLabel *distance_label_2;
    QTableWidget *distance_table_2;
    QPushButton *deleteColleges_button;
    QPushButton *tripMode_pushButton;
    QPushButton *distanceMode_pushButton;
    QPushButton *back_to_main;
    QFrame *line;

    void setupUi(QDialog *tourCampuses)
    {
        if (tourCampuses->objectName().isEmpty())
            tourCampuses->setObjectName(QStringLiteral("tourCampuses"));
        tourCampuses->resize(1197, 760);
        tourCampuses->setStyleSheet(QLatin1String("tourCampuses {\n"
"	background-image: url(\"res/college.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
"\n"
"QPushButton {\n"
"	background-color: darkgray;\n"
"	color: black;\n"
"	border-radius: 100%;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	backgeound-color: gray;\n"
"	color: white;\n"
"}\n"
"\n"
"QTableWidget, QTextBrowser {\n"
"	background: transparent;\n"
"	font: 16px;\n"
"	color: black;\n"
"	font-weight: bold;\n"
"	border: 2px solid gray;\n"
"}\n"
"\n"
"QLabel {\n"
"	color: black;\n"
"}\n"
""));
        stackedWidget = new QStackedWidget(tourCampuses);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(-1, 60, 1191, 701));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        startingCampus_label = new QLabel(page);
        startingCampus_label->setObjectName(QStringLiteral("startingCampus_label"));
        startingCampus_label->setGeometry(QRect(30, 80, 201, 31));
        QFont font;
        font.setFamily(QStringLiteral("Monotype Corsiva"));
        font.setPointSize(12);
        font.setItalic(true);
        startingCampus_label->setFont(font);
        startingCampus_label->setStyleSheet(QLatin1String("label {\n"
"	color: white;\n"
"}"));
        distance_table = new QTableWidget(page);
        distance_table->setObjectName(QStringLiteral("distance_table"));
        distance_table->setGeometry(QRect(810, 630, 371, 61));
        pushButton_startColleges = new QPushButton(page);
        pushButton_startColleges->setObjectName(QStringLiteral("pushButton_startColleges"));
        pushButton_startColleges->setGeometry(QRect(70, 580, 271, 28));
        QFont font1;
        font1.setFamily(QStringLiteral("MV Boli"));
        font1.setPointSize(10);
        pushButton_startColleges->setFont(font1);
        endingCampus_table = new QTableWidget(page);
        endingCampus_table->setObjectName(QStringLiteral("endingCampus_table"));
        endingCampus_table->setGeometry(QRect(420, 130, 371, 441));
        endingCollege_pushButton = new QPushButton(page);
        endingCollege_pushButton->setObjectName(QStringLiteral("endingCollege_pushButton"));
        endingCollege_pushButton->setGeometry(QRect(470, 580, 271, 28));
        endingCollege_pushButton->setFont(font1);
        endingCollege_pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 150px;\n"
"}"));
        startingCampus_table = new QTableWidget(page);
        startingCampus_table->setObjectName(QStringLiteral("startingCampus_table"));
        startingCampus_table->setGeometry(QRect(30, 130, 371, 441));
        distance_label = new QLabel(page);
        distance_label->setObjectName(QStringLiteral("distance_label"));
        distance_label->setGeometry(QRect(950, 600, 91, 21));
        distance_label->setFont(font1);
        distance_label->setStyleSheet(QLatin1String("label_4 {\n"
"	font-color: white;\n"
"}"));
        endingCampus_label = new QLabel(page);
        endingCampus_label->setObjectName(QStringLiteral("endingCampus_label"));
        endingCampus_label->setGeometry(QRect(420, 90, 201, 31));
        endingCampus_label->setFont(font);
        endingCampus_label->setStyleSheet(QLatin1String("label_2 {\n"
"	font-color: white;\n"
"}"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 801, 61));
        label->setStyleSheet(QLatin1String("QLabel {\n"
"	font-size: 20px;\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"	color: gray;\n"
"}"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        trip_table = new QTableWidget(page_2);
        trip_table->setObjectName(QStringLiteral("trip_table"));
        trip_table->setGeometry(QRect(850, 50, 331, 631));
        trip_table->setStyleSheet(QLatin1String("tableWidget_3 {\n"
"	font-color: white;\n"
"}"));
        trip_label = new QLabel(page_2);
        trip_label->setObjectName(QStringLiteral("trip_label"));
        trip_label->setGeometry(QRect(850, 20, 131, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("MV Boli"));
        font2.setPointSize(11);
        trip_label->setFont(font2);
        trip_label->setStyleSheet(QLatin1String("label_3 {\n"
"	color: white;\n"
"}"));
        beginTrip_pushButton = new QPushButton(page_2);
        beginTrip_pushButton->setObjectName(QStringLiteral("beginTrip_pushButton"));
        beginTrip_pushButton->setGeometry(QRect(320, 510, 221, 51));
        beginTrip_pushButton->setFont(font1);
        beginTrip_pushButton->setStyleSheet(QStringLiteral(""));
        selectedVisitColleges_table = new QTableWidget(page_2);
        selectedVisitColleges_table->setObjectName(QStringLiteral("selectedVisitColleges_table"));
        selectedVisitColleges_table->setGeometry(QRect(470, 50, 361, 441));
        collegeList_table = new QTableWidget(page_2);
        collegeList_table->setObjectName(QStringLiteral("collegeList_table"));
        collegeList_table->setGeometry(QRect(20, 50, 371, 441));
        addColleges_button = new QPushButton(page_2);
        addColleges_button->setObjectName(QStringLiteral("addColleges_button"));
        addColleges_button->setGeometry(QRect(410, 220, 41, 41));
        trip_label_3 = new QLabel(page_2);
        trip_label_3->setObjectName(QStringLiteral("trip_label_3"));
        trip_label_3->setGeometry(QRect(20, 10, 501, 31));
        trip_label_3->setFont(font2);
        trip_label_3->setStyleSheet(QLatin1String("label_3 {\n"
"	color: white;\n"
"}"));
        distance_label_2 = new QLabel(page_2);
        distance_label_2->setObjectName(QStringLiteral("distance_label_2"));
        distance_label_2->setGeometry(QRect(20, 640, 221, 21));
        distance_label_2->setFont(font1);
        distance_label_2->setStyleSheet(QLatin1String("label_4 {\n"
"	font-color: white;\n"
"}"));
        distance_table_2 = new QTableWidget(page_2);
        distance_table_2->setObjectName(QStringLiteral("distance_table_2"));
        distance_table_2->setGeometry(QRect(250, 620, 371, 61));
        deleteColleges_button = new QPushButton(page_2);
        deleteColleges_button->setObjectName(QStringLiteral("deleteColleges_button"));
        deleteColleges_button->setGeometry(QRect(410, 300, 41, 41));
        stackedWidget->addWidget(page_2);
        tripMode_pushButton = new QPushButton(tourCampuses);
        tripMode_pushButton->setObjectName(QStringLiteral("tripMode_pushButton"));
        tripMode_pushButton->setGeometry(QRect(1090, 10, 93, 28));
        tripMode_pushButton->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"	background-color: darkblue;\n"
"	color: white;\n"
"}"));
        distanceMode_pushButton = new QPushButton(tourCampuses);
        distanceMode_pushButton->setObjectName(QStringLiteral("distanceMode_pushButton"));
        distanceMode_pushButton->setGeometry(QRect(980, 10, 93, 28));
        distanceMode_pushButton->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"	background-color: darkblue;\n"
"	color: white;\n"
"}"));
        back_to_main = new QPushButton(tourCampuses);
        back_to_main->setObjectName(QStringLiteral("back_to_main"));
        back_to_main->setGeometry(QRect(20, 10, 93, 28));
        line = new QFrame(tourCampuses);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 40, 1171, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(tourCampuses);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(tourCampuses);
    } // setupUi

    void retranslateUi(QDialog *tourCampuses)
    {
        tourCampuses->setWindowTitle(QApplication::translate("tourCampuses", "Dialog", 0));
        startingCampus_label->setText(QApplication::translate("tourCampuses", "Starting Campus", 0));
        pushButton_startColleges->setText(QApplication::translate("tourCampuses", "Select Starting Campus", 0));
        endingCollege_pushButton->setText(QApplication::translate("tourCampuses", "Select Ending Campus", 0));
        distance_label->setText(QApplication::translate("tourCampuses", "DISTANCE", 0));
        endingCampus_label->setText(QApplication::translate("tourCampuses", "Ending Campuse", 0));
        label->setText(QApplication::translate("tourCampuses", "Select the Starting Point and the Ending Point for the distance to show", 0));
        trip_label->setText(QApplication::translate("tourCampuses", "TRIP PLAN", 0));
        beginTrip_pushButton->setText(QApplication::translate("tourCampuses", "BEGIN TRIP", 0));
        addColleges_button->setText(QApplication::translate("tourCampuses", "ADD", 0));
        trip_label_3->setText(QApplication::translate("tourCampuses", "Add the Colleges desired to visit and Start your Trip!", 0));
        distance_label_2->setText(QApplication::translate("tourCampuses", "Total Distance Traveled", 0));
        deleteColleges_button->setText(QApplication::translate("tourCampuses", "Delete", 0));
        tripMode_pushButton->setText(QApplication::translate("tourCampuses", "Trip Mode", 0));
        distanceMode_pushButton->setText(QApplication::translate("tourCampuses", "Distance Mode", 0));
        back_to_main->setText(QApplication::translate("tourCampuses", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class tourCampuses: public Ui_tourCampuses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOURCAMPUSES_H
