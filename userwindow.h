#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

class userwindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit userwindow(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // USERWINDOW_H
