#include <iostream>
using namespace std;
class Distance
{
    private:
    int feet,inches;
    public:
    void setFeet(int feet)
    {
        this->feet=feet;
    }
    void setInches(int inches)
    {
        this->inches=inches;
    }
    int setFeet()
    {
        return this->feet;
    }
    int setInches()
    {
        return this->inches;
    }
    Distance operator+(const Distance& d) {
        Distance temp;
        temp.feet=feet+d.feet;
        temp.inches=inches+d.inches;
        int incrFeet=temp.inches/12;
        temp.inches%=12;
        temp.feet+=incrFeet;
        return temp;
    }
    void display()
    {
        cout<<"The sum of two Distance is"<<endl;
        cout<<"Feet:"<<feet<<endl;
        cout<<"Inches:"<<inches;
    }
}; 
