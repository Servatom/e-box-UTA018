#include <iostream>

using namespace std;

template <class T>
class someClass{
    private:
        T a;
    public:
        someClass(T a){
            this->a = a;
        }
        void display(){
            cout<<a<<endl;
        }
};

//Double arguments
template <class T1, class T2>
class someNewClass{
    private:
        T1 a;
        T2 b;
    public:
        someNewClass(T1 a, T2 b){
            this->a = a;
            this->b = b;
        }

        void sumDedo(){
            cout<<T2(a + b)<<endl;
        }
};

//Default data type in templates
template<class T5=int>
class anotherNewClass{
    private:
        T5 variable;
    public:
        anotherNewClass(T5 variable){
            this->variable = variable;
        }

        void incrementDisplay(){
            cout<<++variable<<endl;
        }
};
int main(){
    someClass<int> someObj(12);
    someObj.display();

    someNewClass<int, float> someNewObj(12, 12.5);
    someNewObj.sumDedo();

    /*
        As we see, the classes are now not restricited to use members of a certain data type
        The caller now is at the liberty to decide the data type of the members or what a function must return
    */

   anotherNewClass<> someNewThing(13);
   someNewThing.incrementDisplay();
   //Since we didnt mention the data type a default one was chosen which we had mentioned
    return 0;
}