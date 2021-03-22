#include <iostream>
#include<string.h>
#include "User.cpp"
using namespace std;
string validate(string uname,string pword){
    int flag=0;
    User u1;
    User *u = u1.getUserDetails();
    for(int i=0;i<5;i++)
    {
        if(u[i].getUserName()==uname)
        {
            flag=1;
            if(u[i].getPassword()==pword)
            return u[i].getName();
            else return "No";
        }
        
    }
    if(flag==0)
    return "No";
}
int main() {
    User u;
    string name,uname,pword;
    cout<<"Enter name:"<<endl;
    getline(cin,name);
    u.setName(name);
    cout<<"Enter the username:"<<endl;
    getline(cin,uname);
    u.setUserName(uname);
    cout<<"Enter the password:"<<endl;
    cin>>pword;
    u.setPassword(pword);
    u.display(validate(uname,pword));
    return 0;
}
