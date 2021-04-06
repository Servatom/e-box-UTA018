#include<iostream>
#include<string>
#include<stdio.h>
#include<fstream>
#include<list>
#include<iterator>
#include<sstream>
#include"User.cpp"
using namespace std;
class UserBO
{
 public:
 void writeUserdetails(ofstream &file, User obj[], int m)
 {
 for(int i = 0; i < m; i++)
 { 
file<<obj[i].getName()<<","<<obj[i].getContactNumber()<<","<<obj[i].getUsername()<<","<<obj[i].getPassword()<<endl;
 }
 file.close();
 }
};
