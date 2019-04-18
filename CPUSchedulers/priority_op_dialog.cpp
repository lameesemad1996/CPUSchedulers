#include "priority_op_dialog.h"
#include "ui_priority_op_dialog.h"
#include "fcfs.h"
#include "priority.h"
#include "priority_dialog.h"
#include <QWidget>
#include <QLabel>
#include <QLayout>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QtCharts/QChartView>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarLegendMarker>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QChart>
#include <QtCharts/QLegend>
#include <QMainWindow>
#include <string>
#include <iostream>
#include <list>
#include <iterator>
#include <cstdlib>
#include <QColor>
#include<Qt>

using namespace std;

Priority_OP_Dialog::Priority_OP_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Priority_OP_Dialog)
{
    ui->setupUi(this);
}

Priority_OP_Dialog::~Priority_OP_Dialog()
{
    delete ui;
}

list<process> Priority_OP_Dialog::getInputs()
{
   Priority_Dialog::lengthFlag[Priority_Dialog::lengthFlagIndex] = Priority_Dialog::length;

   list<process> inputDataList;
   for (int i = 0; i < ((Priority_Dialog::length) - (Priority_Dialog::lengthFlag[Priority_Dialog::lengthFlagIndex-1])) ; i++)
   {
       inputDataList.push_back(*(Priority_Dialog::inputProcessesPtrs[i]));
   }
   return inputDataList;
}

list<slice> Priority_OP_Dialog::getOP()
{
    list<slice> opList;
    opList = Priority(Priority_OP_Dialog::getInputs());
    return opList;
}

double Priority_OP_Dialog::getWT()
{
    double result;
    result = WaitingTime(Priority_OP_Dialog::getInputs());
    return result;
}

void Priority_OP_Dialog::showOP()
{
    list<slice> opList;
    double WT;
    opList = getOP();
    WT = getWT();
    list<slice>::iterator it = opList.begin();
    int prevEndTime = 0;
    //determining number of processes
    unsigned long long length = opList.size();


    //creating sets (a set for each process)
    QtCharts::QBarSet* sets[20]; //limits processes to 20

    //append sets to series
    QtCharts::QHorizontalStackedBarSeries *series = new QtCharts::QHorizontalStackedBarSeries();
    for(int i = 0; i < length; i++)
    {
        if(i == 0)
        {
            if(it->startTime > 0)
            {
                sets[i] = new QtCharts::QBarSet(QString::fromStdString(""));
                *sets[i] << (it->startTime);
                sets[i]->setColor(Qt::white);
                series->append(sets[i]);
                i++;
                length++;
            }
        }
        else if(i > 0)
        {
             if(prevEndTime < (it->startTime))
             {
                 sets[i] = new QtCharts::QBarSet(QString::fromStdString(""));
                 *sets[i] << ((it->startTime) - prevEndTime);
                 sets[i]->setColor(Qt::white);
                 series->append(sets[i]);
                 i++;
                 length++;
             }
        }
        sets[i] = new QtCharts::QBarSet(QString::fromStdString(it->processName));
        *sets[i] << ((it->endTime)-(it->startTime));
        series->append(sets[i]);
        prevEndTime = it->endTime;
        it++;
    }

    //chart creation
    QtCharts::QChart *chart = new QtCharts::QChart();
    chart->addSeries(series);
    chart->setTitle("Avg Waiting Time: " + (QString::fromStdString(to_string(WT))));

    QtCharts::QValueAxis *axisX = new QtCharts::QValueAxis();
    axisX->setTickType(QtCharts::QValueAxis::TickType::TicksDynamic);
    axisX->setTickInterval(1);
    axisX->setTickAnchor(0);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    //legend
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    //adding a view
    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);


    //set chart to be central widget and set size of chart window
    QMainWindow* windowPtr = new QMainWindow();
    windowPtr->setCentralWidget(chartView);
    windowPtr->resize(420, 300);
    windowPtr->show();
}

