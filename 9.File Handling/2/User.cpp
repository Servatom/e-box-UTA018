#include<iostream>
#include<string>
#include<stdio.h>
#include<fstream>
#include<list>
#include<iterator>
#include<sstream>
using namespace std;
class User
{
 private:
 string name;
 string username;
 string password;
 string contactnumber;
 public:
 User(){}
 User(string name, string username, string password, string contactnumber)
 {
 this->name = name;
 this->username = username;
 this->password = password;
 this->contactnumber = contactnumber; }
 void setName(string name)
 {
 this->name = name;
 }
 void setUsername(string uname)
 {
 this->username = uname;
 }
 void setPassword(string pass)
 {
 this->password = pass;
 }
 void setContactNumber(string connum)
 {
 this->contactnumber = connum;
 }
 string getName()
 {
 return name;
 }
 string getUsername()
 {
 return username;
 }
 string getPassword()
 {
 return password;
 }
 string getContactNumber()
 {
 return contactnumber;
 }
};
