#include <iostream>

using namespace std;

class Location{
    private:
        int latitude;
        int longitude;

    public:
        Location(){}
        Location(int longitude, int latitude){
            this->longitude = longitude;
            this->latitude = latitude;
        }

        void show(){
            cout<<this->longitude<<endl;
            cout<<this->latitude<<endl;
        }
        friend Location operator+(Location op1, Location op2);
        friend Location operator++(Location &obj);
        friend Location operator++(Location &obj, int x);

        Location operator=(Location op2);
};

//+ is overloaded using the friend function
//(), =, [] or -> operators cant be overloaded using the friend function
Location operator+(Location op1, Location op2){
    Location temp;
    temp.longitude = op1.longitude + op2.longitude;
    temp.latitude = op1.latitude + op2.latitude;
    return temp;
}

//++ is overloaded using the friend function
Location operator++(Location &obj){ //Pre increment
    ++obj.longitude;
    return obj;
}

Location operator++(Location &obj, int x){ //Post increment
    obj.longitude++;
    return obj;
}
//Can be done similarly for decrement operator

//Overload assignment for Location
Location Location::operator=(Location op2){
    this->longitude = op2.longitude;
    this->latitude = op2.latitude;
    return *this;
}
int main(){
    Location obj1(10,20), obj2(30,40);
    obj1 = obj1 + obj2;
    obj1.show();
    return 0;
}