#include<stdio.h>
#include<iostream>
#include <list>
#include <iterator>
#include<string>
#include<vector>
#include "Hall.cpp"
using namespace std;

string* splitString(string str){
    string* arr = new string[25];
    int i=0;
    int pos = 0;
    string temp;
    while ((pos = str.find(",")) < str.length()) {
        temp = str.substr(0, pos);
        arr[i]=temp;
        str.erase(0, pos + 1);
        i++;
    }
    arr[i]=str;
    return arr;
}

int main(){
    int n;
    Hall h;
    char ch='y';
    list<Hall> halls;
    string csv;
    int index=0;
    cout<<"Enter total number of halls"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cout<<"Enter hall details"<<endl;
        cin>>csv;
        string* temp=splitString(csv);
        h.setName(temp[0]);
        h.setContactNumber(temp[1]);
        h.setCostPerDay(temp[2]);
        h.setOwnerName(temp[3]);
        halls.push_back(h);
    }
    cout<<"Hall details are:"<<endl;
    h.displayDetails(halls);
    while(ch=='y'){
        cout<<"Enter index of the hall that has been renovated"<<endl;
        cin>>n;
        
        if(n<halls.size()){
            auto it=halls.begin();
            advance(it,n);
            halls.erase(it);
            if(halls.empty())break;
            cout<<"Hall renovated successfully"<<endl;
        }else{ 
            cout<<"Wrong hall entered"<<endl;
            continue;
        }
        
        cout<<"Details of halls still to be renovated are:"<<endl;
        h.displayDetails(halls);
        cout<<"Do you want to continue(y/n)?"<<endl;
        cin>>ch;
    }
}
