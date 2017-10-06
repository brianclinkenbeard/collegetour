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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_tourCampuses
{
public:
    QPushButton *back_to_main;
    QTableWidget *endingCampus_table;
    QTableWidget *startingCampus_table;
    QTableWidget *tableWidget_3;
    QFrame *line;
    QTableWidget *distance_table;
    QFrame *line_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_startColleges;
    QPushButton *pushButton_3;
    QPushButton *endingCollege_pushButton;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *tourCampuses)
    {
        if (tourCampuses->objectName().isEmpty())
            tourCampuses->setObjectName(QStringLiteral("tourCampuses"));
        tourCampuses->resize(1109, 776);
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
"	background-color: gray;	\n"
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
        back_to_main = new QPushButton(tourCampuses);
        back_to_main->setObjectName(QStringLiteral("back_to_main"));
        back_to_main->setGeometry(QRect(20, 10, 93, 28));
        endingCampus_table = new QTableWidget(tourCampuses);
        endingCampus_table->setObjectName(QStringLiteral("endingCampus_table"));
        endingCampus_table->setGeometry(QRect(360, 310, 311, 341));
        startingCampus_table = new QTableWidget(tourCampuses);
        startingCampus_table->setObjectName(QStringLiteral("startingCampus_table"));
        startingCampus_table->setGeometry(QRect(20, 310, 321, 341));
        tableWidget_3 = new QTableWidget(tourCampuses);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(710, 230, 381, 531));
        tableWidget_3->setStyleSheet(QLatin1String("tableWidget_3 {\n"
"	font-color: white;\n"
"}"));
        line = new QFrame(tourCampuses);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 40, 1161, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        distance_table = new QTableWidget(tourCampuses);
        distance_table->setObjectName(QStringLiteral("distance_table"));
        distance_table->setGeometry(QRect(710, 100, 381, 61));
        line_2 = new QFrame(tourCampuses);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(680, 60, 20, 701));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label = new QLabel(tourCampuses);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 270, 201, 31));
        QFont font;
        font.setFamily(QStringLiteral("Monotype Corsiva"));
        font.setPointSize(12);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("label {\n"
"	color: white;\n"
"}"));
        label_2 = new QLabel(tourCampuses);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(360, 270, 201, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("label_2 {\n"
"	font-color: white;\n"
"}"));
        pushButton_startColleges = new QPushButton(tourCampuses);
        pushButton_startColleges->setObjectName(QStringLiteral("pushButton_startColleges"));
        pushButton_startColleges->setGeometry(QRect(40, 660, 271, 28));
        QFont font1;
        font1.setFamily(QStringLiteral("MV Boli"));
        font1.setPointSize(10);
        pushButton_startColleges->setFont(font1);
        pushButton_3 = new QPushButton(tourCampuses);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 710, 221, 51));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QStringLiteral(""));
        endingCollege_pushButton = new QPushButton(tourCampuses);
        endingCollege_pushButton->setObjectName(QStringLiteral("endingCollege_pushButton"));
        endingCollege_pushButton->setGeometry(QRect(380, 660, 271, 28));
        endingCollege_pushButton->setFont(font1);
        endingCollege_pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 150px;\n"
"}"));
        textBrowser = new QTextBrowser(tourCampuses);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 60, 561, 191));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        textBrowser->setFont(font2);
        textBrowser->setFrameShape(QFrame::Box);
        textBrowser->setFrameShadow(QFrame::Plain);
        textBrowser->setLineWidth(5);
        label_3 = new QLabel(tourCampuses);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(710, 190, 131, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("MV Boli"));
        font3.setPointSize(11);
        label_3->setFont(font3);
        label_3->setStyleSheet(QLatin1String("label_3 {\n"
"	color: white;\n"
"}"));
        label_4 = new QLabel(tourCampuses);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(710, 60, 91, 21));
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String("label_4 {\n"
"	font-color: white;\n"
"}"));

        retranslateUi(tourCampuses);

        QMetaObject::connectSlotsByName(tourCampuses);
    } // setupUi

    void retranslateUi(QDialog *tourCampuses)
    {
        tourCampuses->setWindowTitle(QApplication::translate("tourCampuses", "Dialog", 0));
        back_to_main->setText(QApplication::translate("tourCampuses", "Back", 0));
        label->setText(QApplication::translate("tourCampuses", "Starting Campus", 0));
        label_2->setText(QApplication::translate("tourCampuses", "Ending Campuse", 0));
        pushButton_startColleges->setText(QApplication::translate("tourCampuses", "Select Starting Campus", 0));
        pushButton_3->setText(QApplication::translate("tourCampuses", "BEGIN TRIP", 0));
        endingCollege_pushButton->setText(QApplication::translate("tourCampuses", "Select Ending Campus", 0));
        textBrowser->setHtml(QApplication::translate("tourCampuses", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MV Boli'; font-size:16px; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:400;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'mv boli'; font-size:12pt; font-weight:400;\">To Find the Distance between 2 campuses select the starting campus and the ending campus. If the user desires to plan a trip from any campus, one the campuses in the Starting Campus must be selected and then the Begin trip button should be selected</span></p></body></"
                        "html>", 0));
        label_3->setText(QApplication::translate("tourCampuses", "TRIP PLAN", 0));
        label_4->setText(QApplication::translate("tourCampuses", "DISTANCE", 0));
    } // retranslateUi

};

namespace Ui {
    class tourCampuses: public Ui_tourCampuses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOURCAMPUSES_H
