#include<iostream>
using namespace std;
class Vehicle{
    protected:
    string model;
    int year;
    string manufacturer;
    
    public:
    Vehicle(){}
    Vehicle(string model, int year, string manufacturer)
    {
        this->model=model;
        this->year=year;
        this->manufacturer=manufacturer;
    }
    
};