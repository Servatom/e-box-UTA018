#include <iostream>
#include <string>

using namespace std;

class ItemType{
    private:
        string itemName;
        double itemDeposit;
        double costPerDay;
    
    public:
        string getItemName(){
            return itemName;
        }

        double getItemDeposit(){
            return itemDeposit;
        }

        double getCostPerDay(){
            return costPerDay;
        }

        void setItemName(string itemName){
            this->itemName = itemName;
        }

        void setItemDeposit(double itemDeposit){
            this->itemDeposit = itemDeposit;
        }

        void setCostPerDay(double costperday){
            this->costPerDay = costPerDay;
        }
};