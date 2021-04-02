#include<iostream>
using namespace std;
class Item{
    private:
        string *number;
        string *name;
        string *vendor;
    public:
        Item(string number, string name, string vendor){
            this->number = new string(number);
            this->name = new string(name);
            this->vendor = new string(vendor);
        }
        void setNumber(string number){
            *this->number = number;
        }
        void setName(string name){
            *this->name = name;
        }
        void setVendor(string vendor){
            *this->vendor = vendor;
        }
        const Item & operator = (const Item &i){
            return i;
        }
        void print(){
            cout<<"Number: "<<*this->number<<endl;
            cout<<"Name: "<<*this->name<<endl;
            cout<<"Vendor: "<<*this->vendor<<endl;
        }
};