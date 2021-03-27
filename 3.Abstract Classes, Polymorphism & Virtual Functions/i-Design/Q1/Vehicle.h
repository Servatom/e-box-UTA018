#ifndef ABSTRACT_CLASS
#define ABSTRACT_CLASS
#include <iostream>
#include<stdio.h>
using namespace std;
class Vehicle 
{
    public:
    virtual void displayTimeTaken()=0;   //pure virtual function
};
#endif