#include <iostream>
#include "Item.cpp"
using namespace std;

string* splitString(string str){
    string* arr = new string[25];
    int i=0;
    int pos = 0;
    string temp;
    while ((pos = str.find(",")) < str.length()) {
        temp= str.substr(0, pos);
        arr[i]=temp;
        str.erase(0, pos + 1);
        i++;
    }
    arr[i]=str;
    return arr;
}

int main(){
    string csv;
    cout<<"Enter the item details"<<endl;
    cin>>csv;
    string* arr=splitString(csv);
    Item it(arr[0],arr[1],arr[2]);
    Item pr=it;
    cout<<"The item details are"<<endl;
    pr.print();
}
