#include<iostream>
using namespace std;
class Employee{
    protected:
    string name;
    int experience;
    int empId;
    public:
    Employee(){}
    
    Employee(string name,int experience, int empId)
    {
        this->name=name;
        this->experience=experience;
        this->empId=empId;
    }
};
