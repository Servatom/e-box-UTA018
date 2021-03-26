#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Vehicle.h"
using namespace std;
class Bike:public Vehicle
{
	double distance;
	double speed;
	public:	
	void setValues(double distance, double speed)
	{
        this->distance=distance;
        this->speed=speed;
	} 
	void displayTimeTaken(){
        double time=distance/speed;
        cout<<"Time taken by bike is "<<fixed<<setprecision(2)<<time<<" hours"<<endl;
	}
};
