#include <iostream>
#include<string>
#include<stdio.h>
#include "ItemType.cpp"

using namespace std;
int main(){
    ItemType item;
    
    string name;
    double deposit;
    double costPerDay;
    
    cout<<"Enter name:"<<endl;
    getline(cin, name);
    item.setName(name);
    
    cout<<"Enter deposit:"<<endl;
    cin>>deposit;
    item.setDeposit(deposit);
    
    cout<<"Enter cost Per Day:"<<endl;
    cin>>costPerDay;
    item.setCostPerDay(costPerDay);
    
    item.display();

    return 0;
}
