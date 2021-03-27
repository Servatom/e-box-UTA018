#include <iostream>
#include <string>
#include<stdio.h>
#include<bits/stdc++.h>
#include"VegFood.cpp"
#include"NonVegFood.cpp"

using namespace std;

int VegFood::totalAmt=0;
int NonVegFood::totalAmt=0;
int main()
{
    Food *f;
    string ch;
    string cont;
    cout<<"Choose type(veg/non-veg)"<<endl;
    cin>>ch;
    if(ch=="veg"){
            f=new VegFood();
            f->displayMenu();
        }else{
            f=new NonVegFood();
            f->displayMenu();
        }
        
    do{
        f->calculateBill(); 
        cout<<"Do you want order more items?(yes/no)"<<endl;
        cin>>cont;
    }while(cont=="yes");
    cout<<"Total Order Amount is Rs.";
    if(ch=="veg")cout<<VegFood::totalAmt<<endl;
    else cout<<NonVegFood::totalAmt<<endl;
    return 0;
}

