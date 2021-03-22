#include <cstring>
#include<iostream>
#include<string>
#include "ItemType.cpp"

class ItemTypeBO
    {
	public:
  ItemType createItemType(string itemName,double itemDeposit,double costPerDay)
	{
	    ItemType item_type;
            item_type.setCostPerDay(costPerDay);
            item_type.setItemDeposit(itemDeposit);
            item_type.setItemName(itemName);

            return item_type;
	}
	
	int searchItemTypeByName(ItemType *itemtype,int n,string searchName)
	{
	    int i;
        for(i=0;i<n;i++)
        {
            if(itemtype[i].getItemName()==searchName)
            return 1;
            
            else return 0;
        }
	}
};
