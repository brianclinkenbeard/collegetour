/********************************************************************************
** Form generated from reading UI file 'tourpurchase.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOURPURCHASE_H
#define UI_TOURPURCHASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tourpurchase
{
public:
    QStackedWidget *purchase_stackedWidget;
    QWidget *page;
    QLabel *label;
    QPushButton *shopping_button;
    QWidget *page_5;
    QGraphicsView *graphicsView;
    QTableWidget *tableWidget_arizona;
    QLabel *arizona_title;
    QPushButton *next_3;
    QPushButton *pushButton_selectPurchase_asu;
    QLabel *label_QAsu;
    QLineEdit *lineEdit_quantity_asu;
    QTableWidget *tableWidget_totalAsu;
    QLabel *label_3;
    QPushButton *pushButton_quantityAsu;
    QWidget *page_14;
    QGraphicsView *uci_view;
    QPushButton *pushButton_selectPurchase_uci;
    QLabel *uci_title;
    QLabel *label_totalUci;
    QTableWidget *tableWidget_totalUci;
    QPushButton *next_4;
    QTableWidget *tableWidget_irvine;
    QWidget *page_6;
    QLabel *uci_title_2;
    QTableWidget *tableWidget_Mit;
    QPushButton *next_5;
    QTableWidget *tableWidget_totalUci_2;
    QGraphicsView *mit_view;
    QPushButton *pushButton_selectPurchase_Mit;
    QTableWidget *tableWidget_totalMit;
    QLabel *label_totalMit;
    QWidget *page_7;
    QLabel *northwestern_title;
    QTableWidget *tableWidget_northwestern;
    QGraphicsView *northwestern_view;
    QLabel *label_totalNorthwestern;
    QPushButton *pushButton_selectPurchase_Northwestern;
    QTableWidget *tableWidget_totalNorthwestern;
    QPushButton *next_6;
    QWidget *page_8;
    QPushButton *next_7;
    QTableWidget *tableWidget_ohio;
    QTableWidget *tableWidget_totalOhio;
    QLabel *ohio_title;
    QPushButton *pushButton_selectPurchase_ohio;
    QGraphicsView *ohio_view;
    QLabel *label_totalOhio;
    QWidget *page_9;
    QTableWidget *tableWidget_saddleback;
    QPushButton *next_8;
    QPushButton *pushButton_selectPurchase_saddleback;
    QGraphicsView *saddleback_view;
    QLabel *saddleback_title;
    QTableWidget *tableWidget_totalsaddleback;
    QLabel *label_totalsaddleback;
    QWidget *page_10;
    QGraphicsView *csuf_view;
    QLabel *csuf_title;
    QTableWidget *tableWidget_totalcsuf;
    QTableWidget *tableWidget_csuf;
    QLabel *label_totalcsuf;
    QPushButton *pushButton_selectPurchase_csuf;
    QPushButton *next_9;
    QWidget *page_11;
    QLabel *michigan_title;
    QPushButton *next_10;
    QGraphicsView *michigan_view;
    QLabel *label_totalmichigan;
    QTableWidget *tableWidget_totalmichigan;
    QPushButton *pushButton_selectPurchase_michigan;
    QTableWidget *tableWidget_michigan;
    QWidget *page_12;
    QGraphicsView *ucla_view_2;
    QLabel *ucla_title_2;
    QTableWidget *tableWidget_ucla;
    QPushButton *pushButton_selectPurchase_ucla_2;
    QTableWidget *tableWidget_totalucla_2;
    QLabel *label_totalUcla_2;
    QPushButton *next_11;
    QWidget *page_13;
    QLabel *label_totaloregon_2;
    QPushButton *pushButton_selectPurchase_oregon_2;
    QTableWidget *tableWidget_totaloregon_2;
    QGraphicsView *oregon_view_2;
    QPushButton *next_12;
    QLabel *oregon_title_2;
    QTableWidget *tableWidget_oregon;
    QWidget *page_2;
    QTableWidget *tableWidget_totaltexas;
    QLabel *label_totaltexas;
    QTableWidget *tableWidget_texas;
    QPushButton *pushButton_selectPurchase_texas;
    QPushButton *next_13;
    QGraphicsView *texas_view;
    QLabel *texas_title;
    QWidget *page_3;
    QTableWidget *tableWidget_totalPacific;
    QGraphicsView *Pacific_view;
    QPushButton *pushButton_selectPurchase_Pacific;
    QLabel *label_totalPacific;
    QPushButton *next_14;
    QTableWidget *tableWidget_Pacific;
    QLabel *texas_title_2;
    QWidget *page_4;
    QGraphicsView *Wisconsin_view;
    QTableWidget *tableWidget_totalWisconsin;
    QTableWidget *tableWidget_Wisconsin;
    QPushButton *next_15;
    QLabel *label_totalWisconsin;
    QLabel *Wisconsin_title;
    QPushButton *pushButton_selectPurchase_Wisconsin;
    QWidget *page_29;
    QFrame *line;
    QPushButton *pushButton;

    void setupUi(QDialog *tourpurchase)
    {
        if (tourpurchase->objectName().isEmpty())
            tourpurchase->setObjectName(QStringLiteral("tourpurchase"));
        tourpurchase->resize(821, 682);
        tourpurchase->setStyleSheet(QLatin1String("QDialog {\n"
"	background-image: url(\"res/university-background.jpg\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}\n"
"\n"
"QLabel {\n"
"	font: 20px;\n"
"	color: black;\n"
"	font-weight: bold;\n"
"}\n"
"QTableWidget {\n"
"	border: none;\n"
"	background: transparent;\n"
"	font-size: 20px;\n"
"	color: black;\n"
"	border-style: groove;\n"
"	border-radius: 10px;\n"
"	font-weight: bold;\n"
"}"));
        purchase_stackedWidget = new QStackedWidget(tourpurchase);
        purchase_stackedWidget->setObjectName(QStringLiteral("purchase_stackedWidget"));
        purchase_stackedWidget->setGeometry(QRect(20, 60, 781, 601));
        purchase_stackedWidget->setStyleSheet(QStringLiteral(""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 170, 401, 141));
        label->setStyleSheet(QLatin1String("QLabel {\n"
"	font-size: 30px;\n"
"}"));
        shopping_button = new QPushButton(page);
        shopping_button->setObjectName(QStringLiteral("shopping_button"));
        shopping_button->setGeometry(QRect(160, 300, 131, 121));
        shopping_button->setStyleSheet(QStringLiteral(""));
        purchase_stackedWidget->addWidget(page);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        graphicsView = new QGraphicsView(page_5);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(440, 80, 301, 221));
        graphicsView->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url('res/arizona_background.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: groove;\n"
"	border-radius: 40px;\n"
"}"));
        tableWidget_arizona = new QTableWidget(page_5);
        tableWidget_arizona->setObjectName(QStringLiteral("tableWidget_arizona"));
        tableWidget_arizona->setGeometry(QRect(35, 100, 381, 251));
        tableWidget_arizona->setEditTriggers(QAbstractItemView::NoEditTriggers);
        arizona_title = new QLabel(page_5);
        arizona_title->setObjectName(QStringLiteral("arizona_title"));
        arizona_title->setGeometry(QRect(240, 10, 421, 61));
        next_3 = new QPushButton(page_5);
        next_3->setObjectName(QStringLiteral("next_3"));
        next_3->setGeometry(QRect(700, 520, 61, 61));
        next_3->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/nxt.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: inset;\n"
"	border-radius: 30px;\n"
"}"));
        pushButton_selectPurchase_asu = new QPushButton(page_5);
        pushButton_selectPurchase_asu->setObjectName(QStringLiteral("pushButton_selectPurchase_asu"));
        pushButton_selectPurchase_asu->setGeometry(QRect(150, 370, 131, 61));
        pushButton_selectPurchase_asu->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: gray;\n"
"	border-style: inset;\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: lightgray;\n"
"	color: black;	\n"
"}"));
        label_QAsu = new QLabel(page_5);
        label_QAsu->setObjectName(QStringLiteral("label_QAsu"));
        label_QAsu->setGeometry(QRect(30, 490, 91, 31));
        lineEdit_quantity_asu = new QLineEdit(page_5);
        lineEdit_quantity_asu->setObjectName(QStringLiteral("lineEdit_quantity_asu"));
        lineEdit_quantity_asu->setGeometry(QRect(140, 490, 61, 31));
        tableWidget_totalAsu = new QTableWidget(page_5);
        tableWidget_totalAsu->setObjectName(QStringLiteral("tableWidget_totalAsu"));
        tableWidget_totalAsu->setGeometry(QRect(425, 410, 271, 81));
        label_3 = new QLabel(page_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(420, 360, 71, 31));
        pushButton_quantityAsu = new QPushButton(page_5);
        pushButton_quantityAsu->setObjectName(QStringLiteral("pushButton_quantityAsu"));
        pushButton_quantityAsu->setGeometry(QRect(230, 490, 61, 31));
        pushButton_quantityAsu->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: gray;\n"
"	border-style: inset;\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: lightgray;\n"
"	color: black;	\n"
"}"));
        purchase_stackedWidget->addWidget(page_5);
        page_14 = new QWidget();
        page_14->setObjectName(QStringLiteral("page_14"));
        uci_view = new QGraphicsView(page_14);
        uci_view->setObjectName(QStringLiteral("uci_view"));
        uci_view->setGeometry(QRect(450, 100, 301, 221));
        uci_view->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url('res/uci_logo.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: groove;\n"
"	border-radius: 40px;\n"
"}"));
        pushButton_selectPurchase_uci = new QPushButton(page_14);
        pushButton_selectPurchase_uci->setObjectName(QStringLiteral("pushButton_selectPurchase_uci"));
        pushButton_selectPurchase_uci->setGeometry(QRect(150, 370, 131, 61));
        pushButton_selectPurchase_uci->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: gray;\n"
"	border-style: inset;\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: lightgray;\n"
"	color: black;	\n"
"}"));
        uci_title = new QLabel(page_14);
        uci_title->setObjectName(QStringLiteral("uci_title"));
        uci_title->setGeometry(QRect(240, 10, 421, 61));
        label_totalUci = new QLabel(page_14);
        label_totalUci->setObjectName(QStringLiteral("label_totalUci"));
        label_totalUci->setGeometry(QRect(420, 370, 71, 31));
        tableWidget_totalUci = new QTableWidget(page_14);
        tableWidget_totalUci->setObjectName(QStringLiteral("tableWidget_totalUci"));
        tableWidget_totalUci->setGeometry(QRect(425, 420, 271, 81));
        next_4 = new QPushButton(page_14);
        next_4->setObjectName(QStringLiteral("next_4"));
        next_4->setGeometry(QRect(700, 520, 61, 61));
        next_4->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/nxt.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: inset;\n"
"	border-radius: 30px;\n"
"}"));
        tableWidget_irvine = new QTableWidget(page_14);
        tableWidget_irvine->setObjectName(QStringLiteral("tableWidget_irvine"));
        tableWidget_irvine->setGeometry(QRect(35, 100, 411, 251));
        tableWidget_irvine->setEditTriggers(QAbstractItemView::NoEditTriggers);
        purchase_stackedWidget->addWidget(page_14);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        uci_title_2 = new QLabel(page_6);
        uci_title_2->setObjectName(QStringLiteral("uci_title_2"));
        uci_title_2->setGeometry(QRect(160, 10, 481, 61));
        tableWidget_Mit = new QTableWidget(page_6);
        tableWidget_Mit->setObjectName(QStringLiteral("tableWidget_Mit"));
        tableWidget_Mit->setGeometry(QRect(35, 100, 401, 251));
        tableWidget_Mit->setEditTriggers(QAbstractItemView::NoEditTriggers);
        next_5 = new QPushButton(page_6);
        next_5->setObjectName(QStringLiteral("next_5"));
        next_5->setGeometry(QRect(700, 520, 61, 61));
        next_5->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/nxt.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: inset;\n"
"	border-radius: 30px;\n"
"}"));
        tableWidget_totalUci_2 = new QTableWidget(page_6);
        tableWidget_totalUci_2->setObjectName(QStringLiteral("tableWidget_totalUci_2"));
        tableWidget_totalUci_2->setGeometry(QRect(425, 400, 271, 81));
        mit_view = new QGraphicsView(page_6);
        mit_view->setObjectName(QStringLiteral("mit_view"));
        mit_view->setGeometry(QRect(450, 70, 301, 281));
        mit_view->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url('res/mit_flag.gif');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: groove;\n"
"	border-radius: 40px;\n"
"}"));
        pushButton_selectPurchase_Mit = new QPushButton(page_6);
        pushButton_selectPurchase_Mit->setObjectName(QStringLiteral("pushButton_selectPurchase_Mit"));
        pushButton_selectPurchase_Mit->setGeometry(QRect(150, 370, 131, 61));
        pushButton_selectPurchase_Mit->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: gray;\n"
"	border-style: inset;\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: lightgray;\n"
"	color: black;	\n"
"}"));
        tableWidget_totalMit = new QTableWidget(page_6);
        tableWidget_totalMit->setObjectName(QStringLiteral("tableWidget_totalMit"));
        tableWidget_totalMit->setGeometry(QRect(420, 410, 271, 81));
        label_totalMit = new QLabel(page_6);
        label_totalMit->setObjectName(QStringLiteral("label_totalMit"));
        label_totalMit->setGeometry(QRect(420, 360, 71, 31));
        purchase_stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        northwestern_title = new QLabel(page_7);
        northwestern_title->setObjectName(QStringLiteral("northwestern_title"));
        northwestern_title->setGeometry(QRect(250, 0, 421, 61));
        tableWidget_northwestern = new QTableWidget(page_7);
        tableWidget_northwestern->setObjectName(QStringLiteral("tableWidget_northwestern"));
        tableWidget_northwestern->setGeometry(QRect(45, 90, 391, 251));
        tableWidget_northwestern->setEditTriggers(QAbstractItemView::NoEditTriggers);
        northwestern_view = new QGraphicsView(page_7);
        northwestern_view->setObjectName(QStringLiteral("northwestern_view"));
        northwestern_view->setGeometry(QRect(450, 90, 301, 221));
        northwestern_view->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url('res/northeastern_logo.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: groove;\n"
"	border-radius: 40px;\n"
"}"));
        label_totalNorthwestern = new QLabel(page_7);
        label_totalNorthwestern->setObjectName(QStringLiteral("label_totalNorthwestern"));
        label_totalNorthwestern->setGeometry(QRect(420, 360, 71, 31));
        pushButton_selectPurchase_Northwestern = new QPushButton(page_7);
        pushButton_selectPurchase_Northwestern->setObjectName(QStringLiteral("pushButton_selectPurchase_Northwestern"));
        pushButton_selectPurchase_Northwestern->setGeometry(QRect(150, 370, 131, 61));
        pushButton_selectPurchase_Northwestern->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: gray;\n"
"	border-style: inset;\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: lightgray;\n"
"	color: black;	\n"
"}"));
        tableWidget_totalNorthwestern = new QTableWidget(page_7);
        tableWidget_totalNorthwestern->setObjectName(QStringLiteral("tableWidget_totalNorthwestern"));
        tableWidget_totalNorthwestern->setGeometry(QRect(420, 410, 271, 81));
        next_6 = new QPushButton(page_7);
        next_6->setObjectName(QStringLiteral("next_6"));
        next_6->setGeometry(QRect(700, 520, 61, 61));
        next_6->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/nxt.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: inset;\n"
"	border-radius: 30px;\n"
"}"));
        purchase_stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        next_7 = new QPushButton(page_8);
        next_7->setObjectName(QStringLiteral("next_7"));
        next_7->setGeometry(QRect(700, 520, 61, 61));
        next_7->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/nxt.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: inset;\n"
"	border-radius: 30px;\n"
"}"));
        tableWidget_ohio = new QTableWidget(page_8);
        tableWidget_ohio->setObjectName(QStringLiteral("tableWidget_ohio"));
        tableWidget_ohio->setGeometry(QRect(40, 90, 381, 251));
        tableWidget_ohio->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_totalOhio = new QTableWidget(page_8);
        tableWidget_totalOhio->setObjectName(QStringLiteral("tableWidget_totalOhio"));
        tableWidget_totalOhio->setGeometry(QRect(420, 410, 271, 81));
        ohio_title = new QLabel(page_8);
        ohio_title->setObjectName(QStringLiteral("ohio_title"));
        ohio_title->setGeometry(QRect(280, 0, 421, 61));
        pushButton_selectPurchase_ohio = new QPushButton(page_8);
        pushButton_selectPurchase_ohio->setObjectName(QStringLiteral("pushButton_selectPurchase_ohio"));
        pushButton_selectPurchase_ohio->setGeometry(QRect(150, 370, 131, 61));
        pushButton_selectPurchase_ohio->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: gray;\n"
"	border-style: inset;\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: lightgray;\n"
"	color: black;	\n"
"}"));
        ohio_view = new QGraphicsView(page_8);
        ohio_view->setObjectName(QStringLiteral("ohio_view"));
        ohio_view->setGeometry(QRect(450, 90, 301, 221));
        ohio_view->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url('res/ohio_logo.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: groove;\n"
"	border-radius: 40px;\n"
"}"));
        label_totalOhio = new QLabel(page_8);
        label_totalOhio->setObjectName(QStringLiteral("label_totalOhio"));
        label_totalOhio->setGeometry(QRect(420, 360, 71, 31));
        purchase_stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        tableWidget_saddleback = new QTableWidget(page_9);
        tableWidget_saddleback->setObjectName(QStringLiteral("tableWidget_saddleback"));
        tableWidget_saddleback->setGeometry(QRect(40, 80, 411, 271));
        next_8 = new QPushButton(page_9);
        next_8->setObjectName(QStringLiteral("next_8"));
        next_8->setGeometry(QRect(700, 520, 61, 61));
        next_8->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/nxt.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: inset;\n"
"	border-radius: 30px;\n"
"}"));
        pushButton_selectPurchase_saddleback = new QPushButton(page_9);
        pushButton_selectPurchase_saddleback->setObjectName(QStringLiteral("pushButton_selectPurchase_saddleback"));
        pushButton_selectPurchase_saddleback->setGeometry(QRect(150, 370, 131, 61));
        pushButton_selectPurchase_saddleback->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: gray;\n"
"	border-style: inset;\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: lightgray;\n"
"	color: black;	\n"
"}"));
        saddleback_view = new QGraphicsView(page_9);
        saddleback_view->setObjectName(QStringLiteral("saddleback_view"));
        saddleback_view->setGeometry(QRect(510, 40, 251, 311));
        saddleback_view->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url('res/saddleback_logo.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: groove;\n"
"	border-radius: 40px;\n"
"}"));
        saddleback_title = new QLabel(page_9);
        saddleback_title->setObjectName(QStringLiteral("saddleback_title"));
        saddleback_title->setGeometry(QRect(280, 0, 421, 61));
        tableWidget_totalsaddleback = new QTableWidget(page_9);
        tableWidget_totalsaddleback->setObjectName(QStringLiteral("tableWidget_totalsaddleback"));
        tableWidget_totalsaddleback->setGeometry(QRect(420, 420, 271, 81));
        label_totalsaddleback = new QLabel(page_9);
        label_totalsaddleback->setObjectName(QStringLiteral("label_totalsaddleback"));
        label_totalsaddleback->setGeometry(QRect(420, 370, 71, 31));
        purchase_stackedWidget->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        csuf_view = new QGraphicsView(page_10);
        csuf_view->setObjectName(QStringLiteral("csuf_view"));
        csuf_view->setGeometry(QRect(490, 40, 271, 311));
        csuf_view->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url('res/csuf_logo.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: groove;\n"
"	border-radius: 40px;\n"
"}"));
        csuf_title = new QLabel(page_10);
        csuf_title->setObjectName(QStringLiteral("csuf_title"));
        csuf_title->setGeometry(QRect(220, 0, 421, 61));
        tableWidget_totalcsuf = new QTableWidget(page_10);
        tableWidget_totalcsuf->setObjectName(QStringLiteral("tableWidget_totalcsuf"));
        tableWidget_totalcsuf->setGeometry(QRect(420, 420, 271, 81));
        tableWidget_csuf = new QTableWidget(page_10);
        tableWidget_csuf->setObjectName(QStringLiteral("tableWidget_csuf"));
        tableWidget_csuf->setGeometry(QRect(60, 90, 411, 261));
        label_totalcsuf = new QLabel(page_10);
        label_totalcsuf->setObjectName(QStringLiteral("label_totalcsuf"));
        label_totalcsuf->setGeometry(QRect(420, 370, 71, 31));
        pushButton_selectPurchase_csuf = new QPushButton(page_10);
        pushButton_selectPurchase_csuf->setObjectName(QStringLiteral("pushButton_selectPurchase_csuf"));
        pushButton_selectPurchase_csuf->setGeometry(QRect(150, 370, 131, 61));
        pushButton_selectPurchase_csuf->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: gray;\n"
"	border-style: inset;\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: lightgray;\n"
"	color: black;	\n"
"}"));
        next_9 = new QPushButton(page_10);
        next_9->setObjectName(QStringLiteral("next_9"));
        next_9->setGeometry(QRect(700, 520, 61, 61));
        next_9->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/nxt.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: inset;\n"
"	border-radius: 30px;\n"
"}"));
        purchase_stackedWidget->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        michigan_title = new QLabel(page_11);
        michigan_title->setObjectName(QStringLiteral("michigan_title"));
        michigan_title->setGeometry(QRect(260, 0, 421, 61));
        next_10 = new QPushButton(page_11);
        next_10->setObjectName(QStringLiteral("next_10"));
        next_10->setGeometry(QRect(700, 520, 61, 61));
        next_10->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/nxt.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: inset;\n"
"	border-radius: 30px;\n"
"}"));
        michigan_view = new QGraphicsView(page_11);
        michigan_view->setObjectName(QStringLiteral("michigan_view"));
        michigan_view->setGeometry(QRect(480, 50, 281, 291));
        michigan_view->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url('res/michigan_logo.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: groove;\n"
"	border-radius: 40px;\n"
"}"));
        label_totalmichigan = new QLabel(page_11);
        label_totalmichigan->setObjectName(QStringLiteral("label_totalmichigan"));
        label_totalmichigan->setGeometry(QRect(420, 370, 71, 31));
        tableWidget_totalmichigan = new QTableWidget(page_11);
        tableWidget_totalmichigan->setObjectName(QStringLiteral("tableWidget_totalmichigan"));
        tableWidget_totalmichigan->setGeometry(QRect(420, 420, 271, 81));
        pushButton_selectPurchase_michigan = new QPushButton(page_11);
        pushButton_selectPurchase_michigan->setObjectName(QStringLiteral("pushButton_selectPurchase_michigan"));
        pushButton_selectPurchase_michigan->setGeometry(QRect(150, 370, 131, 61));
        pushButton_selectPurchase_michigan->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: gray;\n"
"	border-style: inset;\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: lightgray;\n"
"	color: black;	\n"
"}"));
        tableWidget_michigan = new QTableWidget(page_11);
        tableWidget_michigan->setObjectName(QStringLiteral("tableWidget_michigan"));
        tableWidget_michigan->setGeometry(QRect(50, 80, 371, 271));
        purchase_stackedWidget->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        ucla_view_2 = new QGraphicsView(page_12);
        ucla_view_2->setObjectName(QStringLiteral("ucla_view_2"));
        ucla_view_2->setGeometry(QRect(480, 50, 281, 291));
        ucla_view_2->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url('res/ucla_logo.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: groove;\n"
"	border-radius: 40px;\n"
"}"));
        ucla_title_2 = new QLabel(page_12);
        ucla_title_2->setObjectName(QStringLiteral("ucla_title_2"));
        ucla_title_2->setGeometry(QRect(140, 0, 561, 61));
        tableWidget_ucla = new QTableWidget(page_12);
        tableWidget_ucla->setObjectName(QStringLiteral("tableWidget_ucla"));
        tableWidget_ucla->setGeometry(QRect(40, 90, 391, 261));
        pushButton_selectPurchase_ucla_2 = new QPushButton(page_12);
        pushButton_selectPurchase_ucla_2->setObjectName(QStringLiteral("pushButton_selectPurchase_ucla_2"));
        pushButton_selectPurchase_ucla_2->setGeometry(QRect(150, 370, 131, 61));
        pushButton_selectPurchase_ucla_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: gray;\n"
"	border-style: inset;\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: lightgray;\n"
"	color: black;	\n"
"}"));
        tableWidget_totalucla_2 = new QTableWidget(page_12);
        tableWidget_totalucla_2->setObjectName(QStringLiteral("tableWidget_totalucla_2"));
        tableWidget_totalucla_2->setGeometry(QRect(420, 420, 271, 81));
        label_totalUcla_2 = new QLabel(page_12);
        label_totalUcla_2->setObjectName(QStringLiteral("label_totalUcla_2"));
        label_totalUcla_2->setGeometry(QRect(420, 370, 71, 31));
        next_11 = new QPushButton(page_12);
        next_11->setObjectName(QStringLiteral("next_11"));
        next_11->setGeometry(QRect(700, 520, 61, 61));
        next_11->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/nxt.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: inset;\n"
"	border-radius: 30px;\n"
"}"));
        purchase_stackedWidget->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName(QStringLiteral("page_13"));
        label_totaloregon_2 = new QLabel(page_13);
        label_totaloregon_2->setObjectName(QStringLiteral("label_totaloregon_2"));
        label_totaloregon_2->setGeometry(QRect(420, 370, 71, 31));
        pushButton_selectPurchase_oregon_2 = new QPushButton(page_13);
        pushButton_selectPurchase_oregon_2->setObjectName(QStringLiteral("pushButton_selectPurchase_oregon_2"));
        pushButton_selectPurchase_oregon_2->setGeometry(QRect(150, 370, 131, 61));
        pushButton_selectPurchase_oregon_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: gray;\n"
"	border-style: inset;\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: lightgray;\n"
"	color: black;	\n"
"}"));
        tableWidget_totaloregon_2 = new QTableWidget(page_13);
        tableWidget_totaloregon_2->setObjectName(QStringLiteral("tableWidget_totaloregon_2"));
        tableWidget_totaloregon_2->setGeometry(QRect(420, 420, 271, 81));
        oregon_view_2 = new QGraphicsView(page_13);
        oregon_view_2->setObjectName(QStringLiteral("oregon_view_2"));
        oregon_view_2->setGeometry(QRect(450, 50, 311, 301));
        oregon_view_2->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url('res/oregon_logo.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: groove;\n"
"	border-radius: 40px;\n"
"}"));
        next_12 = new QPushButton(page_13);
        next_12->setObjectName(QStringLiteral("next_12"));
        next_12->setGeometry(QRect(700, 520, 61, 61));
        next_12->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/nxt.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: inset;\n"
"	border-radius: 30px;\n"
"}"));
        oregon_title_2 = new QLabel(page_13);
        oregon_title_2->setObjectName(QStringLiteral("oregon_title_2"));
        oregon_title_2->setGeometry(QRect(300, 0, 251, 61));
        tableWidget_oregon = new QTableWidget(page_13);
        tableWidget_oregon->setObjectName(QStringLiteral("tableWidget_oregon"));
        tableWidget_oregon->setGeometry(QRect(40, 90, 381, 261));
        purchase_stackedWidget->addWidget(page_13);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        tableWidget_totaltexas = new QTableWidget(page_2);
        tableWidget_totaltexas->setObjectName(QStringLiteral("tableWidget_totaltexas"));
        tableWidget_totaltexas->setGeometry(QRect(420, 420, 271, 81));
        label_totaltexas = new QLabel(page_2);
        label_totaltexas->setObjectName(QStringLiteral("label_totaltexas"));
        label_totaltexas->setGeometry(QRect(420, 370, 71, 31));
        tableWidget_texas = new QTableWidget(page_2);
        tableWidget_texas->setObjectName(QStringLiteral("tableWidget_texas"));
        tableWidget_texas->setGeometry(QRect(50, 90, 341, 261));
        pushButton_selectPurchase_texas = new QPushButton(page_2);
        pushButton_selectPurchase_texas->setObjectName(QStringLiteral("pushButton_selectPurchase_texas"));
        pushButton_selectPurchase_texas->setGeometry(QRect(150, 370, 131, 61));
        pushButton_selectPurchase_texas->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: gray;\n"
"	border-style: inset;\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: lightgray;\n"
"	color: black;	\n"
"}"));
        next_13 = new QPushButton(page_2);
        next_13->setObjectName(QStringLiteral("next_13"));
        next_13->setGeometry(QRect(700, 520, 61, 61));
        next_13->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/nxt.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: inset;\n"
"	border-radius: 30px;\n"
"}"));
        texas_view = new QGraphicsView(page_2);
        texas_view->setObjectName(QStringLiteral("texas_view"));
        texas_view->setGeometry(QRect(440, 40, 301, 291));
        texas_view->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url('res/texas_logo.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: groove;\n"
"	border-radius: 40px;\n"
"}"));
        texas_title = new QLabel(page_2);
        texas_title->setObjectName(QStringLiteral("texas_title"));
        texas_title->setGeometry(QRect(300, 0, 251, 61));
        purchase_stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        tableWidget_totalPacific = new QTableWidget(page_3);
        tableWidget_totalPacific->setObjectName(QStringLiteral("tableWidget_totalPacific"));
        tableWidget_totalPacific->setGeometry(QRect(420, 420, 271, 81));
        Pacific_view = new QGraphicsView(page_3);
        Pacific_view->setObjectName(QStringLiteral("Pacific_view"));
        Pacific_view->setGeometry(QRect(380, 50, 401, 291));
        Pacific_view->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url('res/pacific_logo.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: groove;\n"
"	border-radius: 40px;\n"
"}"));
        pushButton_selectPurchase_Pacific = new QPushButton(page_3);
        pushButton_selectPurchase_Pacific->setObjectName(QStringLiteral("pushButton_selectPurchase_Pacific"));
        pushButton_selectPurchase_Pacific->setGeometry(QRect(150, 370, 131, 61));
        pushButton_selectPurchase_Pacific->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: gray;\n"
"	border-style: inset;\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: lightgray;\n"
"	color: black;	\n"
"}"));
        label_totalPacific = new QLabel(page_3);
        label_totalPacific->setObjectName(QStringLiteral("label_totalPacific"));
        label_totalPacific->setGeometry(QRect(420, 370, 71, 31));
        next_14 = new QPushButton(page_3);
        next_14->setObjectName(QStringLiteral("next_14"));
        next_14->setGeometry(QRect(700, 520, 61, 61));
        next_14->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/nxt.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: inset;\n"
"	border-radius: 30px;\n"
"}"));
        tableWidget_Pacific = new QTableWidget(page_3);
        tableWidget_Pacific->setObjectName(QStringLiteral("tableWidget_Pacific"));
        tableWidget_Pacific->setGeometry(QRect(40, 90, 321, 261));
        texas_title_2 = new QLabel(page_3);
        texas_title_2->setObjectName(QStringLiteral("texas_title_2"));
        texas_title_2->setGeometry(QRect(300, 0, 251, 61));
        purchase_stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        Wisconsin_view = new QGraphicsView(page_4);
        Wisconsin_view->setObjectName(QStringLiteral("Wisconsin_view"));
        Wisconsin_view->setGeometry(QRect(390, 60, 401, 291));
        Wisconsin_view->setStyleSheet(QLatin1String("QGraphicsView {\n"
"	background-image: url('res/wisconsin_logo.gif');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: groove;\n"
"	border-radius: 40px;\n"
"}"));
        tableWidget_totalWisconsin = new QTableWidget(page_4);
        tableWidget_totalWisconsin->setObjectName(QStringLiteral("tableWidget_totalWisconsin"));
        tableWidget_totalWisconsin->setGeometry(QRect(420, 420, 271, 81));
        tableWidget_Wisconsin = new QTableWidget(page_4);
        tableWidget_Wisconsin->setObjectName(QStringLiteral("tableWidget_Wisconsin"));
        tableWidget_Wisconsin->setGeometry(QRect(40, 60, 361, 291));
        next_15 = new QPushButton(page_4);
        next_15->setObjectName(QStringLiteral("next_15"));
        next_15->setGeometry(QRect(700, 520, 61, 61));
        next_15->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-image: url('res/nxt.png');\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"	border-style: inset;\n"
"	border-radius: 30px;\n"
"}"));
        label_totalWisconsin = new QLabel(page_4);
        label_totalWisconsin->setObjectName(QStringLiteral("label_totalWisconsin"));
        label_totalWisconsin->setGeometry(QRect(420, 370, 71, 31));
        Wisconsin_title = new QLabel(page_4);
        Wisconsin_title->setObjectName(QStringLiteral("Wisconsin_title"));
        Wisconsin_title->setGeometry(QRect(300, 0, 251, 61));
        pushButton_selectPurchase_Wisconsin = new QPushButton(page_4);
        pushButton_selectPurchase_Wisconsin->setObjectName(QStringLiteral("pushButton_selectPurchase_Wisconsin"));
        pushButton_selectPurchase_Wisconsin->setGeometry(QRect(150, 370, 131, 61));
        pushButton_selectPurchase_Wisconsin->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: gray;\n"
"	border-style: inset;\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: lightgray;\n"
"	color: black;	\n"
"}"));
        purchase_stackedWidget->addWidget(page_4);
        page_29 = new QWidget();
        page_29->setObjectName(QStringLiteral("page_29"));
        purchase_stackedWidget->addWidget(page_29);
        line = new QFrame(tourpurchase);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 40, 801, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(tourpurchase);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 93, 28));

        retranslateUi(tourpurchase);

        purchase_stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(tourpurchase);
    } // setupUi

    void retranslateUi(QDialog *tourpurchase)
    {
        tourpurchase->setWindowTitle(QApplication::translate("tourpurchase", "Dialog", 0));
        label->setText(QApplication::translate("tourpurchase", "Welcome to the shop", 0));
        shopping_button->setText(QApplication::translate("tourpurchase", "Start Shopping", 0));
        arizona_title->setText(QApplication::translate("tourpurchase", "Arizona State University (ASU)", 0));
        next_3->setText(QString());
        pushButton_selectPurchase_asu->setText(QApplication::translate("tourpurchase", "Add to Cart", 0));
        label_QAsu->setText(QApplication::translate("tourpurchase", "Quantity", 0));
        label_3->setText(QApplication::translate("tourpurchase", "Total", 0));
        pushButton_quantityAsu->setText(QApplication::translate("tourpurchase", "Confitm", 0));
        pushButton_selectPurchase_uci->setText(QApplication::translate("tourpurchase", "Add to Cart", 0));
        uci_title->setText(QApplication::translate("tourpurchase", "University OF Irvine (UCI)", 0));
        label_totalUci->setText(QApplication::translate("tourpurchase", "Total", 0));
        next_4->setText(QString());
        uci_title_2->setText(QApplication::translate("tourpurchase", "Massachusetts Institute of Technology (MIT)", 0));
        next_5->setText(QString());
        pushButton_selectPurchase_Mit->setText(QApplication::translate("tourpurchase", "Add to Cart", 0));
        label_totalMit->setText(QApplication::translate("tourpurchase", "Total", 0));
        northwestern_title->setText(QApplication::translate("tourpurchase", "Northwestern University", 0));
        label_totalNorthwestern->setText(QApplication::translate("tourpurchase", "Total", 0));
        pushButton_selectPurchase_Northwestern->setText(QApplication::translate("tourpurchase", "Add to Cart", 0));
        next_6->setText(QString());
        next_7->setText(QString());
        ohio_title->setText(QApplication::translate("tourpurchase", "Ohio State University", 0));
        pushButton_selectPurchase_ohio->setText(QApplication::translate("tourpurchase", "Add to Cart", 0));
        label_totalOhio->setText(QApplication::translate("tourpurchase", "Total", 0));
        next_8->setText(QString());
        pushButton_selectPurchase_saddleback->setText(QApplication::translate("tourpurchase", "Add to Cart", 0));
        saddleback_title->setText(QApplication::translate("tourpurchase", "Saddleback College", 0));
        label_totalsaddleback->setText(QApplication::translate("tourpurchase", "Total", 0));
        csuf_title->setText(QApplication::translate("tourpurchase", "California State University, Fullerton", 0));
        label_totalcsuf->setText(QApplication::translate("tourpurchase", "Total", 0));
        pushButton_selectPurchase_csuf->setText(QApplication::translate("tourpurchase", "Add to Cart", 0));
        next_9->setText(QString());
        michigan_title->setText(QApplication::translate("tourpurchase", "University of  Michigan", 0));
        next_10->setText(QString());
        label_totalmichigan->setText(QApplication::translate("tourpurchase", "Total", 0));
        pushButton_selectPurchase_michigan->setText(QApplication::translate("tourpurchase", "Add to Cart", 0));
        ucla_title_2->setText(QApplication::translate("tourpurchase", "UniversityUniversity of California, Los Angeles (UCLA)", 0));
        pushButton_selectPurchase_ucla_2->setText(QApplication::translate("tourpurchase", "Add to Cart", 0));
        label_totalUcla_2->setText(QApplication::translate("tourpurchase", "Total", 0));
        next_11->setText(QString());
        label_totaloregon_2->setText(QApplication::translate("tourpurchase", "Total", 0));
        pushButton_selectPurchase_oregon_2->setText(QApplication::translate("tourpurchase", "Add to Cart", 0));
        next_12->setText(QString());
        oregon_title_2->setText(QApplication::translate("tourpurchase", "University of Oregon", 0));
        label_totaltexas->setText(QApplication::translate("tourpurchase", "Total", 0));
        pushButton_selectPurchase_texas->setText(QApplication::translate("tourpurchase", "Add to Cart", 0));
        next_13->setText(QString());
        texas_title->setText(QApplication::translate("tourpurchase", "University of Texas", 0));
        pushButton_selectPurchase_Pacific->setText(QApplication::translate("tourpurchase", "Add to Cart", 0));
        label_totalPacific->setText(QApplication::translate("tourpurchase", "Total", 0));
        next_14->setText(QString());
        texas_title_2->setText(QApplication::translate("tourpurchase", "University of Pacific", 0));
        next_15->setText(QString());
        label_totalWisconsin->setText(QApplication::translate("tourpurchase", "Total", 0));
        Wisconsin_title->setText(QApplication::translate("tourpurchase", "University of Wisconsin", 0));
        pushButton_selectPurchase_Wisconsin->setText(QApplication::translate("tourpurchase", "Add to Cart", 0));
        pushButton->setText(QApplication::translate("tourpurchase", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class tourpurchase: public Ui_tourpurchase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOURPURCHASE_H
