#include <iostream>

using namespace std;

class Item{
    private:
        string name;
        string type;
        double cost;
    public:
        void setName(string name){
            this->name = name;
        }

        void setType(string type){
            this->type = type;
        }

        void setCost(double cost){
            this->cost = cost;
        }

        string getName(){
            return this->name;
        }

        string getType(){
            return this->type;
        }

        double getCost(){
            return this->cost;
        }
};