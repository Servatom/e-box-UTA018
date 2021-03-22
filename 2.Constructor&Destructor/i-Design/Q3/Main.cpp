#include <iostream>
#include <string>
#include "ItemTypeBO.cpp"

using namespace std;

int main(){
    int n;
    
    cout<<"Enter the number of Itemtypes:"<<endl;
    cin>>n;

    if(n < 0){
        cout<<"Invalid Number"<<endl;
        return 0;
    }
    
    ItemType itemTypes[n];
    ItemTypeBO itemTypeBO;

    string name;
    double deposit;
    double costPerDay;

    for(int i = 0; i < n; i++){
        
        cout<<"Enter details of item type "<<i+1<<endl;
        cout<<"Enter the Itemtype name:"<<endl;
        cin.ignore();
        getline(cin, name);

        cout<<"Enter the deposit:"<<endl;
        cin>>deposit;

        cout<<"Enter cost per day:"<<endl;
        cin>>costPerDay;

        itemTypes[i] = itemTypeBO.createItemType(name, deposit, costPerDay);
    }
    
    
    string searchType;
    cout<<"Enter the item name to be searched:"<<endl;
    cin.ignore();
    getline(cin, searchType);

    if(itemTypeBO.searchItemTypeByName(itemTypes, n, searchType)){
        cout<<"ItemType found"<<endl;
    }
    else{
        cout<<"ItemType not found"<<endl;
    }
    
    return 0;
}
