#include<iostream>
using namespace std;

class Event{
    private:
    string name;
    string description;
    public:
    Event(){};
    Event(string n,string des){
        name=n;
        description=des;
    }
    string getName(){
        return name;
    }
    string getDescription(){
        return description;
    }
    void setName(string s){
        name=s;
    }
    void setDescription(string d){
        description=d;
    }
};
