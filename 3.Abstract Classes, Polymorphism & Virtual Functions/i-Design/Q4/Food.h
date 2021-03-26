#ifndef ABSTRACT_CLASS
#define ABSTRACT_CLASS
#include <iostream>
#include<stdio.h>
using namespace std;
class Food 
{
    public:
    virtual void displayMenu()=0;
    virtual void calculateBill()=0;
};
#endif

