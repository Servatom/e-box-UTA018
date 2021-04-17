#include<iostream>
#include<map>
#include<iterator>
#include<stdio.h>
using namespace std;
int main()
{
    char ch;
    int n;
    map<string,string> users;
    cout<<"Enter the total number of users:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the details of user"<<i+1<<endl;
        string name;
        string mob;
        cin>>name>>mob;
        users.insert(pair<string,string>(name,mob));
    }
    do{
        cout<<"MENU"<<endl;
        cout<<"1.Search by name"<<endl;
        cout<<"2.Search by mobilenumber"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>n;
        switch(n){
            case 1:{
                string name;
                cout<<"Enter the name to be searched:"<<endl;
                cin>>name;
                if(users.count(name)){
                    auto it=users.find(name);
                    cout<<"Mobile number of "<<it->first<<" is "<<it->second<<endl;
                }else{
                    cout<<"User details not found"<<endl;
                }
            }break;
            case 2:{
                bool found=false;
                string mob;
                cout<<"Enter the mobile number to be searched:"<<endl;
                cin>>mob;
                for(auto it=users.begin();it!=users.end();it++){
                    if(it->second==mob){
                        cout<<"Mobile number "<<it->second<<" belongs to "<<it->first<<endl;
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"User details not found"<<endl;
                }
            
            }break;
        }
        cout<<"Do you wish to continue(y/n):"<<endl;
        cin>>ch;
    }while(ch=='y');
    return 0;
}
