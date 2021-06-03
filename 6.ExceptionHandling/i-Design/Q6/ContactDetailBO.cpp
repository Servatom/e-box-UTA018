#include <iostream>
#include "ContactDetail.cpp"
#include "DuplicateMobileNumberException.cpp"
using namespace std;
class ContactDetailBO
{
public:
    ContactDetailBO() {}
    bool validate(ContactDetail cd)
    {
        DuplicateMobileNumberException ob;
        try
        {
            if (cd.getMobile() == cd.getAlternateMobile())
            {
                throw DuplicateMobileNumberException();
            }
            else
                return true;
        }
        catch (DuplicateMobileNumberException e)
        {
            cout << e.what() << endl;
            return false;
        }
    }
};
