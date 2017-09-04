#ifndef USERWINDOW_H
#define USERWINDOW_H



namespace Ui {
class userwindow;
}

class userwindow : public QDialog
{
    Q_OBJECT

public:
    explicit userwindow(QWidget *parent = 0);
    ~userwindow();

private:
    Ui::userwindow *ui;
};

#endif // USERWINDOW_H
