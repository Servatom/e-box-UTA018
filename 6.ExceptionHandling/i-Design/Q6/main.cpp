#include <iostream>
#include <cstring>
#include "ContactDetailBO.cpp"
using namespace std;
int main()
{
    ContactDetail ob;
    ContactDetailBO ob2;
    string mobile, altmobile, email;
    cout << "Enter the contact details:\n";
    getline(cin, mobile);
    getline(cin, altmobile);
    getline(cin, email);
    ob.setMobile(mobile);
    ob.setAlternateMobile(altmobile);
    ob.setEmail(email);
    if (ob2.validate(ob))
        ob.display();
    return 0;
}
