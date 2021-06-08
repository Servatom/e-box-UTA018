/*
    An interesting question
*/
#include <iostream>

using namespace std;

template <typename T>
void func(const T &x){
    static int count = 0;
    cout<<"x = "<<x<<" count = "<<count<<endl;
    count++;
}
int main(){
    func(100);
    func(1.25);
    func("Raghav");
    func('a');
    func(99);
    return 0;
}

//What did you notice?
/*
    the output was:
    x = 100 count = 0
    x = 1.25 count = 0
    x = Raghav count = 0
    x = a count = 0
    x = 99 count = 1

    But considering out knowledge in static storage classes we expect that count should be incrementing ater each call
    
    The difference here is the arguments we have passed changed after each call.
    So when we called the function with an integer parameter the count variable of the func(const int &x) was incremented
    similarly when we called the function like this: func(1.25) we called the func(const float&x) and the count variable of this function ws incremented

    Hence count came out to be 0

    In the end when we called the func(const int &x) function we noticed that the initial increments was stored
    */