#include <iostream>
#include <stdio.h>
#include<list>
using namespace std;
class Hall{
    private:
        string name;
        int contactNumber;
        double costPerDay;
        string ownerName;
    public:
        Hall(){ } 
        Hall(string name, int contactNumber, double costPerDay, string ownerName){
            this->name = name;
            this->contactNumber = contactNumber;
            this->costPerDay = costPerDay;
            this->ownerName = ownerName;
        }
        list<Hall> getHallDetails(){
           
            list<Hall> hallList;
            hallList.push_back(Hall("Chiltington",1798888137,30000,"Robert"));
            hallList.push_back(Hall("Kilmersdon",1761436767,22000,"James"));
            return hallList;
        }
       
        void setName(string name){
            this->name=name;
        }
        string getName(){
            return this->name;
        }
        void setContactNumber(int contactNumber){
            this->contactNumber=contactNumber;
        }
        int getContactNumber(){
            return this->contactNumber;
        }
        void setCostPerDay(double costPerDay){
            this->costPerDay=costPerDay;
        }
        double getCostPerDay(){
            return this->costPerDay;
        }
        void setOwnerName(string ownerName){
            this->ownerName=ownerName;
        }
        string getOwnerName(){
            return this->ownerName;
        }
};