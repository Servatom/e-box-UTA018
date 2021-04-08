#include <iostream>
#include "Event.h"

using namespace std;

class StageEvent: public Event{
    private:
        int noOfSeats;

    public:
        StageEvent(){}
        StageEvent(string name, string detail, string type, string organiser, int noOfSeats): Event(name, detail, type, organiser){
            this->noOfSeats = noOfSeats;
        }

        void setNoOfSeats(int noOfSeats){
            this->noOfSeats = noOfSeats;
        }

        int getNoOfSeats(){
            return noOfSeats;
        }

        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Detail : "<<detail<<endl;
            cout<<"Type : "<<type<<endl;
            cout<<"Organiser : "<<organiser<<endl;
            cout<<"No of Seats : "<<noOfSeats<<endl; 
        }
};