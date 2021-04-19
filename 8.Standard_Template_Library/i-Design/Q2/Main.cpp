#include <iostream>
#include<string.h>
#include<list>
#include<stdio.h>
#include "ItemType.cpp"
using namespace std;
int main()
{
    string name;
    double depo,cpd;
    int n;
    cout<<"Enter the number of item type:"<<endl;
    cin>>n;
    if(n>0){
        list<ItemType> items;
        list<ItemType>::iterator it;
        it=items.begin();
        for(int i=0;i<n;i++){
            cout<<"Enter details of item type "<<i+1<<endl;
            cout<<"Enter the item type name:"<<endl;
            cin>>name;
            cout<<"Enter the deposit:"<<endl;
            cin>>depo;
            cout<<"Enter cost per day:"<<endl;
            cin>>cpd;
            items.insert(it,ItemType(name,depo,cpd));
        }
        ItemType temp;
        temp.display(items);
    }else{
        cout<<"Invalid number"<<endl;
    }
    return 0;
}


