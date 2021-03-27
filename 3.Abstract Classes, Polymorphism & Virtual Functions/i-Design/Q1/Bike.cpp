#include <iostream>
#include <string>
#include <iomanip>
#include "Vehicle.h"

using namespace std;

class Bike: public Vehicle{
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
                cout<<"Time taken by bike is "<<fixed<<setprecision(2)<<time<<" hours"<<endl;
            }
};