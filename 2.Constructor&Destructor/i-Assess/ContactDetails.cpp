#include <iostream>
#include <string>

using namespace std;

class ContactDetails{
    private:
        string mobile;
        string alternateMobile;
        string landLine;
        string email;
    public:
        ContactDetails(){}
        ContactDetails(string mobile, string alternateMobile, string landLine, string email){
            this->mobile = mobile;
            this->alternateMobile = alternateMobile;
            this->landLine = landLine;
            this->email = email;
        }

        void display(bool emailstatus, bool mobilestatus){
            if(emailstatus == true && mobilestatus == true){
                cout<<"Registered Successfully!!!"<<endl;
            }
            else{
                cout<<"Please check your details"<<endl;
            }
        }
};