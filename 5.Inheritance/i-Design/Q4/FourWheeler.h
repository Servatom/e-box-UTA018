#include<iostream>
using namespace std;
class FourWheeler{
    protected:
    string gearType;
    string fuelType;
    
    public:
    FourWheeler(){}
    FourWheeler(string gearType, string fuelType)
    {
        this->gearType=gearType;
        this->fuelType=fuelType;
    }
    
   
};