#include<iostream>
using namespace std;
class Item{
    private:
    string name;
    double cost;
    public:
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return this->name;
    }
    void setCost(double cost){
        this->cost=cost;
    }
    double getCost(){
        return this->cost;
    }
    bool operator >=(Item i){
        return cost>=i.cost;
    }
};
