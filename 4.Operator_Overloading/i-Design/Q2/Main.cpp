#include <iostream>
#include "Time.cpp"
#include <stdio.h>
using namespace std;

Time operator+(Time& t1,Time& t2){
    Time temp;
    temp.hours=t1.hours+t2.hours;
    temp.minutes=t1.minutes+t2.minutes;
    temp.seconds=t1.seconds+t2.seconds;
    int incrMin= temp.seconds/60;
    temp.seconds%=60;
    temp.minutes+=incrMin;
    int incrHrs=temp.minutes/60;
    temp.minutes%=60;
    temp.hours+=incrHrs;
    temp.hours%=24;
    cout<<"The sum of given time is:"<<endl;
    printf("%02d:%02d:%02d\n",temp.hours,temp.minutes,temp.seconds);
    return temp;
}


int main(){
    Time t,t1,t2;
    int hr,min,sec;
    cout<<"Enter the first time:\n";
    cin>>hr;
    cin>>min;
    cin>>sec;
    t1.setHours(hr);
    t1.setMinutes(min);
    t1.setSeconds(sec);
    cout<<"Enter the second time:\n";
    cin>>hr;
    cin>>min;
    cin>>sec;
    t2.setHours(hr);
    t2.setMinutes(min);
    t2.setSeconds(sec);
    t=t1+t2;
    return 0;
}
