#include <iostream>
using namespace std;
class Hall{
    private:
        string hallName;
        string eventType;
        double price;
    public:
        Hall operator++(){
            price=1.05*price;
            return *this;
        }
        Hall operator++(int){
            return *this;
        }
        Hall operator--(int){
            price=0.9*price;
            return *this;
        }
        Hall (){
        }
        Hall (string hallName,string eventType, double price){
            this->eventType = eventType;
            this->hallName = hallName;
            this->price = price;
        }
        void setHallName(string hallName){
            this->hallName = hallName;
        }
        void setEventType (string eventType){
            this->eventType = eventType;
        }
        void setPrice (double price){
            this->price = price;
        }
        string getHallName(){
            return this->hallName;
        }
        string getEventType (){
            return this->eventType;
        }
        double getPrice (){
            return this->price;
        }      
};