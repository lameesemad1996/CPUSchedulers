#ifndef ROUNDROBIN_H
#define ROUNDROBIN_H

#include <iostream>
#include <list>
#include <iterator>
#include <cstdlib>
#include <string>
#include "fcfs.h"

using namespace std;



list<slice> RoundRobin(list<process> inputProcesses, int quantum, double & waitingTime);


#endif // ROUNDROBIN_H
