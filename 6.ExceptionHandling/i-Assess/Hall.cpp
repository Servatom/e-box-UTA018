#include<iostream>
using namespace std;

class Hall{
    private:
    string name;
    int costPerDay=10000;
    public:
    Hall(){}
    Hall(string n,int cpd=10000){
        name=n;
        costPerDay=cpd;
    }
    bool operator==(const Hall &h)const{
        return (name==h.name);
    }
    void setName(string n){
        name=n;
    }
    void setCostPerDay(int cpd){
        costPerDay=cpd;
    }
    int getCostPerDay(){
        return costPerDay;
    }
    string getName(){
        return name;
    }
};
