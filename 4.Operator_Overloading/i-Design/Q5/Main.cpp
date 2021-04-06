#include <iostream>
#include "Item.cpp"
using namespace std;

int main()
{
    string name;
    int price;
    cin.ignore(0,'\n');
    cout<<"Enter the item details:"<<endl;
    getline(cin,name);
    cin>>price;
    Item *it = new Item(name,price);
    it->display();
    delete it;
}
