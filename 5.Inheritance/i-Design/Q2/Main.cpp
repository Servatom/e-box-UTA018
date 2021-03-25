#include <iostream>
using namespace std;
#include "EBook.cpp"

int main(void)
{
    string diskType,name,author,publication,paperType;
    int size,price,numOfPages;
    int ch;
    cout<<"Enter the type of book"<<endl<<"1.PrintedBook"<<endl<<"2.EBook\n";
    cin>>ch;
    cin.ignore();
    cout<<"Enter the book name"<<endl;
    getline(cin,name);
    cout<<"Enter the author name\n";
    getline(cin,author);
    cout<<"Enter the price:"<<endl;
    cin>>price;
    cout<<"Enter the publication name:"<<endl;
    cin>>publication;
    switch(ch){
        case 1:
            {
            cout<<"Enter the number of pages of the book"<<endl;
            cin>>numOfPages;
            cout<<"Enter the paper type of the book"<<endl;
            cin>>paperType;
            PrintedBook pb(name,author,price,publication,numOfPages,paperType);
            pb.displayDetails();
            }
            break;
        case 2:
            {
            cout<<"Enter the disk type of the book"<<endl;
            cin>>diskType;
            cout<<"Enter the size of the disk"<<endl;
            cin>>size;
            EBook eb(name,author,price,publication,diskType,size);
            eb.displayDetails();
            }
            break;
    }
    //fill your code	
    
    return 0;
}
