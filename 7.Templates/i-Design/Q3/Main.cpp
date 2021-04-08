#include <iostream>
#include "TempArray.cpp"
using namespace std;

int main() {
    int choice;
    int n;
    cout<<"Menu"<<endl;
    cout<<"1.Sorting integer array"<<endl;
    cout<<"2.Searching array of double values"<<endl;
    cout<<"Enter your choice:"<<endl;
    cin>>choice;
    switch(choice){
        case 1:{
            cout<<"Enter size of array:"<<endl;
            cin>>n;
            int a[n];
            cout<<"Enter the array elements:"<<endl;
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            Array<int> t(a,n);
            t.sorting();
            
        }break;
        case 2:{
            cout<<"Enter size of array:"<<endl;
            cin>>n;
            double a[n];
            double val;
            cout<<"Enter the array elements:"<<endl;
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            Array<double> t(a,n);
            cout<<"Enter the element to search:"<<endl;
            cin>>val;
            t.search(val);
        }break;
        default:
            cout<<"Invalid number"<<endl;
    }
    return 0;
}
