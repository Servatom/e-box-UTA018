#include<iostream>

using namespace std;

template<typename T>
void Swap(T&a,T&b){
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
    int n;
    cout<<"Menu"<<endl;
    cout<<"1.Swap integer values"<<endl;
    cout<<"2.Swap double values"<<endl;
    cout<<"Enter your choice:"<<endl;
    cin>>n;
    if(n==1){
        int a,b;
        cout<<"Enter the value of x:"<<endl;
        cin>>a;
        cout<<"Enter the value of y:"<<endl;
        cin>>b;
        Swap(a,b);
        cout<<"After swap:"<<endl;
        cout<<"x="<<a<<endl;
        cout<<"y="<<b<<endl;
    }
    else if(n==2){
        double a,b;
        cout<<"Enter the value of x:"<<endl;
        cin>>a;
        cout<<"Enter the value of y:"<<endl;
        cin>>b;
        Swap(a,b);
        cout<<"After swap:"<<endl;
        cout<<"x="<<a<<endl;
        cout<<"y="<<b<<endl;
    }
}
