#include<iostream>
#include<stdio.h>
#include<string>
#include <cstdlib>
using namespace std;

int main()
{
    string s;
    bool c=false;
    do{
        cout<<"Enter the number of t-shirts you want to order: "<<endl;
        cin>>s;
        try{
            c=false;
            for(int i=0;i<s.length();i++){
                if(s[i]<'0'||s[i]>'9'){
                    throw 2;
                }
            }
        }catch(...){
            cout<<"Please enter an Integer only."<<endl;
            c=true;
        }
    }while (c);
    cout<<"Your order for: "<<s<<" t-shirts has been successfully placed"<<endl;
    return 0;
}
