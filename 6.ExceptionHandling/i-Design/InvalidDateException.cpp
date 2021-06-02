#include <exception>
using namespace std;
class InvalidDateException: public exception{
    public:
    InvalidDateException(){}
    const char* what()
    {
        return "InvalidDateException:Please enter the date again"; 
    }
};
