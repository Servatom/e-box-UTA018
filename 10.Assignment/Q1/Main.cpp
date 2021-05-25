#include<iostream>
#include<string>
#include "TicketBooking.cpp"
using namespace std;

void cash();
void wallet();
void creditCard();
int main(){
    int choice;
    cout<<"Payment methods\n";
    cout<<"1.Cash payment\n";
    cout<<"2.Wallet payment\n";
    cout<<"3.Credit card payment\n";
    cout<<"Enter your option:"<<endl;

    cin>>choice;

    switch (choice)
    {
    case 1:
        cash();
        break;
    case 2:
        wallet();
        break;
    case 3:
        creditCard();
        break;
    default:
        cout<<"Invalid choice"<<endl;
        break;
    }
    return 0;
}

void cash(){
    //Payment method == cash
    double amount;
    cout<<"Enter the amount :"<<endl;
    cin>>amount;
    TicketBooking ticket;
    ticket.makePayment(amount);
}

void wallet(){
    //Payment method == wallet
    double amount;
    string walletNumber;
    cout<<"Enter the amount :"<<endl;
    cin>>amount;

    cout<<"Enter the wallet number:"<<endl;
    cin>>walletNumber;
    TicketBooking ticket;

    ticket.makePayment(walletNumber, amount);
}

void creditCard(){
    //Payment method == creditCard
    double amount;
    string creditCard;
    string ccv;
    string name;
    cout<<"Enter the amount :"<<endl;
    cin>>amount;

    cout<<"Enter the credit card number:"<<endl;
    cin>>creditCard;

    cout<<"Enter the ccv number:"<<endl;
    cin>>ccv;

    cout<<"Enter name:"<<endl;
    cin>>name;

    TicketBooking ticket;

    ticket.makePayment(creditCard, ccv, name, amount);
}

