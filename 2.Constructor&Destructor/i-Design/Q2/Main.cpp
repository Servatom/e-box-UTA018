#include <iostream>
#include <string>
#include "Donor.cpp"

using namespace std;

int main(){
    Donor donor;

    cout<<"Enter the donor details"<<endl;
    
    cout<<"Enter the Name :"<<endl;
    cin>>donor.name;
    
    cout<<"Enter the Age :"<<endl;
    cin>>donor.age;

    cout<<"Enter the height :"<<endl;
    cin>>donor.height;

    cout<<"Enter the weight :"<<endl;
    cin>>donor.weight;

    cout<<"Enter the No of units donated :"<<endl;
    cin>>donor.no_of_units_donated;

    donor.display();
    return 0;
}