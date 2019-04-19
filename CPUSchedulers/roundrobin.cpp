#include "roundrobin.h"
#include <iostream>
#include <list>
#include <queue>
#include <iterator>
#include <cstdlib>
#include <string>

using namespace std;

list<slice> RoundRobin(list<process> inputProcesses, int quantum, double & waitingTime)
{
    waitingTime = 0;
    double numOfProccesses = inputProcesses.size();

    //Returnable
    list<slice> slices;
    //Queue for arrived processes
    queue<process> Q;
    //Sort by arrival time
    inputProcesses.sort();

    int index = 0;
    //Name the processes
    for(list<process>::iterator i = inputProcesses.begin(); i != inputProcesses.end(); i++)
    {
        i->processName = "Process " + to_string(index);
        index++;
    }

    int time = 0;
    list<process> toBeAdded;
    while(!Q.empty() || !inputProcesses.empty() || !toBeAdded.empty())
    {
        //Put in Queue everything that already arrived
        if(!inputProcesses.empty())
        {
            auto i = inputProcesses.begin();
            while( i != inputProcesses.end())
            {
                if(i->arrivalTime <= time)
                {
                    Q.push(*i);
                    i = inputProcesses.erase(i);
                    //i++;
                }
                else
                {
                    break;
                }
            }
        }
        if(!toBeAdded.empty())
        {
            Q.push(toBeAdded.front());
            toBeAdded.pop_front();
        }
        //Eat from Queue
        if(!Q.empty())
        {
            process CurrentProcess = Q.front();
            Q.pop();

            slice CurrentSlice;

            const int timeRemainingInCurrProcess = CurrentProcess.runningTime - CurrentProcess.progressTime;
            if(timeRemainingInCurrProcess <= quantum)
            {
                //Last run for the process here
                CurrentSlice.processName = CurrentProcess.processName;
                CurrentSlice.startTime = time;
                time += timeRemainingInCurrProcess;
                CurrentSlice.endTime = time;

                //Waiting time = finishTime - burst - arival
                waitingTime += CurrentSlice.endTime - CurrentProcess.runningTime - CurrentProcess.arrivalTime;
            }
            else
            {
                //Process still not finished
                CurrentSlice.processName = CurrentProcess.processName;
                CurrentSlice.startTime = time;
                time += quantum;
                CurrentSlice.endTime = time;
                CurrentProcess.progressTime += quantum;
                toBeAdded.push_back(CurrentProcess);
            }

            slices.push_back(CurrentSlice);
        }
        else
        {
            time++;
        }
    }
    waitingTime /= numOfProccesses;
    return slices;
}
