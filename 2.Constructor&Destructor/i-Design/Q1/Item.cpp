#include <string>
#include <iostream>

using namespace std;

class Item{
    private:
        string itemID;
        string itemName;
        string itemType;
        string itemVendor;

    public:
        string getItemId(){
            return itemID;
        }

        string getItemName(){
            return itemName;
        }

        string getItemVendor(){
            return itemVendor;
        }

        string getItemType(){
            return itemType;
        }

        void setItemId(string id){
            itemID = id;
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

        Item(){};
        Item(string id, string name, string type, string vendor){
            setItemId(id);
            setItemName(name);
            setItemType(type);
            setitemVendor(vendor);
        }

        void display(){
            cout<<"Item details"<<endl;
            cout<<"Item id: "<<getItemId()<<endl;
            cout<<"Item name: "<<getItemName()<<endl;
            cout<<"Item type: "<<getItemType()<<endl;
            cout<<"Item vendor: "<<getItemVendor()<<endl;
        }
};