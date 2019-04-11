#ifndef FCFS_H
#define FCFS_H

#include <iostream>
#include <list>
#include <iterator>
#include <cstdlib>
#include <string>

using namespace std;

//class definitions
class slice
{
public:
    string processName;
    int startTime;
    int endTime;

    slice();
};
class process
{
public:
    int runningTime;
    int arrivalTime;
};

//Process class comparison operator used in sort definition: comparison by arrival time
inline
bool operator<(process const & lhs, process const & rhs) {return lhs.arrivalTime < rhs.arrivalTime;}

//function definitions
/*!
    input: list of processes to be scheduled
    output: CPU time slices after scheduling
*/
list<slice> FCFS (list<process> inputProcesses);

/*!
    input: list of processes to be scheduled
    output: average waiting time of all processes
*/
double FCFSavgWaitingtime(list<process> inputProcesses);

#endif // FCFS_H
