#include<iostream>
#include<stdio.h>
#include<string>
#include <cstdlib>
#include <list>
#include <iterator>
#include"HallBookingBO.cpp"
using namespace std;

int main()
{
    string en,ed,hn,date;
    list <HallBooking> bookingList;
    Event e("birthday","Ross Geller's bday party");
    Hall h("dinosaurus hall",10000);
    HallBooking obj("06/06/2016",e,h );
    bookingList.push_back(obj);
    Event e1("wedding","Chandler and Monica's wedding reception");
    Hall h1("hall2",10000);
    HallBooking obj1("29/11/2015",e1,h1 );
    bookingList.push_back(obj1);
    Event e2("new year party","New Year party by Joey tribianni");
    Hall h2("moon hall",10000);
    HallBooking obj2("01/01/2017",e2,h2 );
    bookingList.push_back(obj2);
    Event e3("fashion show","Rachel Greene's fashion exhibition");
    Hall h3("gala hall",10000);
    HallBooking obj3("16/01/2018",e3,h3 );
    bookingList.push_back(obj3);
    Event e4("charity","Pheobe Buffays's charity for poor kids");
    Hall h4("hall 10",10000);
    HallBooking obj4("02/07/2017",e4,h4 );
    bookingList.push_back(obj4);
    
    cin.ignore(0,'\n');
    cout<<"Enter event name"<<endl;
    getline(cin,en);
    cout<<"Enter event description"<<endl;
    getline(cin,ed);
    cout<<"Enter hall name that you prefer"<<endl;
    getline(cin,hn);
    cin.ignore(0,'\n');
    cout<<"Enter date of event"<<endl;
    cin>>date;
    
    HallBookingBO hbo;
    if(hbo.validateHallBooking(bookingList,HallBooking(date,Event(en,ed),Hall(hn,10000)))){
        cout<<"Your event has been registered succesfully. Thank You!"<<endl;
    }else{
        cout<<"Sorry this hall is not available on this date"<<endl;
    }
    return 0;
}
