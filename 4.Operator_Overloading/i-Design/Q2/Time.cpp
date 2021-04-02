#include<iostream>
using namespace std;
class Time
{
    int hours,minutes,seconds;
    public:
    Time()  
    {  
        hours=0;  
        minutes=0;  
        seconds=0;  
    }  
    void setHours(int hour)
    {
        this->hours=hour;
    }
    void setMinutes(int minute)
    {
        this->minutes=minute;
    }
    void setSeconds(int second)
    {
        this->seconds=second;
    }
    int getHours()
    {
        return this->hours;
    }
    int getMinutes()
    {
        return this->minutes;
    }
    int getSeconds()
    {
        return this->seconds;
    }
    friend Time operator+(Time& t1,Time& t2);
};
