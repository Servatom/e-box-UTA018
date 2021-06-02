#include <iostream>

using namespace std;

void divide(int numerator, int denominator){
    //Lets say if 5 as a numerator is an issue
    if(denominator == 0){
        string message = "Divide by 0";
        throw "Divide by 0";
    }
    else if(numerator == 5){
        throw 5;
    }
    else{
        cout<<numerator/denominator<<endl;
    }
}
int main(){
    int numerator = 12;
    int denominator = 0;

    try{
        divide(numerator, denominator);
    }
    catch(const char *Error){
        cout<<Error<<endl;
    }
    catch(int number){
        cout<<number<<" used"<<endl;
    }
    //OUTPUT: Divide by 0 will be printed

    try{
        divide(5, 2);
    }
    //Multiple catch statements
    catch(const char *error){
        cout<<error<<endl;
    }
    catch(int number){
        cout<<number<<" used"<<endl;
    }

    //This catches all other exceptions
    catch(...){
        cout<<"Some error"<<endl;
    }

    //OUTPUT: 5 used

    /*
        So as you can see according to the data type of the thrown
        object the catch statement is called. If an integer is thrown
        catch(int number) block will be called and so on
    */

   //Restricting exceptions
   //If a function can only throw an integer and nothing else:
   // void func(int number) throw(<desired data type 1>, <desired data type 2>)

   //to restrict a function from throwing anything:
   // void func(int something) throw()


    return 0;
}