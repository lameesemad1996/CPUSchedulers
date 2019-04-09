#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fcfs_dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    //FCFS_Dialog * fcfsDialog;     //Modaless approach

private slots:
    void fcfs_pressed();
    void sjf_pressed();
    void priority_pressed();
    void rr_pressed();
};

#endif // MAINWINDOW_H
