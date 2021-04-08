#include <iostream>
#include "Item.cpp"
#include <string>
#include <iomanip>

using namespace std;

int main(){
    string name, type;
    double cost;
    double costPerDay;
    int n;

    Item it;
    cout<<"Enter item name:"<<endl;
    cin>>name;
    it.setName(name);

    cout<<"Enter item type:"<<endl;
    cin>>type;
    it.setType(type);
    cout<<"Enter item cost:"<<endl;
    cin>>cost;
    it.setCost(cost);

    cout<<"Enter number of days:"<<endl;
    cin>>n;

    try{

        if(n == 0){
            throw "Arithmetic Exception:Number of days 0 is invalid";
        }
        else{
            cout<<"Item name:"<<it.getName()<<endl;
            cout<<"Item type:"<<it.getType()<<endl;
            costPerDay = it.getCost()/n;
            cout<<"Item cost per day:"<<fixed<<setprecision(2)<<costPerDay<<endl;
        }
    }

    catch(const char* msg){
        cout<<msg<<endl;
    }

    return 0;
}