#include <iostream>
#include <string>
#include "Hall.cpp"
using namespace std;

int main(){
    int n;
    string choice;
    
    cout<<"Enter total number of halls"<<endl;
    cin>>n;
    
    Hall halls(n);
    
    for(int i=0;i<halls.size;i++){
            int rating;
            cout<<"Post your rating for hall "<<i<<endl;
            cin>>rating;
            *(halls.arr+i)=rating;
    }
    do{
        int val;
        cout<<"Enter the hall index to find its rating"<<endl;
        cin>>n;
        val=halls[n];
        cout<<"Rating for hall "<<n<<" is "<<val<<endl;
        cout<<"Do you want to continue(yes/no):"<<endl;
        cin>>choice;
    }
    while(choice=="yes");
    return 0;
}

