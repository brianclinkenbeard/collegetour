#ifndef PURCHASESOUVENIRS_H
#define PURCHASESOUVENIRS_H

#include <QDialog>

namespace Ui {
class purchaseSouvenirs;
}

class purchaseSouvenirs : public QDialog
{
    Q_OBJECT

public:
    explicit purchaseSouvenirs(QWidget *parent = 0);
    ~purchaseSouvenirs();

private:
    Ui::purchaseSouvenirs *ui;
};

#endif // PURCHASESOUVENIRS_H
