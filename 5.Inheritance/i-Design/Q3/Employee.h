#include<iostream>
using namespace std;
#include "Person.h"
class Employee:public Person{
    protected:
    int experience;
    int empId;
    public:
    Employee(){}
    
    Employee(string name,string gender,int experience, int empId):Person(name,gender)
    {
        this->experience=experience;
        this->empId=empId;
    }
    
    
};