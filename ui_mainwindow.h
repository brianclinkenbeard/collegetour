/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *login_button;
    QStackedWidget *stackedWidget;
    QWidget *page_10;
    QFrame *michigan_flag;
    QWidget *page;
    QPushButton *nextPage_3;
    QGraphicsView *asu_campus;
    QGraphicsView *asu_map;
    QLabel *asu_title;
    QLabel *asu_address;
    QPushButton *backPage_1;
    QWidget *page_3;
    QPushButton *backPage_2;
    QPushButton *nextPage_4;
    QGraphicsView *uci_map;
    QGraphicsView *uci_campus;
    QLabel *uci_title;
    QLabel *uci_address;
    QWidget *page_4;
    QPushButton *nextPage_5;
    QPushButton *backPage_3;
    QGraphicsView *mit_map;
    QGraphicsView *mit_campus;
    QLabel *mit_title;
    QLabel *mit_address;
    QWidget *page_2;
    QLabel *northwestern_title;
    QPushButton *nextPage_6;
    QPushButton *backPage_4;
    QGraphicsView *northwestern_campus;
    QGraphicsView *northwestern_map;
    QLabel *northwestern_address;
    QWidget *page_6;
    QLabel *ohio_title;
    QLabel *ohio_address;
    QGraphicsView *ohio_campus;
    QPushButton *backPage_5;
    QPushButton *nextPage_7;
    QGraphicsView *ohio_map;
    QWidget *page_7;
    QPushButton *backPage_6;
    QGraphicsView *saddleback_map;
    QLabel *saddleback_address;
    QPushButton *nextPage_8;
    QGraphicsView *saddleback_campus;
    QLabel *saddleback_title;
    QWidget *page_8;
    QGraphicsView *fullerton_campus;
    QPushButton *backPage_7;
    QLabel *fullerton_address;
    QLabel *fullerton_title;
    QGraphicsView *fullerton_map;
    QPushButton *nextPage_9;
    QWidget *page_9;
    QPushButton *nextPage_10;
    QGraphicsView *michigan_map;
    QPushButton *backPage_8;
    QLabel *michigan_address;
    QGraphicsView *michigan_campus;
    QLabel *michigan_title;
    QWidget *page_11;
    QPushButton *backPage_9;
    QGraphicsView *ucla_map;
    QPushButton *nextPage_11;
    QLabel *ucla_title;
    QLabel *ucla_address;
    QGraphicsView *ucla_campus;
    QWidget *page_12;
    QGraphicsView *oregon_campus;
    QPushButton *backPage_10;
    QLabel *oregon_title;
    QGraphicsView *oregon_map;
    QLabel *oregon_address;
    QPushButton *nextPage_12;
    QWidget *page_13;
    QGraphicsView *texas_map;
    QLabel *texas_address;
    QLabel *texas_title;
    QPushButton *nextPage_13;
    QGraphicsView *texas_campus;
    QPushButton *backPage_11;
    QWidget *page_14;
    QLabel *pacific_address;
    QPushButton *nextPage_14;
    QPushButton *backPage_12;
    QGraphicsView *pacific_map;
    QLabel *pacific_title;
    QGraphicsView *pacific_campus;
    QWidget *page_15;
    QPushButton *backPage_13;
    QLabel *wisconsin_title;
    QLabel *wisconsin_address;
    QPushButton *nextPage_15;
    QGraphicsView *wisconsin_map;
    QGraphicsView *wisconsin_campus;
    QWidget *page_5;
    QTableWidget *display_college_table;
    QPushButton *purchase_button;
    QPushButton *help_button;
    QLineEdit *search_edit;
    QLabel *display_label;
    QComboBox *display_comboBox;
    QPushButton *tour_button;
    QLabel *search_label;
    QPushButton *backPage_14;
    QPushButton *colleges_table_button;
    QPushButton *visitCampuses_button;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1221, 640);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow {\n"
"	background-image: url(\"res/background.png\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        login_button = new QPushButton(centralWidget);
        login_button->setObjectName(QStringLiteral("login_button"));
        login_button->setGeometry(QRect(1014, 12, 171, 31));
        login_button->setStyleSheet(QLatin1String("QPushButton {\n"
"	background: gray;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background: black;\n"
"	color: pink;\n"
"}"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 50, 1191, 561));
        stackedWidget->setStyleSheet(QLatin1String("QStackedWidget {\n"
"	background-image: url(\"res/background.png\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
"\n"
"QLabel {\n"
"	font-family: helvetica;\n"
"	font-size: 30px;\n"
"	color: white;\n"
"}\n"
""));
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        michigan_flag = new QFrame(page_10);
        michigan_flag->setObjectName(QStringLiteral("michigan_flag"));
        michigan_flag->setGeometry(QRect(-20, -60, 1231, 651));
        michigan_flag->setStyleSheet(QLatin1String("QFrame {\n"
"	background-image: url(\"res/main_map.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position:  center;\n"
" \n"
"}\n"
""));
        michigan_flag->setFrameShape(QFrame::StyledPanel);
        michigan_flag->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(page_10);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        nextPage_3 = new QPushButton(page);
        nextPage_3->setObjectName(QStringLiteral("nextPage_3"));
        nextPage_3->setGeometry(QRect(1090, 240, 81, 71));
        nextPage_3->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/next-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        asu_campus = new QGraphicsView(page);
        asu_campus->setObjectName(QStringLiteral("asu_campus"));
        asu_campus->setGeometry(QRect(100, 60, 481, 411));
        asu_campus->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/asu.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        asu_map = new QGraphicsView(page);
        asu_map->setObjectName(QStringLiteral("asu_map"));
        asu_map->setGeometry(QRect(600, 60, 471, 411));
        asu_map->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/asu_map.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        asu_title = new QLabel(page);
        asu_title->setObjectName(QStringLiteral("asu_title"));
        asu_title->setGeometry(QRect(360, -10, 421, 61));
        asu_address = new QLabel(page);
        asu_address->setObjectName(QStringLiteral("asu_address"));
        asu_address->setGeometry(QRect(180, 500, 771, 31));
        asu_address->setStyleSheet(QLatin1String("QLabel {\n"
"	color: white;\n"
"	font-size: 20px;\n"
"}"));
        backPage_1 = new QPushButton(page);
        backPage_1->setObjectName(QStringLiteral("backPage_1"));
        backPage_1->setGeometry(QRect(0, 240, 81, 71));
        backPage_1->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/back-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        backPage_2 = new QPushButton(page_3);
        backPage_2->setObjectName(QStringLiteral("backPage_2"));
        backPage_2->setGeometry(QRect(0, 240, 81, 71));
        backPage_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/back-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        nextPage_4 = new QPushButton(page_3);
        nextPage_4->setObjectName(QStringLiteral("nextPage_4"));
        nextPage_4->setGeometry(QRect(1100, 240, 81, 71));
        nextPage_4->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/next-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        uci_map = new QGraphicsView(page_3);
        uci_map->setObjectName(QStringLiteral("uci_map"));
        uci_map->setGeometry(QRect(620, 70, 461, 411));
        uci_map->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/uci_map.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        uci_campus = new QGraphicsView(page_3);
        uci_campus->setObjectName(QStringLiteral("uci_campus"));
        uci_campus->setGeometry(QRect(100, 70, 501, 411));
        uci_campus->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/uci.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        uci_title = new QLabel(page_3);
        uci_title->setObjectName(QStringLiteral("uci_title"));
        uci_title->setGeometry(QRect(360, -10, 491, 61));
        uci_address = new QLabel(page_3);
        uci_address->setObjectName(QStringLiteral("uci_address"));
        uci_address->setGeometry(QRect(260, 510, 771, 31));
        uci_address->setStyleSheet(QLatin1String("QLabel {\n"
"	color: white;\n"
"	font-size: 20px;\n"
"}"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        nextPage_5 = new QPushButton(page_4);
        nextPage_5->setObjectName(QStringLiteral("nextPage_5"));
        nextPage_5->setGeometry(QRect(1100, 240, 81, 71));
        nextPage_5->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/next-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        backPage_3 = new QPushButton(page_4);
        backPage_3->setObjectName(QStringLiteral("backPage_3"));
        backPage_3->setGeometry(QRect(0, 240, 81, 71));
        backPage_3->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/back-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        mit_map = new QGraphicsView(page_4);
        mit_map->setObjectName(QStringLiteral("mit_map"));
        mit_map->setGeometry(QRect(620, 70, 461, 411));
        mit_map->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/mit_map.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        mit_campus = new QGraphicsView(page_4);
        mit_campus->setObjectName(QStringLiteral("mit_campus"));
        mit_campus->setGeometry(QRect(100, 70, 501, 411));
        mit_campus->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/mit.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        mit_title = new QLabel(page_4);
        mit_title->setObjectName(QStringLiteral("mit_title"));
        mit_title->setGeometry(QRect(310, -10, 621, 61));
        mit_address = new QLabel(page_4);
        mit_address->setObjectName(QStringLiteral("mit_address"));
        mit_address->setGeometry(QRect(110, 510, 881, 31));
        mit_address->setStyleSheet(QLatin1String("QLabel {\n"
"	color: white;\n"
"	font-size: 20px;\n"
"}"));
        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        northwestern_title = new QLabel(page_2);
        northwestern_title->setObjectName(QStringLiteral("northwestern_title"));
        northwestern_title->setGeometry(QRect(530, -10, 221, 61));
        nextPage_6 = new QPushButton(page_2);
        nextPage_6->setObjectName(QStringLiteral("nextPage_6"));
        nextPage_6->setGeometry(QRect(1100, 240, 81, 71));
        nextPage_6->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/next-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        backPage_4 = new QPushButton(page_2);
        backPage_4->setObjectName(QStringLiteral("backPage_4"));
        backPage_4->setGeometry(QRect(0, 240, 81, 71));
        backPage_4->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/back-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        northwestern_campus = new QGraphicsView(page_2);
        northwestern_campus->setObjectName(QStringLiteral("northwestern_campus"));
        northwestern_campus->setGeometry(QRect(100, 70, 501, 411));
        northwestern_campus->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/northwestern.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        northwestern_map = new QGraphicsView(page_2);
        northwestern_map->setObjectName(QStringLiteral("northwestern_map"));
        northwestern_map->setGeometry(QRect(620, 70, 461, 411));
        northwestern_map->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/northwestern_map.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        northwestern_address = new QLabel(page_2);
        northwestern_address->setObjectName(QStringLiteral("northwestern_address"));
        northwestern_address->setGeometry(QRect(220, 510, 881, 31));
        northwestern_address->setStyleSheet(QLatin1String("QLabel {\n"
"	color: white;\n"
"	font-size: 20px;\n"
"}"));
        stackedWidget->addWidget(page_2);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        ohio_title = new QLabel(page_6);
        ohio_title->setObjectName(QStringLiteral("ohio_title"));
        ohio_title->setGeometry(QRect(470, 11, 279, 36));
        ohio_address = new QLabel(page_6);
        ohio_address->setObjectName(QStringLiteral("ohio_address"));
        ohio_address->setGeometry(QRect(230, 510, 701, 24));
        ohio_address->setStyleSheet(QLatin1String("QLabel {\n"
"	color: white;\n"
"	font-size: 20px;\n"
"}"));
        ohio_campus = new QGraphicsView(page_6);
        ohio_campus->setObjectName(QStringLiteral("ohio_campus"));
        ohio_campus->setGeometry(QRect(100, 70, 501, 411));
        ohio_campus->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/ohio.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        backPage_5 = new QPushButton(page_6);
        backPage_5->setObjectName(QStringLiteral("backPage_5"));
        backPage_5->setGeometry(QRect(0, 240, 81, 71));
        backPage_5->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/back-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        nextPage_7 = new QPushButton(page_6);
        nextPage_7->setObjectName(QStringLiteral("nextPage_7"));
        nextPage_7->setGeometry(QRect(1100, 240, 81, 71));
        nextPage_7->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/next-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        ohio_map = new QGraphicsView(page_6);
        ohio_map->setObjectName(QStringLiteral("ohio_map"));
        ohio_map->setGeometry(QRect(620, 70, 461, 411));
        ohio_map->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/ohio_map.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        backPage_6 = new QPushButton(page_7);
        backPage_6->setObjectName(QStringLiteral("backPage_6"));
        backPage_6->setGeometry(QRect(0, 239, 81, 71));
        backPage_6->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/back-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        saddleback_map = new QGraphicsView(page_7);
        saddleback_map->setObjectName(QStringLiteral("saddleback_map"));
        saddleback_map->setGeometry(QRect(620, 69, 461, 411));
        saddleback_map->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/saddleback_map.png\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        saddleback_address = new QLabel(page_7);
        saddleback_address->setObjectName(QStringLiteral("saddleback_address"));
        saddleback_address->setGeometry(QRect(100, 500, 881, 24));
        saddleback_address->setStyleSheet(QLatin1String("QLabel {\n"
"	color: white;\n"
"	font-size: 20px;\n"
"}"));
        nextPage_8 = new QPushButton(page_7);
        nextPage_8->setObjectName(QStringLiteral("nextPage_8"));
        nextPage_8->setGeometry(QRect(1100, 239, 81, 71));
        nextPage_8->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/next-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        saddleback_campus = new QGraphicsView(page_7);
        saddleback_campus->setObjectName(QStringLiteral("saddleback_campus"));
        saddleback_campus->setGeometry(QRect(100, 69, 501, 411));
        saddleback_campus->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/saddleback.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        saddleback_title = new QLabel(page_7);
        saddleback_title->setObjectName(QStringLiteral("saddleback_title"));
        saddleback_title->setGeometry(QRect(470, 10, 279, 36));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        fullerton_campus = new QGraphicsView(page_8);
        fullerton_campus->setObjectName(QStringLiteral("fullerton_campus"));
        fullerton_campus->setGeometry(QRect(100, 70, 501, 410));
        fullerton_campus->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/fullerton.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        backPage_7 = new QPushButton(page_8);
        backPage_7->setObjectName(QStringLiteral("backPage_7"));
        backPage_7->setGeometry(QRect(0, 240, 81, 70));
        backPage_7->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/back-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        fullerton_address = new QLabel(page_8);
        fullerton_address->setObjectName(QStringLiteral("fullerton_address"));
        fullerton_address->setGeometry(QRect(100, 501, 881, 23));
        fullerton_address->setStyleSheet(QLatin1String("QLabel {\n"
"	color: white;\n"
"	font-size: 20px;\n"
"}"));
        fullerton_title = new QLabel(page_8);
        fullerton_title->setObjectName(QStringLiteral("fullerton_title"));
        fullerton_title->setGeometry(QRect(360, 11, 501, 35));
        fullerton_map = new QGraphicsView(page_8);
        fullerton_map->setObjectName(QStringLiteral("fullerton_map"));
        fullerton_map->setGeometry(QRect(620, 70, 461, 410));
        fullerton_map->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/fullerton_map.png\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        nextPage_9 = new QPushButton(page_8);
        nextPage_9->setObjectName(QStringLiteral("nextPage_9"));
        nextPage_9->setGeometry(QRect(1100, 240, 81, 70));
        nextPage_9->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/next-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        nextPage_10 = new QPushButton(page_9);
        nextPage_10->setObjectName(QStringLiteral("nextPage_10"));
        nextPage_10->setGeometry(QRect(1100, 239, 81, 70));
        nextPage_10->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/next-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        michigan_map = new QGraphicsView(page_9);
        michigan_map->setObjectName(QStringLiteral("michigan_map"));
        michigan_map->setGeometry(QRect(620, 69, 461, 410));
        michigan_map->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/michigan_map.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        backPage_8 = new QPushButton(page_9);
        backPage_8->setObjectName(QStringLiteral("backPage_8"));
        backPage_8->setGeometry(QRect(0, 239, 81, 70));
        backPage_8->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/back-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        michigan_address = new QLabel(page_9);
        michigan_address->setObjectName(QStringLiteral("michigan_address"));
        michigan_address->setGeometry(QRect(100, 500, 881, 23));
        michigan_address->setStyleSheet(QLatin1String("QLabel {\n"
"	color: white;\n"
"	font-size: 20px;\n"
"}"));
        michigan_campus = new QGraphicsView(page_9);
        michigan_campus->setObjectName(QStringLiteral("michigan_campus"));
        michigan_campus->setGeometry(QRect(100, 69, 501, 410));
        michigan_campus->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/michigan.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        michigan_title = new QLabel(page_9);
        michigan_title->setObjectName(QStringLiteral("michigan_title"));
        michigan_title->setGeometry(QRect(440, 10, 501, 35));
        stackedWidget->addWidget(page_9);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        backPage_9 = new QPushButton(page_11);
        backPage_9->setObjectName(QStringLiteral("backPage_9"));
        backPage_9->setGeometry(QRect(0, 240, 81, 70));
        backPage_9->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/back-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        ucla_map = new QGraphicsView(page_11);
        ucla_map->setObjectName(QStringLiteral("ucla_map"));
        ucla_map->setGeometry(QRect(620, 70, 461, 410));
        ucla_map->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/ucla_map.gif\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        nextPage_11 = new QPushButton(page_11);
        nextPage_11->setObjectName(QStringLiteral("nextPage_11"));
        nextPage_11->setGeometry(QRect(1100, 240, 81, 70));
        nextPage_11->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/next-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        ucla_title = new QLabel(page_11);
        ucla_title->setObjectName(QStringLiteral("ucla_title"));
        ucla_title->setGeometry(QRect(250, 11, 731, 35));
        ucla_address = new QLabel(page_11);
        ucla_address->setObjectName(QStringLiteral("ucla_address"));
        ucla_address->setGeometry(QRect(130, 501, 881, 23));
        ucla_address->setStyleSheet(QLatin1String("QLabel {\n"
"	color: white;\n"
"	font-size: 20px;\n"
"}"));
        ucla_campus = new QGraphicsView(page_11);
        ucla_campus->setObjectName(QStringLiteral("ucla_campus"));
        ucla_campus->setGeometry(QRect(100, 70, 501, 410));
        ucla_campus->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/ucla.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        stackedWidget->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        oregon_campus = new QGraphicsView(page_12);
        oregon_campus->setObjectName(QStringLiteral("oregon_campus"));
        oregon_campus->setGeometry(QRect(100, 70, 501, 410));
        oregon_campus->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/oregon.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        backPage_10 = new QPushButton(page_12);
        backPage_10->setObjectName(QStringLiteral("backPage_10"));
        backPage_10->setGeometry(QRect(0, 240, 81, 70));
        backPage_10->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/back-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        oregon_title = new QLabel(page_12);
        oregon_title->setObjectName(QStringLiteral("oregon_title"));
        oregon_title->setGeometry(QRect(480, 11, 301, 35));
        oregon_map = new QGraphicsView(page_12);
        oregon_map->setObjectName(QStringLiteral("oregon_map"));
        oregon_map->setGeometry(QRect(620, 70, 461, 410));
        oregon_map->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/oregon_map.png\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        oregon_address = new QLabel(page_12);
        oregon_address->setObjectName(QStringLiteral("oregon_address"));
        oregon_address->setGeometry(QRect(130, 501, 881, 23));
        oregon_address->setStyleSheet(QLatin1String("QLabel {\n"
"	color: white;\n"
"	font-size: 20px;\n"
"}"));
        nextPage_12 = new QPushButton(page_12);
        nextPage_12->setObjectName(QStringLiteral("nextPage_12"));
        nextPage_12->setGeometry(QRect(1100, 240, 81, 70));
        nextPage_12->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/next-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        stackedWidget->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName(QStringLiteral("page_13"));
        texas_map = new QGraphicsView(page_13);
        texas_map->setObjectName(QStringLiteral("texas_map"));
        texas_map->setGeometry(QRect(620, 69, 461, 410));
        texas_map->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/texas_map.png\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        texas_address = new QLabel(page_13);
        texas_address->setObjectName(QStringLiteral("texas_address"));
        texas_address->setGeometry(QRect(180, 500, 881, 23));
        texas_address->setStyleSheet(QLatin1String("QLabel {\n"
"	color: white;\n"
"	font-size: 20px;\n"
"}"));
        texas_title = new QLabel(page_13);
        texas_title->setObjectName(QStringLiteral("texas_title"));
        texas_title->setGeometry(QRect(470, 10, 301, 35));
        nextPage_13 = new QPushButton(page_13);
        nextPage_13->setObjectName(QStringLiteral("nextPage_13"));
        nextPage_13->setGeometry(QRect(1100, 239, 81, 70));
        nextPage_13->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/next-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        texas_campus = new QGraphicsView(page_13);
        texas_campus->setObjectName(QStringLiteral("texas_campus"));
        texas_campus->setGeometry(QRect(100, 69, 501, 410));
        texas_campus->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/texas.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        backPage_11 = new QPushButton(page_13);
        backPage_11->setObjectName(QStringLiteral("backPage_11"));
        backPage_11->setGeometry(QRect(0, 239, 81, 70));
        backPage_11->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/back-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        stackedWidget->addWidget(page_13);
        page_14 = new QWidget();
        page_14->setObjectName(QStringLiteral("page_14"));
        pacific_address = new QLabel(page_14);
        pacific_address->setObjectName(QStringLiteral("pacific_address"));
        pacific_address->setGeometry(QRect(140, 501, 881, 23));
        pacific_address->setStyleSheet(QLatin1String("QLabel {\n"
"	color: white;\n"
"	font-size: 20px;\n"
"}"));
        nextPage_14 = new QPushButton(page_14);
        nextPage_14->setObjectName(QStringLiteral("nextPage_14"));
        nextPage_14->setGeometry(QRect(1100, 240, 81, 70));
        nextPage_14->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/next-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        backPage_12 = new QPushButton(page_14);
        backPage_12->setObjectName(QStringLiteral("backPage_12"));
        backPage_12->setGeometry(QRect(0, 240, 81, 70));
        backPage_12->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/back-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        pacific_map = new QGraphicsView(page_14);
        pacific_map->setObjectName(QStringLiteral("pacific_map"));
        pacific_map->setGeometry(QRect(620, 70, 461, 410));
        pacific_map->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/pacific_map.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        pacific_title = new QLabel(page_14);
        pacific_title->setObjectName(QStringLiteral("pacific_title"));
        pacific_title->setGeometry(QRect(470, 11, 351, 35));
        pacific_campus = new QGraphicsView(page_14);
        pacific_campus->setObjectName(QStringLiteral("pacific_campus"));
        pacific_campus->setGeometry(QRect(100, 70, 501, 410));
        pacific_campus->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/pacific.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        stackedWidget->addWidget(page_14);
        page_15 = new QWidget();
        page_15->setObjectName(QStringLiteral("page_15"));
        backPage_13 = new QPushButton(page_15);
        backPage_13->setObjectName(QStringLiteral("backPage_13"));
        backPage_13->setGeometry(QRect(0, 240, 81, 70));
        backPage_13->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/back-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        wisconsin_title = new QLabel(page_15);
        wisconsin_title->setObjectName(QStringLiteral("wisconsin_title"));
        wisconsin_title->setGeometry(QRect(470, 11, 351, 35));
        wisconsin_address = new QLabel(page_15);
        wisconsin_address->setObjectName(QStringLiteral("wisconsin_address"));
        wisconsin_address->setGeometry(QRect(200, 501, 881, 23));
        wisconsin_address->setStyleSheet(QLatin1String("QLabel {\n"
"	color: white;\n"
"	font-size: 20px;\n"
"}"));
        nextPage_15 = new QPushButton(page_15);
        nextPage_15->setObjectName(QStringLiteral("nextPage_15"));
        nextPage_15->setGeometry(QRect(1100, 240, 81, 70));
        nextPage_15->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/next-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        wisconsin_map = new QGraphicsView(page_15);
        wisconsin_map->setObjectName(QStringLiteral("wisconsin_map"));
        wisconsin_map->setGeometry(QRect(620, 70, 461, 410));
        wisconsin_map->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/wisconsin_map.png\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        wisconsin_campus = new QGraphicsView(page_15);
        wisconsin_campus->setObjectName(QStringLiteral("wisconsin_campus"));
        wisconsin_campus->setGeometry(QRect(100, 70, 501, 410));
        wisconsin_campus->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url(\"res/wisconsin.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"    width: 100%;\n"
"	height: 100%;\n"
"}\n"
""));
        stackedWidget->addWidget(page_15);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        display_college_table = new QTableWidget(page_5);
        display_college_table->setObjectName(QStringLiteral("display_college_table"));
        display_college_table->setGeometry(QRect(100, 20, 801, 531));
        display_college_table->setStyleSheet(QLatin1String("QTableWidget {\n"
"	background: transparent;\n"
"	color: white;\n"
"	font-size: 18px;\n"
"	font-weight: bold;\n"
"}"));
        display_college_table->setFrameShape(QFrame::Box);
        display_college_table->setFrameShadow(QFrame::Sunken);
        display_college_table->setLineWidth(2);
        display_college_table->setMidLineWidth(2);
        purchase_button = new QPushButton(page_5);
        purchase_button->setObjectName(QStringLiteral("purchase_button"));
        purchase_button->setGeometry(QRect(930, 480, 221, 51));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(12);
        purchase_button->setFont(font);
        help_button = new QPushButton(page_5);
        help_button->setObjectName(QStringLiteral("help_button"));
        help_button->setGeometry(QRect(930, 560, 221, 51));
        help_button->setFont(font);
        search_edit = new QLineEdit(page_5);
        search_edit->setObjectName(QStringLiteral("search_edit"));
        search_edit->setGeometry(QRect(930, 150, 221, 25));
        display_label = new QLabel(page_5);
        display_label->setObjectName(QStringLiteral("display_label"));
        display_label->setGeometry(QRect(930, 20, 221, 31));
        display_label->setStyleSheet(QLatin1String("QLabel {\n"
"	font-size: 16px;\n"
"}"));
        display_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        display_comboBox = new QComboBox(page_5);
        display_comboBox->setObjectName(QStringLiteral("display_comboBox"));
        display_comboBox->setGeometry(QRect(930, 60, 221, 25));
        tour_button = new QPushButton(page_5);
        tour_button->setObjectName(QStringLiteral("tour_button"));
        tour_button->setGeometry(QRect(930, 480, 221, 51));
        tour_button->setFont(font);
        search_label = new QLabel(page_5);
        search_label->setObjectName(QStringLiteral("search_label"));
        search_label->setGeometry(QRect(930, 110, 231, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("helvetica"));
        search_label->setFont(font1);
        search_label->setStyleSheet(QLatin1String("QLabel {\n"
"	font-size: 16px;\n"
"}"));
        search_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        backPage_14 = new QPushButton(page_5);
        backPage_14->setObjectName(QStringLiteral("backPage_14"));
        backPage_14->setGeometry(QRect(0, 270, 81, 70));
        backPage_14->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/back-xx.png');\n"
"	background-size: 10px;    \n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}"));
        stackedWidget->addWidget(page_5);
        colleges_table_button = new QPushButton(centralWidget);
        colleges_table_button->setObjectName(QStringLiteral("colleges_table_button"));
        colleges_table_button->setGeometry(QRect(170, 10, 161, 28));
        colleges_table_button->setStyleSheet(QLatin1String("QPushButton {\n"
"	background: gray;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background: black;\n"
"	color: pink;\n"
"}"));
        visitCampuses_button = new QPushButton(centralWidget);
        visitCampuses_button->setObjectName(QStringLiteral("visitCampuses_button"));
        visitCampuses_button->setGeometry(QRect(10, 10, 151, 28));
        visitCampuses_button->setStyleSheet(QLatin1String("QPushButton {\n"
"	background: gray;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background: black;\n"
"	color: pink;\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(14);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        login_button->setText(QApplication::translate("MainWindow", "Admin Login", 0));
        nextPage_3->setText(QString());
        asu_title->setText(QApplication::translate("MainWindow", "Arizona State University (ASU)", 0));
        asu_address->setText(QApplication::translate("MainWindow", "Address: Tempe, AZ                                         Phone: (855) 278-5080", 0));
        backPage_1->setText(QString());
        backPage_2->setText(QString());
        nextPage_4->setText(QString());
        uci_title->setText(QApplication::translate("MainWindow", "University of California Irvine (UCI)", 0));
        uci_address->setText(QApplication::translate("MainWindow", "Address: Irvine, CA 92697                                          Phone: (949) 824-5011", 0));
        nextPage_5->setText(QString());
        backPage_3->setText(QString());
        mit_title->setText(QApplication::translate("MainWindow", "Massachusetts Institute of Technology (MIT)", 0));
        mit_address->setText(QApplication::translate("MainWindow", "Address: 77 Massachusetts Ave, Cambridge, MA 02139                       Phone: (617) 253-1000", 0));
        northwestern_title->setText(QApplication::translate("MainWindow", "Northwestern", 0));
        nextPage_6->setText(QString());
        backPage_4->setText(QString());
        northwestern_address->setText(QApplication::translate("MainWindow", "633 Clark St, Evanston, IL 60208                        Phone:(847) 491-3741", 0));
        ohio_title->setText(QApplication::translate("MainWindow", "Ohio State University", 0));
        ohio_address->setText(QApplication::translate("MainWindow", "Address: Columbus, OH 43210                               Phone: (614) 292-6446", 0));
        backPage_5->setText(QString());
        nextPage_7->setText(QString());
        backPage_6->setText(QString());
        saddleback_address->setText(QApplication::translate("MainWindow", " Address: 28000 Marguerite Pkwy, Mission Viejo, CA 92692                   Phone: (949) 582-4500", 0));
        nextPage_8->setText(QString());
        saddleback_title->setText(QApplication::translate("MainWindow", "Saddleback College", 0));
        backPage_7->setText(QString());
        fullerton_address->setText(QApplication::translate("MainWindow", "Address: 321 E Chapman Ave, Fullerton, CA 92832                        Phone: (714) 992-7000", 0));
        fullerton_title->setText(QApplication::translate("MainWindow", "California State University, Fullerton", 0));
        nextPage_9->setText(QString());
        nextPage_10->setText(QString());
        backPage_8->setText(QString());
        michigan_address->setText(QApplication::translate("MainWindow", "Address: 500 S State St, Ann Arbor, MI 48109                     Phone: (734) 764-1817", 0));
        michigan_title->setText(QApplication::translate("MainWindow", "University of  Michigan", 0));
        backPage_9->setText(QString());
        nextPage_11->setText(QString());
        ucla_title->setText(QApplication::translate("MainWindow", "UniversityUniversity of California, Los Angeles (UCLA)", 0));
        ucla_address->setText(QApplication::translate("MainWindow", "Address: Los Angeles, CA 90095                                                    Phone:(310) 825-4321", 0));
        backPage_10->setText(QString());
        oregon_title->setText(QApplication::translate("MainWindow", "University of Oregon", 0));
        oregon_address->setText(QApplication::translate("MainWindow", "Address: 1585 E 13th Ave, Eugene, 97403                                        Phone:(541) 346-1000", 0));
        nextPage_12->setText(QString());
        texas_address->setText(QApplication::translate("MainWindow", "Address: Austin, TX 78712                                                       Phone:(512) 471-3434", 0));
        texas_title->setText(QApplication::translate("MainWindow", "University of Texas", 0));
        nextPage_13->setText(QString());
        backPage_11->setText(QString());
        pacific_address->setText(QApplication::translate("MainWindow", "Address: 3601 Pacific Ave, Stockton, CA 95211                            Phone:(209) 946-2285", 0));
        nextPage_14->setText(QString());
        backPage_12->setText(QString());
        pacific_title->setText(QApplication::translate("MainWindow", "University of the Pacific", 0));
        backPage_13->setText(QString());
        wisconsin_title->setText(QApplication::translate("MainWindow", "University of Wisconsin", 0));
        wisconsin_address->setText(QApplication::translate("MainWindow", "Address: Madison, WI 53706                                            Phone:(608) 263-2400", 0));
        nextPage_15->setText(QString());
        purchase_button->setText(QApplication::translate("MainWindow", "Purchase Souvenir", 0));
        help_button->setText(QApplication::translate("MainWindow", "Help", 0));
        display_label->setText(QApplication::translate("MainWindow", "Display:", 0));
        display_comboBox->clear();
        display_comboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "Colleges", 0)
         << QApplication::translate("MainWindow", "Souvenirs", 0)
        );
        tour_button->setText(QApplication::translate("MainWindow", "Begin Tour", 0));
        search_label->setText(QApplication::translate("MainWindow", "Search by College name:", 0));
        backPage_14->setText(QString());
        colleges_table_button->setText(QApplication::translate("MainWindow", "Visit Colleges Table", 0));
        visitCampuses_button->setText(QApplication::translate("MainWindow", "Visit Campuses", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
