#include <iostream>

using namespace std;

class Base{
    public:
        Base(){
            cout<<"I am constructing the base"<<endl;
        }
        ~Base(){
            cout<<"Destructing base"<<endl;
        }
};

class Derived1: public Base{
    public: 
        Derived1(){
            cout<<"Constricting derived1"<<endl;
        }
        ~Derived1(){
            cout<<"Destructing derived1"<<endl;
        }
};

class Derived2: public Derived1{
    public: 
        Derived2(){
            cout<<"Constructed derived2"<<endl;
        }
        ~Derived2(){
            cout<<"Destructed derived2"<<endl;
        }
};
int main(){
    Derived2 obj;
    return 0;   
}