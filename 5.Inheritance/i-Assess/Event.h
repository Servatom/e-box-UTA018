#ifndef EVENT_H
#define EVENT_H
#include <iostream>

using namespace std;

class Event{
    protected:
        string name;
        string detail;
        string type;
        string organiser;
    
    public:
        Event(){}
        Event(string name, string detail, string type, string organiser){
            this->name = name;
            this->detail = detail;
            this->type = type;
            this->organiser = organiser;
        }

        void setName(string name){
            this->name = name;
        }

        void setDetail(string detail){
            this->detail = detail;
        }

        void setType(string type){
            this->type = type;
        }

        void setOrganiser(string organiser){
            this->organiser = organiser;
        }

        string getName(){
            return this->name;
        }

        string getDetail(){
            return this->detail;
        }
        string getType(){
            return this->type;
        }
        string getOrganiser(){
            return this->organiser;
        }
};

#endif