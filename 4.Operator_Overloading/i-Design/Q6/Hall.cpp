#include <iostream>

using namespace std;

class Hall{
    public:
        int* arr;
        int size;
        Hall(int size){
            this->size=size;
            arr=new int[size];
        }
        int operator [](int a){
            if(a<size){
                return *(arr+a);
            }
            else{
                cout<<"Hall "<<a<<" does not exist"<<endl;
                return 0;
            }
        } 
};

