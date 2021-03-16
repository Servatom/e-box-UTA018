#include <iostream>
#include "Donor.cpp"
using namespace std;

int main(){
    Donor d;
    cout << "Enter the donor details" << endl;
    cout << "Enter the name :" << endl;
    cin >> d.name;
    cout << "Enter the age :" << endl;
    cin >> d.age;
    cout << "Enter the height :" << endl;
    cin >> d.height;
    cout << "Enter the weight :" << endl;
    cin >> d.weight;
    cout << "Enter the gender :" << endl;
    cin >> d.gender;
    cout << "Enter the blood group :" << endl;
    cin >> d.bloodGroup;
    d.display();
    return 0;
}