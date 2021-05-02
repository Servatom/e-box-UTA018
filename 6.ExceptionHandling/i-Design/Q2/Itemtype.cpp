//fill your code here.
#include<iostream>
#include<stdio.h>
#include<exception>
using namespace std;
class Itemtype
{
        string name;
        double deposit,costPerday;
        public:
        string getName()
        {
                return this->name;
        }
        double getDeposit()
        {
                return this->deposit;
        }
        double getCostPerday()
        {
                return this->costPerday;
        }
        void setName(string names)
        {
                this->name=names;
        }
        void setDeposit(double amount)
        {
                this->deposit=amount;
        }
        void setCostPerday(double price)
        {
                this->costPerday=price;
        }
        void display()
        {
        cout<<"Itemtype details"<<endl;
        cout<<"Name: "<<name<<endl;
        printf("Deposit: %.2f\n",deposit);
        printf("Cost per day: %.2f\n",costPerday);
        }
};
