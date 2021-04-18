#include <iostream>
#include <stdio.h>
#include<list>
#include "HallBO.cpp"
using namespace std;
int main(){
    int n, choice, p;
    string name, ownerName, hallName;
    int contactNumber;
    double costPerDay;
    static list<Hall> hallList;
    list<Hall>::iterator it;
    Hall h3;
    HallBO  hbo;
    hallList = h3.getHallDetails();
   
    do{
        cout<<"1.Add\n";
        cout<<"2.Remove\n";
        cout<<"3.Display\n";
        cout<<"Enter your choice\n";
        cin>>choice;
        switch(choice){
            case 1:{
                string name;
                int contact;
                double cpd;
                string owner;
                cout<<"Enter the details of Hall\n";
                cout<<"Hall Name :"<<endl;
                cin>>name;
                cout<<"Contact Number :"<<endl;
                cin>>contact;
                cout<<"Cost per day :"<<endl;
                cin>>cpd;
                cout<<"Owner Name :"<<endl;
                cin>>owner;
                hallList.push_back(Hall(name,contact,cpd,owner));
            }break;
            case 2:{
                string name;
                cout<<"Enter the Hall name to be removed"<<endl;
                cin>>name;
                if(hbo.contains(hallList,name)){
                    auto it=hallList.begin();
                    while(it!=hallList.end()){
                        if(it->getName()==name)break;
                        it++;
                    }
                    hallList.erase(it);
                }
            }break;
            case 3:{
                cout<<"Hall Details:"<<endl;
                hbo.display(hallList);
            }break;
        }
        
        cout<<"Press 1 to continue\n";
        cin>>p;
    }while(p==1);
}
