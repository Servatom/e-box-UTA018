#include <iostream>
#include <string>

using namespace std;

class Purchase{
    private:
        string userName;
        int countOfItems;
        float amount;
        
    public:
        float static totalAmt;
        int static totalCountOfItems;
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

        

        void display (Purchase obj[], int n){
            for(int i = 0; i < n; i++){
                cout<<"Customer "<<i+1<<" :"<<obj[i].getuserName()<<endl;
                cout<<"No of Items purchased :"<<obj[i].getCountOfItems()<<endl;
                cout<<"Purchase amount :"<<obj[i].getAmount()<<endl;
            }

            cout<<"Total Amount Received :"<<totalAmt<<endl;
            cout<<"Total Number of Items sold :"<<totalCountOfItems<<endl;
        }
};
