#include <iostream>
#include <map>
#include <string>
#include <stdio.h>
using namespace std;
int main(){
    
    map<string,double> myMap = {
                { "hall1", 12000.0 },
                { "hall2", 23000.0 },
                { "hall3", 34000.0 },
                { "hall4", 11000.0 },
                { "hall5", 28000.0 },
    };
    
    int choice;
    do{
    if(myMap.empty())break;
    cout<<"1.Update the hall cost"<<endl;
    cout<<"2.Delete hall by cost"<<endl;
    cout<<"3.Displaying the hall details in descending order"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    switch(choice){
        case 1:{
            string name;
            double cost;
            cout<<"Enter the hall name to update"<<endl;
            cin>>name;
            cout<<"Enter the new cost of the hall"<<endl;
            cin>>cost;
            myMap.at(name)=cost;
        }break;
        case 2:{
            double cost;
            bool found=false;
            cout<<"Enter the hall cost"<<endl;
            cin>>cost;
            for(auto it=myMap.begin();it!=myMap.end();it++){
                if(it->second==cost){
                    myMap.erase(it);
                    found=true;
                }
            }
            if(found)
                cout<<"The halls with cost "<<cost<<" are removed"<<endl;
            else{
                cout<<"No hall with cost "<<cost<<endl;
            }
        }break;
        case 3:{
            printf("%-25s%s\n","Hall Name","Hall Cost");
            for(auto it=myMap.crbegin();it!=myMap.crend();it++){
                printf("%-25s%.2lf\n",(it->first).c_str(),it->second);
            }
        }break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    if(myMap.empty())break;
    }while(choice<4&&choice>0);
    return 0;
}