#include <iostream>

using namespace std;

class OverloadOthers{
    public:
        int x;
        int someArray[10];
        OverloadOthers(int x){
            this->x = x;
            for(int i = 0; i < 10; i++){
                someArray[i] = x + i;
            }
        }
        OverloadOthers(){}

        int operator[](int i){
            return someArray[i];
        }

        OverloadOthers operator()(int i){
            OverloadOthers newObj(i);
            *this = newObj;
            return *this;
        }

        OverloadOthers *operator->(){
            return this;
        }
};

int main(){
    OverloadOthers obj(12);
    cout<<obj[3]<<endl;

    obj(19);
    cout<<obj[3]<<endl;

    obj->x = 20;
    cout<<obj.x<<" "<<obj->x;
    return 0;
}