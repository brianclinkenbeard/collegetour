/********************************************************************************
** Form generated from reading UI file 'souvenireditwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOUVENIREDITWINDOW_H
#define UI_SOUVENIREDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SouvenirEditWindow
{
public:
    QPushButton *addSouvenirButton;
    QPushButton *deleteSouvenirButton;
    QPushButton *pushButton_3;
    QComboBox *souvenirBox;

    void setupUi(QDialog *SouvenirEditWindow)
    {
        if (SouvenirEditWindow->objectName().isEmpty())
            SouvenirEditWindow->setObjectName(QStringLiteral("SouvenirEditWindow"));
        SouvenirEditWindow->resize(492, 416);
        addSouvenirButton = new QPushButton(SouvenirEditWindow);
        addSouvenirButton->setObjectName(QStringLiteral("addSouvenirButton"));
        addSouvenirButton->setGeometry(QRect(120, 340, 93, 28));
        deleteSouvenirButton = new QPushButton(SouvenirEditWindow);
        deleteSouvenirButton->setObjectName(QStringLiteral("deleteSouvenirButton"));
        deleteSouvenirButton->setGeometry(QRect(290, 340, 101, 28));
        pushButton_3 = new QPushButton(SouvenirEditWindow);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 10, 93, 28));
        souvenirBox = new QComboBox(SouvenirEditWindow);
        souvenirBox->setObjectName(QStringLiteral("souvenirBox"));
        souvenirBox->setGeometry(QRect(130, 160, 241, 22));

        retranslateUi(SouvenirEditWindow);

        QMetaObject::connectSlotsByName(SouvenirEditWindow);
    } // setupUi

    void retranslateUi(QDialog *SouvenirEditWindow)
    {
        SouvenirEditWindow->setWindowTitle(QApplication::translate("SouvenirEditWindow", "Dialog", 0));
        addSouvenirButton->setText(QApplication::translate("SouvenirEditWindow", "Add Souvenir", 0));
        deleteSouvenirButton->setText(QApplication::translate("SouvenirEditWindow", "Delete Souvenir", 0));
        pushButton_3->setText(QApplication::translate("SouvenirEditWindow", "Back", 0));
        souvenirBox->clear();
        souvenirBox->insertItems(0, QStringList()
         << QApplication::translate("SouvenirEditWindow", "Coaster Set", 0)
         << QApplication::translate("SouvenirEditWindow", "Lawn Chair", 0)
         << QApplication::translate("SouvenirEditWindow", "Reclining Chair", 0)
         << QApplication::translate("SouvenirEditWindow", "Temporary Tattoos", 0)
         << QApplication::translate("SouvenirEditWindow", "Water Bottle", 0)
         << QApplication::translate("SouvenirEditWindow", "Car Magnet", 0)
         << QApplication::translate("SouvenirEditWindow", "Cufflinks", 0)
         << QApplication::translate("SouvenirEditWindow", "Ring", 0)
         << QApplication::translate("SouvenirEditWindow", "Watch", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class SouvenirEditWindow: public Ui_SouvenirEditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOUVENIREDITWINDOW_H
