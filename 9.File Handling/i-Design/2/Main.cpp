#include<iostream>
#include<string>
#include<stdio.h>
#include<fstream>
#include<list>
#include<iterator>
#include<sstream>
#include"UserBO.cpp"
using namespace std;
int main()
{
 int num;
 cout<<"Enter the number of users:";
 cin>>num;
 string name;
 string contact;
 string uname;
 string password;
 User U[10];
 for(int i = 0; i < num; i++)
 {
 cout<<endl<<"Enter the name of user :";
 cin>>name;
 cout<<endl<<"Enter the contact number :";
 cin>>contact;
 cout<<endl<<"Enter the username :";
 cin>>uname;
 cout<<endl<<"Enter the password :";
 cin>>password;
 User k(name, uname, password, contact);
 U[i] = k;
 }
 ofstream file;
 file.open("example.txt",ios::out);
 UserBO ub;
 ub.writeUserdetails(file, U, num);
 return 0;
}
