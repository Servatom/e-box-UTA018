#include <iostream>
#include <string>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Ticket.h"
#include"GoldCategory.cpp"
#include"SilverCategory.cpp"
#include"PlatinumCategory.cpp"
using namespace std;
int main()
{
    Ticket *t;
    int tickets;
    int ch;
    cout<<"Enter the no. of tickets to book"<<endl;
    cin >> tickets;
    cout<<"Select the category:"<<endl;
    cout<<"1.Platinum"<<endl;
    cout<<"2.Gold"<<endl;
    cout<<"3.Silver"<<endl;
    cin>>ch;
    switch(ch){
        case 1:
            t = new PlatinumCategory();
            t->calculateCost(tickets);
            break;
        case 2:
            t=new GoldCategory();
            t->calculateCost(tickets);
            break;
        case 3:
            t=new SilverCategory();
            t->calculateCost(tickets);
            break;
    }
    delete t;
    return 0;
}

