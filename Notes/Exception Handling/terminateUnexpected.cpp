#include <iostream>

using namespace std;

void myThandler(){
    cout<<"Inside new terminate handler\n";
    abort();
}

int main(){
    set_terminate(myThandler);

    try{
        cout<<"Inside try"<<endl;
        throw 100;
    }

    catch (double i){
        cout<<"I caught something"<<endl;
    }

    //But since an integer was thrown so terminate will be called
    return 0;
}