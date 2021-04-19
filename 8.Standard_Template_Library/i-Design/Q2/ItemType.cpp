//c_str() is used to convert c++ string to c type string 

#include <iostream>
#include<string.h>
#include<list>
#include<stdio.h>
#include<iomanip>
using namespace std;
class ItemType
{
    private:
	string name;
	double deposit,costPerDay;
	public :
	ItemType(){}
	ItemType(string name,double deposit,double costPerDay)
	{
	    this->name=name;
	    this->deposit=deposit;
	    this->costPerDay=costPerDay;
	}
	void setName(string name)
	{
	    this->name=name;
	}
	void setDeposit(double deposit)
	{
	    this->deposit=deposit;
	}
	void setCostPerDay(double costperday1)
    {
        this->costPerDay=costperday1;
    }
	string getItemName()
	{
    	return name;
	}
	double getItemDeposit()
	{
	    return deposit;
	}
	double getCostPerDay()
	{
	    return costPerDay;
	}
	
	void display(list<ItemType> item)
	{
        cout<<"Item type details are:"<<endl;
        printf("%-25s%-25s%-25s\n","ItemName","ItemDeposit","CostPerDay");
        for(auto it=item.begin();it!=item.end();it++){
            printf("%-25s%-25.2lf%-25.2lf\n",(it->name).c_str(),it->deposit,it->costPerDay);
        }
    }
};
