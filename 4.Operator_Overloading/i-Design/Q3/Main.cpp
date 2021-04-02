#include <iostream>
#include <stdio.h>
#include <iomanip>
#include "Hall.cpp"
using namespace std;
int main (){
    Hall h, h1;
    string hallName;
    double price;
    int choice;
    cout<<"Enter the hall name\n";
    getline(cin,hallName);
    cout<<"List of event types\n";
    cout<<"1.Wedding\n";
    cout<<"2.Birthday\n";
    cout<<"3.Social Events\n";
    cout<<"Select the event type\n";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Enter the price\n";
            cin>>price;
            h.setHallName(hallName);
            h.setEventType("Wedding");
            h.setPrice(price);
            ++h;
            cout<<"Hall name : "<<h.getHallName()<<endl;
            cout<<"Event Type : "<<h.getEventType()<<endl;
            cout<<"Price : "<<fixed<<setprecision(2)<<h.getPrice()<<endl;
            break;
        case 2:
            cout<<"Enter the price\n";
            cin>>price;
            h.setHallName(hallName);
            h.setEventType("Birthday");
            h.setPrice(price);
            h++;
            cout<<"Hall name : "<<h.getHallName()<<endl;
            cout<<"Event Type : "<<h.getEventType()<<endl;
            cout<<"Price : "<<fixed<<setprecision(2)<<h.getPrice()<<endl;
            break;
        case 3:
            cout<<"Enter the price\n";
            cin>>price;
            h.setHallName(hallName);
            h.setEventType("Social Event");
            h.setPrice(price);
            h--;
            cout<<"Hall name : "<<h.getHallName()<<endl;
            cout<<"Event Type : "<<h.getEventType()<<endl;
            cout<<"Price : "<<fixed<<setprecision(2)<<h.getPrice()<<endl;
            break;
        default:
            cout<<"Invalid Event Type"<<endl;
    }
    return 0;
}
