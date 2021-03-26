#include <iostream>
#include <string>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Bank.h"
#include"ProcessCash.cpp"
using namespace std;
int main()
{
    double cash;
    int ch;
    string cont;
    ProcessCash pc;
    cout<<"Enter the initial balance"<<endl;
    cin>>cash;
    pc.setBalance(cash);
    do{
        cout<<"Select the operation:"<<endl;
        cout<<"1.Cash deposit"<<endl;
        cout<<"2.Cash withdraw"<<endl;
        cout<<"3.Check balance"<<endl;
        cin>>ch;
        switch (ch){
            case 1:{
                cout<<"Enter the cash to be deposited"<<endl;
                cin>>cash;
                pc.deposit(cash);
            }break;
            case 2:{
                cout<<"Enter the cash to be withdrawn"<<endl;
                cin>>cash;
                pc.withdraw(cash);
            }break;
            case 3:{
                pc.checkBalance();
            }break;
        
        }
        cout<<"Do you want to do more transaction?(yes/no)"<<endl;
        cin>>cont;
    }while(cont=="yes");
    return 0;    
}
