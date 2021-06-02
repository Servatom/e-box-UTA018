#include <iostream>
#include <cstring> //For using strcpy
using namespace std;

class MyException{
    public: 
        char str_issue[80];
        int what_number;

        MyException(){
            *str_issue = '0';
            what_number = 0;
        }

        MyException(const char *error, int number){
            strcpy(str_issue, error);
            what_number = number;
        }      
};

int main(){
    int number;
    try{
        cout<<"Enter the number"<<endl;
        cin>>number;

        if(number < 0){
            //This is negative number. So throw the error
            throw MyException("Not positive", number);
        }
    }
    catch(MyException error){
        //MyException type variable caught
        cout<<error.str_issue<<endl;
        cout<<error.what_number<<endl;
    }

    //output:
    /*
       Enter the number
       -10
       Not positive
       -10 
    */
   
    /*
        As we saw above:
        a) We created a Class MyException which has two data members
        b)Then in the main function we threw an object of type MyException which was caught by the appropriate catch block
        c)This allows you to not stay restricted with certain data types
    */
    return 0;
}