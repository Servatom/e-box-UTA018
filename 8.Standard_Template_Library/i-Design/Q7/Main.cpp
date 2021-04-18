#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    vector<string> active;
    vector<string> exp;
    cout<<"Enter the number of active users:"<<endl;
    cin>>n;
    cout<<"Enter the active users name:"<<endl;
    for(int i=0;i<n;i++){
        string input;
        cin>>input;
        active.push_back(input);
    }
    cout<<"Enter the number of users whose account is going to expire:"<<endl;
    cin>>n;
    cout<<"Enter the users name:"<<endl;
    for(int i=0;i<n;i++){
        string input;
        cin>>input;
        exp.push_back(input);
    }
    vector<string> inter;
    sort(active.begin(),active.end());
    sort(exp.begin(),exp.end());
    set_intersection(active.begin(),active.end(),exp.begin(),exp.end(),back_inserter(inter));
    if(inter.size()==0){
        cout<<"No accounts of active users to be expired."<<endl;
    }else{
        cout<<"Active users whose account is going to expire:"<<endl;
        for(vector<string>::iterator iter=inter.begin();iter!=inter.end();iter++){
            cout<<*iter<<endl;
        }
    }
    //fill your code here.
    return 0;
}
