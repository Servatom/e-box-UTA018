#include <iostream>
#include <string>
#include "Donor.cpp"
using namespace std;

int main(){
    int number_of_donors;
    cout<<"Enter the number of donors: ";
    cin>>number_of_donors;
    cout<<endl;
    Donor donors[number_of_donors];
    for(int i = 0; i < number_of_donors; i++){
        string name, gender, bloodGroup;
        int age;
        float weight, height;
        cout<<"Enter the donor details "<<i+1<<endl;
        cout<<"Enter the Name :\n";
        cin>>name;


        cout<<"Enter the Age :\n";
        cin>>age;

        cout<<"Enter the height :\n";
        cin>>height;

        cout<<"Enter the weight :\n";
        cin>>weight;

        cout<<"Enter the Gender :\n";
        cin>>gender;

        cout<<"Enter the Blood Group :\n";
        cin>>bloodGroup;

        donors[i].setName(name);
        donors[i].setGender(gender);
        donors[i].setAge(age);
        donors[i].setBloodGroup(bloodGroup);
        donors[i].setWeight(weight);
        donors[i].setHeight(height);
    }
    string targetBG;
    cout<<"Enter the Bloodgroup details to be known:"<<endl;
    cin>>targetBG;

    donors[0].search(donors, targetBG, number_of_donors);

    return 0;
}