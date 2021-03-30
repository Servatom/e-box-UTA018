#include <iostream>
#include <string>

using namespace std;

class Purchase{
    private:
        string userName;
        int countOfItems;
        float amount;
        float static totalAmt;
        int static totalCountOfItems;
        
    public:
        
        string getuserName(){
            return userName;
        }

        void setUserName(string a){
            userName = a;
        }

        int getCountOfItems(){
            return countOfItems;
        }

        void setCountOfItems(int b){
            countOfItems = b;
            totalCountOfItems =totalCountOfItems + b;
        }

        float getAmount(){
            return amount;
        }

        void setAmount(float c){
            amount = c;
            totalAmt=totalAmt+c;
        }

        float getTotalAmt(){
            return totalAmt;
        }

        void setTotalAmt(float d){
            totalAmt = d;
        }

        int getTotalCountOfItems(){
            return totalCountOfItems;
        }

        void settotalCountOfItems(int e){
            totalCountOfItems = e;
        }

        void display (Purchase obj[], int n){
            for(int i = 0; i < n; i++){
                cout<<"Customer "<<i+1<<" :"<<obj[i].getuserName()<<endl;
                cout<<"No of Items purchased :"<<obj[i].getCountOfItems()<<endl;
                cout<<"Purchase amount :"<<obj[i].getAmount()<<endl;
            }

            cout<<"Total Amount Received :"<<getTotalAmt()<<endl;
            cout<<"Total Number of Items sold :"<<getTotalCountOfItems()<<endl;
        }
};
