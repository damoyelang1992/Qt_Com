#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <posix_qextserialport.h>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Posix_QextSerialPort *myCom;
    QTimer *readTimer;

private slots:
    void on_pushButton_clicked();
    void readMyCom();
};

#endif // MAINWINDOW_H
