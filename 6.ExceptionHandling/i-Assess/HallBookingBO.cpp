#include<iostream>
#include<list>
#include"HallBooking.cpp"
#include<iterator>
using namespace std;

class HallBookingBO{
    public:
    bool validateHallBooking(list<HallBooking> lst,HallBooking hallObj){
        try{
            for(HallBooking h: lst){
                if(h.getHall()==hallObj.getHall()&&h.getDateOfBooking()==hallObj.getDateOfBooking()){
                    throw 1;
                }
            }
        }catch(...){
            return false;
        }
        return true;
    }
};