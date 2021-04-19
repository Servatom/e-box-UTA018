#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<string> names;
    int n;
    cout<<"Enter the total number of names:\n";
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        cout<<"Enter name "<<i+1<<endl;
        cin>>name;
        names.push_back(name);
    }
    cout<<"The list of names are:\n";
    for(string name:names){
        cout<<name<<endl;
    }
    return 0;
}
