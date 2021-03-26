#ifndef ABSTRACT_CLASS
#define ABSTRACT_CLASS
#include <iostream>
#include<stdio.h>
using namespace std;
class Ticket 
{
    public:
    virtual void calculateCost(int noOfTickets)=0;
};
#endif


