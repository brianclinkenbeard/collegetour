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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLogin;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QLabel *label_2;
    QLabel *status;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QPushButton *pushButton_5;
    QWidget *tab_3;
    QTableWidget *tableWidget;
    QPushButton *display_college_list_button;
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *display_souvenirs_radio_button;
    QRadioButton *display_colleges_radio_button;
    QWidget *tab_4;
    QTableWidget *tableWidget_2;
    QProgressBar *progressBar_2;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget_3;
    QTableWidget *tableWidget_4;
    QFrame *line;
    QGroupBox *groupBox;
    QPushButton *find_campus_push_button;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *campusId_lineEdit;
    QLabel *label_4;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *campusName_lineEdit;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_7;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *dropDown_comboBox;
    QPushButton *pushButton_6;
    QMenuBar *menuBar;
    QMenu *menuInfo;
    QMenu *menuExit;
    QMenu *menuAdmin;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1210, 749);
        actionLogin = new QAction(MainWindow);
        actionLogin->setObjectName(QStringLiteral("actionLogin"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Calligraphy"));
        font.setPointSize(8);
        tabWidget->setFont(font);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 531, 121));
        label_2->setFrameShape(QFrame::WinPanel);
        label_2->setFrameShadow(QFrame::Raised);
        label_2->setLineWidth(14);
        label_2->setMidLineWidth(14);
        status = new QLabel(tab_2);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(260, 260, 181, 41));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 160, 531, 391));
        label_6->setFrameShape(QFrame::WinPanel);
        label_6->setFrameShadow(QFrame::Raised);
        label_6->setLineWidth(14);
        label_6->setMidLineWidth(14);
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 570, 151, 51));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(180, 570, 161, 51));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(560, 20, 591, 591));
        label_7->setFrameShape(QFrame::WinPanel);
        label_7->setFrameShadow(QFrame::Raised);
        label_7->setLineWidth(14);
        label_7->setMidLineWidth(14);
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(360, 570, 171, 51));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableWidget = new QTableWidget(tab_3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(18, 10, 911, 611));
        tableWidget->setFrameShape(QFrame::Box);
        tableWidget->setFrameShadow(QFrame::Sunken);
        tableWidget->setLineWidth(2);
        tableWidget->setMidLineWidth(2);
        display_college_list_button = new QPushButton(tab_3);
        display_college_list_button->setObjectName(QStringLiteral("display_college_list_button"));
        display_college_list_button->setGeometry(QRect(950, 290, 221, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(12);
        display_college_list_button->setFont(font1);
        progressBar = new QProgressBar(tab_3);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(950, 590, 221, 23));
        progressBar->setValue(1);
        progressBar->setTextVisible(false);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(950, 530, 221, 51));
        pushButton->setFont(font1);
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(950, 180, 225, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        display_souvenirs_radio_button = new QRadioButton(layoutWidget);
        display_souvenirs_radio_button->setObjectName(QStringLiteral("display_souvenirs_radio_button"));
        QFont font2;
        font2.setFamily(QStringLiteral("Lucida Calligraphy"));
        font2.setPointSize(12);
        display_souvenirs_radio_button->setFont(font2);

        verticalLayout_2->addWidget(display_souvenirs_radio_button);

        display_colleges_radio_button = new QRadioButton(layoutWidget);
        display_colleges_radio_button->setObjectName(QStringLiteral("display_colleges_radio_button"));
        display_colleges_radio_button->setFont(font2);

        verticalLayout_2->addWidget(display_colleges_radio_button);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableWidget_2 = new QTableWidget(tab_4);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(410, 20, 751, 101));
        tableWidget_2->setFrameShape(QFrame::Box);
        tableWidget_2->setLineWidth(5);
        progressBar_2 = new QProgressBar(tab_4);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(20, 590, 351, 23));
        progressBar_2->setValue(1);
        progressBar_2->setTextVisible(false);
        progressBar_2->setOrientation(Qt::Horizontal);
        progressBar_2->setInvertedAppearance(false);
        progressBar_2->setTextDirection(QProgressBar::TopToBottom);
        pushButton_2 = new QPushButton(tab_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 520, 171, 51));
        pushButton_2->setFont(font2);
        tableWidget_3 = new QTableWidget(tab_4);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(410, 370, 751, 251));
        tableWidget_3->setFrameShape(QFrame::Box);
        tableWidget_3->setLineWidth(5);
        tableWidget_3->setTextElideMode(Qt::ElideNone);
        tableWidget_3->setSortingEnabled(true);
        tableWidget_4 = new QTableWidget(tab_4);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(410, 140, 751, 211));
        tableWidget_4->setFrameShape(QFrame::Box);
        tableWidget_4->setLineWidth(5);
        tableWidget_4->setGridStyle(Qt::NoPen);
        line = new QFrame(tab_4);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(380, 10, 20, 601));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(9, 50, 361, 221));
        find_campus_push_button = new QPushButton(groupBox);
        find_campus_push_button->setObjectName(QStringLiteral("find_campus_push_button"));
        find_campus_push_button->setGeometry(QRect(10, 170, 111, 31));
        find_campus_push_button->setFont(font2);
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 110, 275, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        campusId_lineEdit = new QLineEdit(layoutWidget1);
        campusId_lineEdit->setObjectName(QStringLiteral("campusId_lineEdit"));

        horizontalLayout_2->addWidget(campusId_lineEdit);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 70, 55, 16));
        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 30, 298, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        campusName_lineEdit = new QLineEdit(layoutWidget2);
        campusName_lineEdit->setObjectName(QStringLiteral("campusName_lineEdit"));

        horizontalLayout->addWidget(campusName_lineEdit);

        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(9, 310, 361, 161));
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 70, 101, 31));
        pushButton_7->setFont(font2);
        layoutWidget3 = new QWidget(groupBox_2);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 10, 341, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        dropDown_comboBox = new QComboBox(layoutWidget3);
        dropDown_comboBox->setObjectName(QStringLiteral("dropDown_comboBox"));

        horizontalLayout_3->addWidget(dropDown_comboBox);

        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(200, 520, 171, 51));
        pushButton_6->setFont(font2);
        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1210, 26));
        menuInfo = new QMenu(menuBar);
        menuInfo->setObjectName(QStringLiteral("menuInfo"));
        menuExit = new QMenu(menuBar);
        menuExit->setObjectName(QStringLiteral("menuExit"));
        menuAdmin = new QMenu(menuBar);
        menuAdmin->setObjectName(QStringLiteral("menuAdmin"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuInfo->menuAction());
        menuBar->addAction(menuExit->menuAction());
        menuBar->addAction(menuAdmin->menuAction());
        menuAdmin->addAction(actionLogin);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionLogin->setText(QApplication::translate("MainWindow", "Login", 0));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">Welcome to the College Tour Program</span></p></body></html>", 0));
        status->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "INFORMATION", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Survey", 0));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
        pushButton_5->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", " Main Window", 0));
        display_college_list_button->setText(QApplication::translate("MainWindow", "Display", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Help", 0));
        display_souvenirs_radio_button->setText(QApplication::translate("MainWindow", "Display Souvenirs", 0));
        display_colleges_radio_button->setText(QApplication::translate("MainWindow", "Display Colleges", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Display Campuses", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Help", 0));
        groupBox->setTitle(QString());
        find_campus_push_button->setText(QApplication::translate("MainWindow", "Find", 0));
        label_3->setText(QApplication::translate("MainWindow", "Campus ID", 0));
        label_4->setText(QApplication::translate("MainWindow", "OR", 0));
        label->setText(QApplication::translate("MainWindow", "Campus Name", 0));
        groupBox_2->setTitle(QString());
        pushButton_7->setText(QApplication::translate("MainWindow", "Find", 0));
        label_5->setText(QApplication::translate("MainWindow", "Distance From", 0));
        pushButton_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Search Campuses", 0));
        menuInfo->setTitle(QApplication::translate("MainWindow", "Info", 0));
        menuExit->setTitle(QApplication::translate("MainWindow", "Exit", 0));
        menuAdmin->setTitle(QApplication::translate("MainWindow", "Admin", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
