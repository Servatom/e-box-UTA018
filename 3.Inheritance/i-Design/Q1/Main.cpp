#include <iostream>
using namespace std;
#include "Developer.cpp"
int main(void)
{
    string name,skills,role;
    int empId,experience;
    //fill your code
    //Developer coder(name, experience, empId, skills, role);
    cout<<"Enter the name"<<endl;
    cin>>name;
    cout<<"Enter the experience"<<endl;
    cin>>experience;
    cout<<"Enter the employee id"<<endl;
    cin>>empId;
    cout<<"Enter the technical skills of the developer"<<endl;
    cin>>skills;
    cout<<"Enter the role of the developer"<<endl;
    cin>>role;
    Developer coder(name, experience, empId, skills, role);
    coder.displayDetails();
    return 0;
}

