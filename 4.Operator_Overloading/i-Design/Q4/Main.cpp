#include <iostream>
#include <string>
#include "Item.cpp"
using namespace std;

int main()
{
    string name;
    double cost;
    Item item1,item2;
    cin.ignore(0,'\n');
    cout<<"Enter the item 1"<<endl;
    getline(cin,name);
    cout<<"Cost of that item\n";
    cin>>cost;
    item1.setName(name);
    item1.setCost(cost);
    cin.ignore();
    cout<<"Enter the item 2"<<endl;
    getline(cin,name);
    cout<<"Cost of that item"<<endl;
    cin>>cost;
    item2.setName(name);
    item2.setCost(cost);
    if(item1>=item2){
        cout<<item1.getName()<<" is costlier or equal to "<<item2.getName()<<endl;
    }else{
        cout<<item2.getName()<<" is costlier or equal to "<<item1.getName()<<endl;
    }   
}