#ifndef RR_OP_DIALOG_H
#define RR_OP_DIALOG_H

#include <QDialog>
#include "fcfs.h"
#include "rr_dialog.h"
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
#include <QColor>
#include<Qt>

using namespace std;


namespace Ui {
class RR_OP_Dialog;
}

class RR_OP_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit RR_OP_Dialog(QWidget *parent = nullptr);
    ~RR_OP_Dialog();
    list<process> static getInputs();
    list<slice> static getOP(double &WT);
    void static showOP();
    static QMainWindow window;

private:
    Ui::RR_OP_Dialog *ui;
};

#endif // RR_OP_DIALOG_H
