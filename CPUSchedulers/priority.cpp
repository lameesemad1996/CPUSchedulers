#include "fcfs.h"
#include <iostream>
#include <list>
#include <queue>
#include <iterator>
#include <cstdlib>
#include <string>
#include <algorithm>
#include "priority.h"


using namespace std;


bool comp(const process &a, const process &b)
{
    if(a.arrivalTime == b.arrivalTime)
    {
        return a.priority<b.priority;
    }
    else
    {
        return a.arrivalTime<b.arrivalTime;
    }
}

bool comp_2(const process &a, const process &b)
{
     return a.priority<b.priority;
}


list<slice> Priority(list<process> pros)
{
    //sort(pros.begin(),pros.end(),comp);

    list <process>::iterator it0 = pros.begin();
    list <process>::iterator it1;
    list<process>::iterator it2;
    list<process> prosNew;
    list<process> prosRest;
    pros.sort(comp);
    list<slice> Slices;
    int time = pros.begin()->arrivalTime;
    int length = pros.size();
    int index = 0;

    for(int i = 0; i < length; i++)
    {
        it0 = pros.begin();

        slice Slice;

        while (1)
        {
            if (time < it0->arrivalTime)
                time++;
            else
                break;
        }

        Slice.startTime = time;
        time += it0->runningTime;
        Slice.endTime = time;
        Slice.processName = "Process " + to_string(index);

        Slices.push_back(Slice);

        pros.pop_front();

        it0 = pros.begin();


        for(it1 = pros.begin(); it1 != pros.end(); it1++)
        {
            if(it1->arrivalTime < time)
            {
                prosNew.push_back(*it1);
            }
            else
            {
                prosRest.push_back(*it1);
            }
        }

        prosNew.sort(comp_2);

        pros.clear();

        for(it2 = prosNew.begin(); it2 != prosNew.end(); it2++)
        {
            pros.push_back(*it2);
        }
        for(it2 = prosRest.begin(); it2 != prosRest.end(); it2++)
        {
            pros.push_back(*it2);
        }

        prosNew.clear();
        prosRest.clear();

        index++;
    }
    return Slices;
}

double WaitingTime(list<process> pros)
{
    double sum = 0;
    double avg = 0;
    list<int> waitingTime;
    list<int>::iterator wtit;

    //sort(pros.begin(),pros.end(),comp);

    list <process>::iterator it0 = pros.begin();
    list <process>::iterator it1;
    list<process>::iterator it2;
    list<process> prosNew;
    list<process> prosRest;
    pros.sort(comp);
    list<slice> Slices;
    int time = pros.begin()->arrivalTime;
    int length = pros.size();
    int index = 0;

    for(int i = 0; i < length; i++)
    {
        it0 = pros.begin();
        slice Slice;
        while (1)
        {
            if (time < it0->arrivalTime)
                time++;
            else
                break;
        }

        Slice.startTime = time;

        time += it0->runningTime;

        Slice.endTime = time;

        Slice.processName = "Process " + to_string(index);

        waitingTime.push_back(Slice.startTime - it0->arrivalTime);

        Slices.push_back(Slice);

        pros.pop_front();

        it0 = pros.begin();


        for(it1 = pros.begin(); it1 != pros.end(); it1++)
        {
            if(it1->arrivalTime < time)
            {
                prosNew.push_back(*it1);
            }
            else
            {
                prosRest.push_back(*it1);
            }
        }

        prosNew.sort(comp_2);

        pros.clear();

        for(it2 = prosNew.begin(); it2 != prosNew.end(); it2++)
        {
            pros.push_back(*it2);
        }
        for(it2 = prosRest.begin(); it2 != prosRest.end(); it2++)
        {
            pros.push_back(*it2);
        }

        prosNew.clear();
        prosRest.clear();

        index++;
    }

    //sum of waiting times
    for (wtit = waitingTime.begin(); wtit != waitingTime.end(); ++wtit)
    {
        sum += *wtit;
    }
    avg = sum / (double)length;
    return avg;

    /*//sort(pros.begin(),pros.end(),comp);
    pros.sort(comp);
    double serviceTime = pros.begin()->arrivalTime;
    double waitingTime = 0;
    for(auto i = pros.begin(); i != pros.end(); i++)
    {
        waitingTime += serviceTime - i->arrivalTime;
        serviceTime += i->runningTime;
    }
    return waitingTime/pros.size();
    */
}
