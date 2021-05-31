#include <iostream>
#include <string>
using namespace std;

class Base{
    public:
        void sayHello(){
            cout<<"Hello I am base"<<endl;
        }

        virtual void sayBye(){
            cout<<"Bye I am base"<<endl;
        }
        virtual void function()=0; //This is a pure virtual function
};

class Derived: public Base{
    public:
        void sayHello(){
            cout<<"Hello I am derived"<<endl;
        }

        void sayBye(){
            cout<<"Bye I am derived"<<endl;
        }
        void function(){
            cout<<"I am just a function"<<endl;
        }
};

int main(){
    Base *obj;
    Derived objDerived;
    obj = &objDerived;
    obj->sayHello();
    obj->sayBye();

    /*
        As we can see the sayHello function in base didnt have virtual in the prefix
        We stored the refrence of the derived class in the pointer to the Base class
        Since virtual wasn't placed obj->sayHello() called the base function functionality.

        On the other hand the sayBye function had the virtual prefix.
        So the derived class overrode the sayBye function of the base class and used the functionality defined in the derived class
    */

   //Abstract class
   /*
        The Base class is an Abstract class since it has atleast one pure virtual function
    */
    return 0;
}