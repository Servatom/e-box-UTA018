#include <iostream>
#include <string>
#include "Item.cpp"

using namespace std;

int main(){
    int choice;
    char ch = 'y';
    cout<<"\nMenu:";
    cout<<"\n1.Electronics";
    cout<<"\n2.Others";
    cout<<"\nEnter your choice:\n";
    cin>>choice;
    switch (choice){
        case 1:
        {
            string name, id, type, vendor;
            type = "Electricals";
            vendor = "Arun electricals";
            cout<<"Enter details of the item"<<endl;

            cout<<"Enter item id:"<<endl;
            cin>>id;

            cout<<"Enter the item name:"<<endl;
            cin>>name;

            Item item(id, name, type, vendor);
            item.display();

            break;
        }

        case 2:
        {
            string name, id, type, vendor, t;
            cout<<"Enter details of the item"<<endl;
            cout<<"Enter item id:"<<endl;
            cin>>id;
            
            cout<<"Enter the item name:"<<endl; 
            cin>>name;

            cout<<"Enter the item type:"<<endl;
            cin>>type;

            cout<<"Enter the item vendor:\n";
            cin.ignore();
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