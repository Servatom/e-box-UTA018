#include<iostream>
#include<string>
using namespace std;
#include "FourWheeler.h"
#include "Vehicle.h"

class Truck: public FourWheeler, public Vehicle{
    private:
    int cargoCapacity;
    string size;
    
    public:
    Truck(){}
    Truck(string m,int y,string manu,string gt,string ft,int cc,string size):Vehicle(m,y,manu),FourWheeler(gt,ft){
        cargoCapacity=cc;
        this->size=size;
    }
    //fill your code
    
    void displayDetails()
    {
        cout<<"Truck Details"<<endl;
        cout<<"Model : "<<model<<endl;
        cout<<"Year : "<<year<<endl;
        cout<<"Manufacturer : "<<manufacturer<<endl;
        cout<<"Gear Type : "<<gearType<<endl;
        cout<<"Fuel Type : "<<fuelType<<endl;
        cout<<"Cargo Capacity : "<<cargoCapacity<<" MT"<<endl;
        cout<<"Size : "<<size<<endl;
        //fill your code

    }
};
