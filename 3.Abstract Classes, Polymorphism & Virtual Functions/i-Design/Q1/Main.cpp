#include <iostream>
#include <string>
#include "Bike.cpp"
#include "Car.cpp"
#include "Bus.cpp"

using namespace std;

int main(){
    Car car;
    Bike bike;
    Bus bus;

    double dist, carSpeed, busSpeed, bikeSpeed;

    cout<<"Enter the total distance in km"<<endl;
    cin>>dist;

    cout<<"Enter the speed of the bike in km/hr"<<endl;
    cin>>bikeSpeed;

    cout<<"Enter the speed of the bus in km/hr"<<endl;
    cin>>busSpeed;

    cout<<"Enter the speed of the car in km/hr"<<endl;
    cin>>carSpeed;

    car.setValues(dist, carSpeed);
    bike.setValues(dist, bikeSpeed);
    bus.setValues(dist, busSpeed);

    bike.displayTimeTaken();
    bus.displayTimeTaken();
    car.displayTimeTaken();
    
    return 0;
}