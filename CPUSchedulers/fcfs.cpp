#include "fcfs.h"
#include <iostream>
#include <list>
#include <iterator>
#include <cstdlib>
#include <string>


using namespace std;

process::process()
{
    progressTime = 0;
}

slice::slice()
{
    processName = "";
    endTime = 0;
}

list<slice> FCFS(list<process> inputProcesses)
{

    //sorting the input list of processes
    inputProcesses.sort();

    //arranging the sorted processes in a list of time slices
    list <process>::iterator it;
    it = inputProcesses.begin();
    int currentTime = it->arrivalTime;
    int currentProcess = 0;
    list<slice> resultingList;

    for (it = inputProcesses.begin(); it != inputProcesses.end(); ++it)
    {
        slice currentSlice;
        currentSlice.processName = ("Process" + std::to_string(currentProcess));
        while (1)
        {
            if (currentTime < it->arrivalTime)
                currentTime++;
            else
                break;
        }
        currentSlice.startTime = currentTime;
        currentTime += (it->runningTime);
        currentSlice.endTime = currentTime;
        resultingList.push_back(currentSlice);
        currentProcess++;
    }

    return resultingList;
}

double FCFSavgWaitingtime(list<process> inputProcesses)
{
    double sum = 0;
    double avg = 0;
    list<int> waitingTime;
    list<int>::iterator it1;

    //sorting the input list of processes
    inputProcesses.sort();

    //arranging the sorted processes in a list of time slices
    list <process>::iterator it;
    it = inputProcesses.begin();
    int currentTime = it->arrivalTime;
    int currentProcess = 0;


    for (it = inputProcesses.begin(); it != inputProcesses.end(); ++it)
    {
        slice currentSlice;
        currentSlice.processName = ("Process" + std::to_string(currentProcess));
        while (1)
        {
            if (currentTime < it->arrivalTime)
                currentTime++;
            else
                break;
        }
        currentSlice.startTime = currentTime;
        waitingTime.push_back(currentTime - (it->arrivalTime));
        currentTime += (it->runningTime);
        currentProcess++;
    }

    //sum of waiting times
    for (it1 = waitingTime.begin(); it1 != waitingTime.end(); ++it1)
    {
        sum += *it1;
    }
    avg = sum / (double)currentProcess;
    return avg;
}
