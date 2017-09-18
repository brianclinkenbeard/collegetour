/********************************************************************************
** Form generated from reading UI file 'displaycolleges.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYCOLLEGES_H
#define UI_DISPLAYCOLLEGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_displayColleges
{
public:
    QLabel *second_status;
    QTableView *college_table_view;
    QPushButton *display_colleges_button;

    void setupUi(QDialog *displayColleges)
    {
        if (displayColleges->objectName().isEmpty())
            displayColleges->setObjectName(QStringLiteral("displayColleges"));
        displayColleges->resize(1014, 568);
        second_status = new QLabel(displayColleges);
        second_status->setObjectName(QStringLiteral("second_status"));
        second_status->setGeometry(QRect(50, 480, 161, 71));
        college_table_view = new QTableView(displayColleges);
        college_table_view->setObjectName(QStringLiteral("college_table_view"));
        college_table_view->setGeometry(QRect(10, 20, 831, 471));
        display_colleges_button = new QPushButton(displayColleges);
        display_colleges_button->setObjectName(QStringLiteral("display_colleges_button"));
        display_colleges_button->setGeometry(QRect(850, 20, 151, 61));

        retranslateUi(displayColleges);

        QMetaObject::connectSlotsByName(displayColleges);
    } // setupUi

    void retranslateUi(QDialog *displayColleges)
    {
        displayColleges->setWindowTitle(QApplication::translate("displayColleges", "Dialog", 0));
        second_status->setText(QApplication::translate("displayColleges", "TextLabel", 0));
        display_colleges_button->setText(QApplication::translate("displayColleges", "Display", 0));
    } // retranslateUi

};

namespace Ui {
    class displayColleges: public Ui_displayColleges {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYCOLLEGES_H
