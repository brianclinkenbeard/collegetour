#ifndef SOUVENIREDITWINDOW_H
#define SOUVENIREDITWINDOW_H

#include <QDialog>

namespace Ui {
class SouvenirEditWindow;
}

class SouvenirEditWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SouvenirEditWindow(QWidget *parent = 0);
    ~SouvenirEditWindow();

private slots:
    void on_pushButton_3_clicked();

//    void on_addSouvenirButton_clicked();

private:
    Ui::SouvenirEditWindow *ui;
};

#endif // SOUVENIREDITWINDOW_H
