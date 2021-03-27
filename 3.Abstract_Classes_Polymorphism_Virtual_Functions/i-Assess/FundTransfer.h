#ifndef my_header
#define my_header
#include <iostream>
#include<string>
using namespace std;
class FundTransfer{
private:
    string accountNumber;
    double balance;
public:
    void setBalance(double bal){
        balance=bal;
    }
    void setAccountNumber(string ac){
        accountNumber=ac;
    }
    string getAccountNumber(){
        return accountNumber;
    }
    double getBalance(){
        return balance;
    }
    bool validate(double transferAmount){
        if(balance>=transferAmount&&transferAmount>=0&&accountNumber.length()==10)return true;
        else return false;
    }
    virtual bool transfer(double transferAmount)=0;
};
#endif
