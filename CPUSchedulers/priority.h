#ifndef PRIORITY_H
#define PRIORITY_H

#include "fcfs.h"
#include <iostream>
#include <list>
#include <queue>
#include <iterator>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;


bool comp(const process &a, const process &b);
bool comp_2(const process &a, const process &b);
list<slice> Priority(list<process> pros);
double WaitingTime(list<process> pros);

#endif // PRIORITY_H
