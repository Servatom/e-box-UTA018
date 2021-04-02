#include <iostream>
#include "Distance.cpp"
using namespace std;
int main()
{
    int feet,inches;
    Distance d,d1,d2;
    cout<<"Enter feet and inches of distance 1:"<<endl;
    cin>>feet>>inches;
    d1.setFeet(feet);
    d1.setInches(inches);
    cout<<"Enter feet and inches of distance 2:"<<endl;
    cin>>feet>>inches;
    d2.setFeet(feet);
    d2.setInches(inches);
    d=d1+d2;
    d.display();
    return 0;
}