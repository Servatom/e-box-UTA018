#include <iostream>
#include <string>
#include "Purchase.cpp"

using namespace std;
int Purchase::totalCountOfItems = 0;
float Purchase::totalAmt = 0;

int main(){
    int number_of_customers;
    cout<<"Enter the Number of customers :"<<endl;
    cin>>number_of_customers;

    int net_total = 0;
    float net_amt = 0;
    Purchase hist[number_of_customers];
    for(int i = 0; i < number_of_customers; i++){
        string userName;
        int no_items;
        int purchase_amt;
        
        cout<<"Enter the Name of the customer :"<<endl;
        cin>>userName;

        cout<<"Enter the No of Items purchased :"<<endl;
        cin>>no_items;
        
        cout<<"Enter the purchase amount :"<<endl;
        cin>>purchase_amt;
       

        hist[i].setUserName(userName);
        hist[i].setCountOfItems(no_items);
        hist[i].setAmount(purchase_amt);

    }

    cout<<"Purchase Details :"<<endl;
    hist[0].display(hist, number_of_customers);
    return 0;
}
