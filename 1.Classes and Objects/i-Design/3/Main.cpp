#include <iostream>
#include "Donor.cpp"
using namespace std;

int main(){
    int number_of_donors;
    int i;

    cout<<"Enter the number of donors:"<<endl;
    cin>>number_of_donors;

    Donor donors[number_of_donors];

    for(i = 0; i < number_of_donors; i++){
        cout<<"Enter the donor details"<<i+1<<endl;

        cout<<"Enter the Name :"<<endl;
        cin>>donors[i].name;

        cout<<"Enter the Age :"<<endl;
        cin>>donors[i].age;

        cout<<"Enter the height :"<<endl;
        cin>>donors[i].height;

        cout<<"Enter the weight :"<<endl;
        cin>>donors[i].weight;

        cout<<"Enter the Gender :"<<endl;
        cin>>donors[i].gender;

        cout<<"Enter the Blood Group :"<<endl;
        cin>>donors[i].bloodGroup;
    }

    cout<<"Donor details in the hospital database :"<<endl;

    for(i = 0; i < number_of_donors; i++){
        cout<<"Donor"<<i+1<<endl;
        donors[i].display();
    }
    return 0;
}