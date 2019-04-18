#ifndef SJF_H
#define SJF_H

#include "fcfs.h"
#include <iostream>
#include <list>
#include <queue>
#include <iterator>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;


bool comp_sjf(const process &a, const process &b);
bool comp_2_sjf(const process &a, const process &b);
list<slice> SJF(list<process> pros);
double WaitingTimeSJF(list<process> pros);

#endif // SJF_H
