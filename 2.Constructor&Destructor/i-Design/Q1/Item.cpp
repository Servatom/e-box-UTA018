#include <iostream>
#include <string>

using namespace std;

class Item{
    private:
        string itemId;
        string itemName;
        string itemType;
        string itemVendor;

    public:
        string getItemId(){
            return this->itemId;
        }
        string getItemType(){
            return itemType;
        }

        string getItemName(){
            return this->itemName;
        }

        string getItemVendor(){
            return this->itemVendor;
        }

        void setItemId(string id){
            itemId = id;
        }

        void setItemName(string name){
            itemName = name;
        }

        void setItemType(string type){
            itemType = type;
        }

        void setitemVendor(string vendor){
            itemVendor = vendor;
        }



        //Constructors
        Item(){
            itemType="Electricals";
            itemVendor="Arun electricals";
        }

        Item(string itemId, string itemName, string itemType, string itemVendor){
            this->itemId = itemId;
            this->itemName = itemName;
            this->itemType = itemType;
            this->itemVendor = itemVendor;
        }

        void display(){
            cout<<"Item details"<<endl;
            cout<<"Item id: "<<itemId<<endl;
            cout<<"Item name: "<<itemName<<endl;
            cout<<"Item type: "<<itemType<<endl;
            cout<<"Item vendor: "<<itemVendor<<endl;
        }
};
