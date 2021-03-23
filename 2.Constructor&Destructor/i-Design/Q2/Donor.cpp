#include <iostream>
#include <string>
#include <iomanip> //For fixed<<setprecision(<n>) To print a decimal number mandatorily manip = manipulators

using namespace std;

class Donor{
    public:
        string name;
        int age;
        float height;
        float weight;
        int no_of_units_donated;


        Donor(){
            cout<<"Welcome to the Blood Bank"<<endl;
        }

        ~Donor(){
            cout<<"Thank you for donating the Blood"<<endl;
        }
        void display(){
            cout<<"Donor details:"<<endl;
            cout<<name<<endl;
            cout<<age<<endl;
            cout<<height<<endl;
            cout<<fixed<<setprecision(1)<<weight<<endl; //<<fixed<<setprecision(1) tells compiler to mandatorily print 1 decimal place
            //setfill("<caharcter>") => extra zeros filled with that character
            cout<<no_of_units_donated<<endl;
        }
};