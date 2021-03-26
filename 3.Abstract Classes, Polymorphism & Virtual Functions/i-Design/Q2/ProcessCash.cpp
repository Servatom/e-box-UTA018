#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Bank.h"
using namespace std;
class ProcessCash:public Bank
{
    
	private:
	double balance;
	public:
	void setBalance(double balance){
		this->balance = balance;
	}
	double getBalance(){
        return balance;
	}
	void deposit(double cash){
        balance+=cash;
        cout<<"Cash deposited. Total balance is "<<balance<<endl;
	}
	void withdraw(double cash){
        if(cash<=balance){
            balance-=cash;
            cout<<"Cash withdrawn. Available balance is "<<balance<<endl;
        }else{
            cout<<"Cannot process. Available balance is "<<balance<<endl;
        }
	}
	void checkBalance(){
        cout<<"Available balance in your account is "<<balance<<endl;
	}
};

