#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
class ItemType{
	private:
    string name;
    double deposit;
    double costPerDay;
    public:
	
    void setName(string name){
        this->name = name;
    }
    
    void setDeposit(double deposit){
        this->deposit = deposit;
    }
    
    void setCostPD(double costPerDay){
        this->costPerDay = costPerDay;
    }
    
    
void display()
{
cout<<"Itemtype details:"<<endl;
	//fill the code 
    cout<<"Name: "<<name<<endl;
    cout<<"Deposit: "<<deposit<<endl;
    cout<<"Cost Per Day: "<<costPerDay<<endl;
}
};
