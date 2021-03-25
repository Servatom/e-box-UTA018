#include <iostream>
using namespace std;
#include "Developer.cpp"
int main()
{
    string name,skills,role,gender;
    int empId,experience;
    cout<<"Enter the name"<<endl;
    cin>>name;
    cout<<"Enter the gender\n";
    cin>>gender;
    cout<<"Enter the experience"<<endl;
    cin>>experience;
    cout<<"Enter the employee id"<<endl;
    cin>>empId;
    cout<<"Enter the technical skills of the developer\n";
    cin>>skills;
    cout<<"Enter the role of the developer\n";
    cin>>role;
    Developer d(name,gender,experience,empId,skills,role);
    d.displayDetails();
    //fill your code
    
    return 0;
}
