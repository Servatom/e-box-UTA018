#include<iostream>
using namespace std;
#include "Employee.h"
class Developer: public Employee{
    private:
    string skills;
    string role;
    
    public:
    Developer(){}
    Developer(string n,string g,int exp,int empId,string s,string r):Employee(n,g,exp,empId){
        skills=s;
        role=r;
    }
    //fill your code
    
    void displayDetails()
    {
        cout<<"Developer Details"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Experience : "<<experience<<" years"<<endl;
        cout<<"Employee Id : " <<empId<<endl;
        cout<<"Technical Skills : "<<skills<<endl;
        cout<<"Role : "<<role<<endl;
        //fill your code
    }
};
