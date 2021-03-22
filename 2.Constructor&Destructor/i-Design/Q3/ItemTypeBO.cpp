#include <iostream>
#include <string>
#include "ItemType.cpp"

using namespace std;

class ItemTypeBO{
    public:
        ItemType createItem(string itemName, double itemDeposit, double costPerDay){
            ItemType item_type;
            item_type.setCostPerDay(costPerDay);
            item_type.setItemDeposit(itemDeposit);
            item_type.setItemName(itemName);

            return item_type;
        }

        int searchItemTypeByName(ItemType *itemType, int n, string searchName){
            for(int i = 0; i < n; i++, itemType++){
                if(itemType->getItemName() == searchName){
                    return 1;
                }
                else{
                    continue;
                }
            }

            return 0;
        }
};