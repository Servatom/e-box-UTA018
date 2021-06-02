#include <iostream>

using namespace std;

void someErrorHandler(){
    try{
        throw "Some Error happened here";
    }
    catch(const char *error){
        cout<<"I caught some error inside the someErrorHandler func"<<endl;
        throw; //This rethrows the error out of the function
    }
}
int main(){
    try{
        someErrorHandler();
    }
    catch(const char *error){
        cout<<error<<endl;
    }
    return 0;
}