#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Food.h"
using namespace std;
class VegFood : public Food
{
    private:
        struct Items{
            string name;
            int cost;
        };
        Items it[5]={{"Idly",10},{"Dosa",20},{"Chappathi",12},{"Veg noodles",60},{"Veg Meals",50}};
        
	public:
    	static int totalAmt;
	void displayMenu(){
        cout<<"Veg Food Items"<<endl;
        printf("%-15s%-25s%-25s\n","S.no","Name","Cost");
        for(int i=0;i<5;i++){
            printf("%-15s%-25s%-25s\n",(to_string(i+1)).c_str(),(it[i].name).c_str(),(to_string(it[i].cost)).c_str());
        }
		//fill your code here
	}
	void calculateBill(){
        int amount;
        int ch;
        cout<<"Enter the S.no of the food to order"<<endl;
        cin>>ch;
        cout<<"Enter the no. of items"<<endl;
        cin>>amount;
        cout<<"Cost of "<<amount<<" "<<it[ch-1].name<<" is Rs."<<it[ch-1].cost*amount<<endl;
        totalAmt+=it[ch-1].cost*amount;
	}
};

