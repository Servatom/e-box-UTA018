#include <iostream>
#include <exception>
using namespace std;
class DuplicateMobileNumberException : public exception
{
public:
    DuplicateMobileNumberException() {}
    const char *what()
    {
        return "DuplicateMobileNumberException:Mobile number and alternate mobile number must not be same";
    }
};