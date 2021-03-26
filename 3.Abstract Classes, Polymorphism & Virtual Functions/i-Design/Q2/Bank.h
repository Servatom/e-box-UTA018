#ifndef ABSTRACT_CLASS
#define ABSTRACT_CLASS
#include <iostream>
#include<stdio.h>
using namespace std;
class Bank 
{
    public:
    virtual void deposit(double cash)=0;
    virtual void withdraw(double cash)=0;
    virtual void checkBalance()=0;
};
#endif

