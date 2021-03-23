#include<iostream>
using namespace std;
#include "Employee.h"
class Developer: public Employee{
    private:
    string skills;
    string role;
    
    public:
    Developer(){}
    
    Developer(string name,int experience,int empId,string skills,string role):Employee(name,experience,empId)
    {
        this->skills=skills;
        this->role=role;
    }
    
    void displayDetails()
    {
        //fill your code
        cout<<"Employee Details"<<endl;
        cout<<"Name : "<<this->name<<endl;
        cout<<"Experience : "<<this->experience<<" years"<<endl;
        cout<<"Employee Id : "<<this->empId<<endl;
        cout<<"Technical Skills : "<<this->skills<<endl;
        cout<<"Role : "<<this->role<<endl;
    }
};

