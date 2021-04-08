#include <iostream>
#include "Event.h"
#include <string>

using namespace std;

class Exhibition: public Event{
    private:
        int noOfStalls;
    public:
        Exhibition(){}
        Exhibition(string name, string detail, string type, string organiser, int noOfStalls): Event(name, detail, type, organiser){
            this->noOfStalls = noOfStalls;
        }

        void setNoOfStalls(int noOfStalls){
            this->noOfStalls = noOfStalls;
        }

        int getNoOfStalls(){
            return noOfStalls;
        }

        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Detail : "<<detail<<endl;
            cout<<"Type : "<<type<<endl;
            cout<<"Organiser : "<<organiser<<endl;
            cout<<"No of Stalls : "<<noOfStalls<<endl;
        }
};