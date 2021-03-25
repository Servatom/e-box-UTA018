#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    string gender;
    public:
    Person(){}
    
    Person(string name,string gender)
    {
        this->name=name;
        this->gender=gender;
    }
    
    
};