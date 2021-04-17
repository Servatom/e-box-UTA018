#include<iostream>
#include<map>
using namespace std;
string* splitString(string str){
    string* arr = new string[25];
    int i=0;
    string delimiter = ",";
    size_t pos = 0;
    string token;
    while ((pos = str.find(delimiter)) != string::npos) {
        token = str.substr(0, pos);
        arr[i]=token;
        str.erase(0, pos + delimiter.length());
        i++;
    }
    arr[i]=str;
    return arr;
}
int main()
{
    int n;
    string hallName;
    map<string,string> halls;
    cout<<"Enter the number of Halls"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        string temp;
        cout<<"Enter details of Hall "<<i+1<<":"<<endl;
        cin>>temp;
        string *arr=splitString(temp);
        halls[arr[0]]=arr[1];
    }
    cout<<"Enter the Hall number to find its owner:"<<endl;
    cin>>hallName;
    cout<<"The owner of "<<hallName<<" is "<<halls[hallName]<<endl; 
}
