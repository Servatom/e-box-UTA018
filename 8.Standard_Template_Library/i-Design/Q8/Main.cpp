#include<iostream>
#include <set>
#include <iterator>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of hall cost to be entered:"<<endl;
    cin>>n;
    set<int> cost;
    for(int i=1;i<=n;i++){
        int temp;
        cout<<"Enter the cost:"<<i<<endl;
        cin>>temp;
        cost.insert(temp);
    }
    cout<<"MENU:"<<endl;
    cout<<"1.Sorted hall details based on cost."<<endl;
    cout<<"2.To find optimal hall price."<<endl;
    cout<<"Enter your choice:"<<endl;
    
    cin>>n;
    if(n==1){
        cout<<"Sorted hall cost:"<<endl;
        for(auto it=cost.begin();it!=cost.end();it++){
            cout<<*it<<endl;
        }
    }
    else if(n==2){
        int price;
        cout<<"Enter the price of the hall to search"<<endl;
        cin>>price;
        auto it=cost.lower_bound(price);
        if(*it==price){
            cout<<"Hall with the given price is available"<<endl;
        }else if(it==cost.end()){
            cout<<"Hall with the given price and next maximum price is not available"<<endl;
        }
        else{
            it=cost.upper_bound(price);
            cout<<"Hall with given price is not available,the next optimal hall cost is: "<<*it<<endl;
        }
    }
    return 0;	
}  			

    
 						
    
 						
