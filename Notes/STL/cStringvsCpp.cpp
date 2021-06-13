/*
    This file shows the difference between the strings in C-style pointers and string in c++
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    //String const in C++
    const char *name = "Raghav Sharma";

    //If no const then a warning will come saying that a constant string type cant be of type char*

    //Modification not allowed
    //name[0] = 'n'; => Will give segmentation fault

    //Char[] modification is possible

    char raghav[] = "Raghav";


    raghav[0] = 'n';
    cout<<raghav<<endl;

    //char * is more faster than the string data type in C++. It has more overhead
    return 0;
}
