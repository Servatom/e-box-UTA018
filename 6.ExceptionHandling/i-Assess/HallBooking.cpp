#include<iostream>
#include"Hall.cpp"
#include"Event.cpp"

using namespace std;

class HallBooking{
    private:
    string dateOfBooking;
    Event event;
    Hall hall;
    public:
    HallBooking(){}
    HallBooking(string date,Event e,Hall h){
        dateOfBooking=date;
        event =e;
        hall=h;
    }
    Hall getHall(){
        return hall;
    }
    string getDateOfBooking(){
        return dateOfBooking;
    }
    Event getEvent(){
        return event;
    }
    void setHall(Hall h){
        hall=h;
    }
    void setEvent(Event e){
        event=e;
    }
    void setDateOfBooking(string date){
        dateOfBooking=date;
    }
    
};
