#include "rr_op_dialog.h"
#include "ui_rr_op_dialog.h"
#include "fcfs.h"
#include "rr_dialog.h"
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
#include <string>
#include "roundrobin.h"
using namespace std;

RR_OP_Dialog::RR_OP_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RR_OP_Dialog)
{
    ui->setupUi(this);
}

RR_OP_Dialog::~RR_OP_Dialog()
{
    delete ui;
}

list<process> RR_OP_Dialog::getInputs()
{
   RR_Dialog::lengthFlag[RR_Dialog::lengthFlagIndex] = RR_Dialog::length;

   list<process> inputDataList;
   for (int i = 0; i < ((RR_Dialog::length) - (RR_Dialog::lengthFlag[RR_Dialog::lengthFlagIndex-1])) ; i++)
   {
       inputDataList.push_back(*(RR_Dialog::inputProcessesPtrs[i]));

   }
   return inputDataList;
}

list<slice> RR_OP_Dialog::getOP()
{
    list<slice> opList;
    opList = RoundRobin(RR_OP_Dialog::getInputs(), RR_Dialog::quantumTime);
    return opList;
}

void RR_OP_Dialog::showOP()
{
    list<slice> opList;
    opList = getOP();
    list<slice>::iterator it = opList.begin();
    int prevEndTime = 0;
    string prevProcessNames[20];
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
        list<slice>::iterator it1 = it;
        it1++;
        int newEndTime = it->endTime;
        bool flag = false;
        // bool labelFlag = false;
        while(it->processName == it1->processName)
        {
            newEndTime = it1->endTime;
            it1++;
            length--;
            flag = true;
        }
        /*
         * for(int x = 0; x < i; x++)
        {
            if((it->processName) == prevProcessNames[x])
            {
                labelFlag = true;
                break;
            }
        }
        */
        sets[i] = new QtCharts::QBarSet(QString::fromStdString(it->processName));
        *sets[i] << (newEndTime-(it->startTime));
        series->append(sets[i]);
        if (flag == true)
        {
            it1--;
            prevEndTime = it1->endTime;
            prevProcessNames[i] = it1->processName;
            it1++;
            it = it1;
        }

        else
        {
            it++;
            prevEndTime = it->endTime;
            prevProcessNames[i] = it->processName;
        }

    }

    //chart creation
    QtCharts::QChart *chart = new QtCharts::QChart();
    chart->addSeries(series);
    chart->setTitle("Gantt Chart");

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


