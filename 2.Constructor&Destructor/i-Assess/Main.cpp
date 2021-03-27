#include <iostream>
#include <string>
#include "ContactDetails.cpp"

using namespace std;

bool validateEmail(string e1);
bool findDuplicates(string a, string b);

int main(){
    string mobile;
    string alt_number;
    string land_number;
    string emailId;
    cout<<"Enter details for Registration:\n";
    cout<<"Enter Mobile Number:\n";
    cin>>mobile;

    cout<<"Enter Alternate Mobile Number:\n";
    cin>>alt_number;

    cout<<"Enter Landline Number:\n";
    cin>>land_number;

    cout<<"Enter Email-Id:\n";
    cin>>emailId;

    ContactDetails contact(mobile, alt_number, land_number, emailId);
    contact.display(validateEmail(emailId), findDuplicates(mobile, alt_number));
    return 0;
}

bool validateEmail(string e1){
    bool com = false;
    int number_of_at = 0;
    for(int i = 0; i < e1.length(); i++){
        if(e1[i] != '@'){
            continue;
        }
        else{
            number_of_at++;
        }
    }

    if(e1[e1.length()-1] == 'm' && e1[e1.length()-2] == 'o' && e1[e1.length()-3] == 'c' && e1[e1.length()-4] == '.'){
        //.com exists
        com = true;
    }

    if(number_of_at == 1 && com == true){
        return true;
    }

    return false;
}

bool findDuplicates(string a, string b){
    if(a == b){
        return false;
    }
    return true;
}