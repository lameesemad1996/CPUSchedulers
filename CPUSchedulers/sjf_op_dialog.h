#ifndef SJF_OP_DIALOG_H
#define SJF_OP_DIALOG_H

#include "fcfs.h"
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
#include <Qt>
#include "sjf.h"
#include "sjf_dialog.h"

using namespace std;

namespace Ui {
class SJF_OP_Dialog;
}

class SJF_OP_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SJF_OP_Dialog(QWidget *parent = nullptr);
    ~SJF_OP_Dialog();
    list<process> static getInputs();
    list<slice> static getOP();
    double static getWT();
    void static showOP();
    static QMainWindow window;

private:
    Ui::SJF_OP_Dialog *ui;
};

#endif // SJF_OP_DIALOG_H
