#include <iostream>
#include <string>
#include "ItemTypeBO.cpp"

using namespace std;

int main(){
    int number_of_types;
    string searchType;
    cout<<"Enter the number of Itemtypes:"<<endl;
    cin>>number_of_types;

    if(number_of_types < 0){
        cout<<"Invalid Number"<<endl;
        return 1;
    }
    
    ItemType itemTypes[number_of_types];
    ItemTypeBO itemTypeBO;

    for(int i = 0; i < number_of_types; i++){
        string name;
        double deposit;
        double costPerDay;

        cout<<"Enter details of item type "<<i+1<<endl;
        cin.ignore();
        cout<<"Enter the Itemtype name:\n";
        getline(cin, name);

        cout<<"Enter the deposit:"<<endl;
        cin>>deposit;

        cout<<"Enter cost per day:"<<endl;
        cin>>costPerDay;

        itemTypes[i] = itemTypeBO.createItem(name, deposit, costPerDay);
    }
    
    cin.ignore();
    cout<<"Enter the item name to be searched:\n";
    getline(cin, searchType);

    if(itemTypeBO.searchItemTypeByName(itemTypes, number_of_types, searchType)){
        cout<<"ItemType found"<<endl;
    }
    else{
        cout<<"ItemType not found"<<endl;
    }
    
    return 0;
}