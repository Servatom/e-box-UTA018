#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    ifstream fin("orders.txt");
    while(!fin.eof())
    {
       int num;
       fin>>num;
       v.push_back(num);
    }
    int oddsum=0;
    int evensum=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]%2==0)
         evensum+=v[i];
        else
         oddsum+=v[i];
         
    }
    int choice;
    cout<<"Enter the choice"<<endl;
    cout<<"1.Odd"<<endl;
    cout<<"2.Even"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:{
            cout<<"The total of all numbers is "<<oddsum<<endl;
            break;
        }
        case 2:{
            cout<<"The total of all numbers is "<<evensum<<endl;
            break;
        }
    }
    return 0;
}