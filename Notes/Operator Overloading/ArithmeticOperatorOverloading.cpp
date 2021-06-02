#include <iostream>

using namespace std;

class PlusOverload{
    private:
        int number1;
    public:
        PlusOverload(){}
        PlusOverload(int number1){
            this->number1 = number1;
        }

        PlusOverload operator+(PlusOverload obj2){
            PlusOverload temp;
            temp.number1 = obj2.number1 + this->number1;
            return temp;
        }

        void showMe(){
            cout<<"I am this: "<<number1<<endl;
        }
};

class MinusOverload{
    private:
        int number1;
    public:
        MinusOverload(){}
        MinusOverload(int number1){
            this->number1 = number1;
        }

        MinusOverload operator-(MinusOverload obj2){
            MinusOverload temp;
            temp.number1 = this->number1 - obj2.number1;
            return temp;
        }

        void showMe(){
            cout<<"I am this: "<<number1<<endl;
        }
};


int main(){
    //+ operator overload
    PlusOverload obj1(12);
    PlusOverload obj2(13);
    PlusOverload obj3 = obj1 + obj2;
    obj3.showMe();

    //- operator overload
    MinusOverload obj4(12);
    MinusOverload obj5(13);
    MinusOverload obj6 = obj5 - obj4;
    obj6.showMe();

    //Similarly *, / can be overloaded
    return 0;
}