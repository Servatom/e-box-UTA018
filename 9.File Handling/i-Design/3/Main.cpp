#include <iostream>
#include <fstream>
#include<string.h>
#include<sstream>
#include<list>
using namespace std;
string* splitString(string str)
 {
 string* arr = new string[25];
 int i=0;
 string delimiter = ",";
 size_t pos = 0;
 string token;
 str+=",";
 while ((pos = str.find(delimiter)) != string::npos) 
 {
 token = str.substr(0, pos);
 arr[i]=token;
 str.erase(0, pos + delimiter.length());
 i++;
 }
 return arr; 
 }
int main()
{
 ifstream ifile;
 ofstream ofile;
 string line, eventName, type, eventDetail, eventOrganiser;
 ifile.open("readeventdetails.txt");
 ofile.open("writeeventdetails.txt");
 while(getline(ifile, line))
 {
 ofile<<line<<endl;
 }
 ifile.close();
 ofile.close();
 return 0;
}
