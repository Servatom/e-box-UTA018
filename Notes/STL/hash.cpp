#include <iostream>
#include <functional>

using namespace std;

/*
    Hashing map is a technique of encrypting a data type to get a key which is an integer
    But in hash you can only encrypt your data to create a key but it will not give you the value of the key
*/
int main(){
    hash<float> h;

    cout<<h(4.5)<<endl; //This has now encrypted the 4.5 float number. An integer will be printed.

    hash<string> h2;
    hash<char> h3;

    string helloWorld = "This is my secret message";
    char secretChar = 'R';
    cout<<"Value: "<<helloWorld<<endl<<"Key: "<<h2(helloWorld)<<endl;
    cout<<"Value: "<<secretChar<<endl<<"Key: "<<h3(secretChar)<<endl;
    //as you can see the helloWorld string just encrypted and secretChar character was encrypted

    return 0;
}