#include <iostream>
#include<string.h>
#include<set>


using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of usernames to be added:\n";
    cin>>n;
    if(n<0)cout<<"Invalid number"<<endl;
    else{
        set<string> names;
        for(int i=0;i<n;i++){
            cout<<"Enter the name of user "<<i+1<<endl;
            cout<<"Enter the name:"<<endl;
            string name;
            cin>>name;
            names.insert(name);
            
        }
        cout<<"Size of the set is:"<<names.size()<<endl;
    }
    return 0;
}
