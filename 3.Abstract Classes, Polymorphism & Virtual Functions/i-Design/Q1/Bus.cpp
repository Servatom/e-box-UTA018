#include <iostream>
#include <string>
#include "Vehicle.h"
#include <iomanip>

using namespace std;

class Bus: public Vehicle{
    private:
        double distance;
        double speed;
    public:
        void setValues(double distance, double speed){
            this->distance = distance;
            this->speed = speed;
        }

        void displayTimeTaken(){
            double time = distance / speed;
            cout<<"Time taken by bus is "<<fixed<<setprecision(2)<<time<<" hours"<<endl;
        }
};