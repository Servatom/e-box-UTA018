#include<iostream>
#include<stdio.h>
#include<malloc.h>
using namespace std;

class Item
{
    string name;
    int cost;
public:
    Item()
    {
    }
    Item(string name, int cost)
    {
        this->name = name;
        this->cost = cost;
    }
    void display()
    {
        cout<<"The item details are:"<<endl;
        cout<<"Item name:"<<name<<endl;
        cout<<"Item cost:"<<cost<<endl;
    }
    void* operator new(size_t size)
    {
        cout<<"Overloading new operator"<<endl;
        void* temp=::operator new(size);
        return temp;
    }
 
    void operator delete(void* p)
    {
        cout<<"Overloading delete operator"<<endl;
        free(p);
    }
};
