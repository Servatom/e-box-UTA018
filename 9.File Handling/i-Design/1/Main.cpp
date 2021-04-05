#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
 string fname;
 string line;
 cout<<"Give filename:"<<endl;
 cin>>fname;
 ifstream ifile;
 ifile.open(fname);
 if(ifile.fail())
 {
 cout<<endl<<"Error! Incorrect file.";
 }
 else
 {
 while(getline(ifile, line))
 {
 cout<<line<<endl;
 }
 }
}
