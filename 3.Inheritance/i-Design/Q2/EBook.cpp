#include<iostream>
using namespace std;
#include "PrintedBook.cpp"
class EBook: public Book{
    private:
    string diskType;
    int size;
    
    public:
    EBook(){}
    EBook(string name, string author, int price, string publication,string diskType, int size):Book(name,author,price,publication)
    {
        this->diskType=diskType;
        this->size=size;
    }
    
    void displayDetails()
    {
        cout<<"EBook Details"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Author : "<<author<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Publication : "<<publication<<endl;
        cout<<"Disk Type : "<<diskType<<endl;
        cout<<"Size : "<<size<<" MB"<<endl;
        //fill your code

    }
};
