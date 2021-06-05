#include <iostream>

using namespace std;

template <class x> void swapArgs(X &a, X &b){
    X temp;
    temp = a;
    a = b;
    b = temp;
}

void swapArgs(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Inside swapargs int specialization."<<endl;
} //explicit overloading generic functions

template <class x, class>
//can also be written as template <typename t1, typename t2>

int main(){
    int number1 = 12;
    int number2 = 13;

    swapArgs(number1, number2);
    //As we can see above we have made a function which is not data type specific. Any data type will work


    return 0;
}