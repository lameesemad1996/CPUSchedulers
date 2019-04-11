#ifndef FCFS_OP_DIALOG_H
#define FCFS_OP_DIALOG_H

#include "fcfs.h"
#include "fcfs_dialog.h"
#include <QWidget>
#include <QLabel>
#include <QLayout>
#include <QLineEdit>
#include<QHBoxLayout>
#include <string>
#include<iostream>
#include <list>
#include <iterator>
#include <cstdlib>
#include <QMainWindow>

using namespace std;

namespace Ui {
class FCFS_OP_Dialog;
}

class FCFS_OP_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit FCFS_OP_Dialog(QWidget *parent = nullptr);
    ~FCFS_OP_Dialog();
    list<process> static getInputs();
    list<slice> static getOP();
    void static showOP();
    static QMainWindow window;


private:
    Ui::FCFS_OP_Dialog *ui;
};

#endif

