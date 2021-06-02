#include <string>
#include <iostream>

using namespace std;
//chararray = static 
//string = dynamic allocation

//char Array is faster

int main(){
    string stringVariable;
    string s1 = "Hello World"; 
    getline(cin, stringVariable); //Taking a string with spaces etc.
    cout<<stringVariable<<" Output 1"<<endl;

    //We dont use String like a template as the "data type" is not ambiguous. We know that String is a data type itself
    //hence the syntax is not like a template

    stringVariable.push_back('b');
    stringVariable.push_back('R');

    stringVariable.pop_back(); //R character removed
    
    //stringVariable.pop_front(); Not allowed
    //stringVariable.push_front('i'); This wont work. 

    //Doing stuff from the front/beginning of the string is not allowed

    string::iterator it;

    for(it = stringVariable.begin(); it != stringVariable.end(); it++){
        cout<<*it;
    }
    cout<<" Output 2"<<endl;
    cout<<stringVariable<<" Output 3"<<endl; //Also works

    //Reverse printing of string
    string::reverse_iterator rit;
    for(rit = stringVariable.rbegin(); rit != stringVariable.rend(); rit++){
        cout<<*rit;
    }

    cout<<" Output 4"<<endl;

    //Length and capacity of string
    cout<<stringVariable.length()<<"\t"<<stringVariable.capacity()<<" Output 5"<<endl;
    //Capacity is the memory allocated to the stringVariable
    //It will be higher than the required length

    //Resize
    stringVariable.resize(10);
    //Length of string is 10
    cout<<stringVariable<<" Output 6"<<endl;
    

    //Compare
    cout<<"";
    string someString;
    getline(cin, someString);
    cout<<someString<<endl;
    string someString2 = "hello";
    
    cout<<someString.compare(someString2)<<endl;
    //it will be 0 if they area equal, -ve if someString2 > someString2 and +ve
    //if someString > someString2

    //String copy
    //strcpy(someString, someString2); wont work for normal strings
    char charArray[20];
    someString.copy(charArray, someString.length(), 0);
    cout<<charArray<<endl;

    //String substring
    cout<<someString.substr(2,3)<<endl;
    return 0;
}