#include <iostream>
#include <string>
#include "Item.cpp"

using namespace std;

int main(){
    int choice;

    cout<<"Menu:"<<endl;
    cout<<"1.Electronics"<<endl;
    cout<<"2.Others"<<endl;

    cout<<"Enter your choice:\n";
    cin>>choice;

    
    switch (choice)
    {
    case 1:{
        cout<<"Enter details of the item"<<endl;
        string name;
        string id;
        string type = "Electricals";
        string vendor = "Arun electricals";

        cout<<"Enter item id:"<<endl;
        cin>>id;
        cin.ignore();

        cout<<"Enter the item name:"<<endl;
        getline(cin, name);

        Item item(id, name, type, vendor);

        item.display();
        break;
    }

    case 2:{
        cout<<"Enter details of the item"<<endl;
        string name;
        string id;
        string type;
        string vendor;

        cout<<"Enter item id:\n";
        cin>>id;
        cin.ignore();
        
        cout<<"Enter the item name:\n";
        getline(cin, name);

        cout<<"Enter the item type:\n";
        getline(cin, type);

        cout<<"Enter the item vendor:\n";
        getline(cin, vendor);

        Item item(id, name, type, vendor);

        item.display();
        break;      
    }
    default:
        cout<<"Invalid choice"<<endl;
        break;
    }

    return 0;
}