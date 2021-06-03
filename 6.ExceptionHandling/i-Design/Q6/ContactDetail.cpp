#include <iostream>
using namespace std;
class ContactDetail
{
private:
    string mobile;
    string alternateMobile;
    string email;

public:
    ContactDetail() {}

    void setMobile(string mobile)
    {
        this->mobile = mobile;
    }
    void setAlternateMobile(string alternateMobile)
    {
        this->alternateMobile = alternateMobile;
    }
    void setEmail(string email)
    {
        this->email = email;
    }
    string getMobile()
    {
        return mobile;
    }
    string getAlternateMobile()
    {
        return alternateMobile;
    }
    string getEmail()
    {
        return email;
    }
    void display()
    {
        cout << "Contact Details" << endl;
        cout << "Mobile number:" << mobile << endl;
        cout << "Alternate mobile number:" << alternateMobile << endl;
        cout << "Email id:" << email << endl;
    }
};