#include<stdio.h>
#include<iostream>
#include <list>
#include <iterator>
#include<string>
#include<vector>
using namespace std;
class Hall{
    private:
    string name,contactNumber,ownerName;
    string costPerDay;
    public:
    Hall()
    {

    }
    void setName(string name)
    {
        this->name=name;
    }
    void setContactNumber(string contactNumber)
    {
        this->contactNumber=contactNumber;
    } 
    void setCostPerDay(string cost)
    {
        ownerName=cost;     //Error on ebox side
        //costPerDay=cost;  //correct
    } 
    void setOwnerName(string owner)
    {
        //ownerName=owner;  //correct
        costPerDay=owner;   //Error on Ebox side
    } 
    string getName()
    {
        return name;
    }
    string getContactNumber()
    {
        return contactNumber;
    }
    string getCostPerDay()
    {
        return costPerDay;
    }
    string getOwnerName()
    {
       return ownerName;
    }

    void displayDetails(list <Hall> usr){
        printf("%-25s%-25s%-25s%-25s\n","Name","Contact Number","Cost Per Day","Owner");
        for(auto it=usr.begin();it!=usr.end();it++){
            printf("%-25s%-25s%-25s%-25s\n",(it->name).c_str(),(it->contactNumber).c_str(),(it->ownerName).c_str(),(it->costPerDay).c_str());
        }
    }
};
