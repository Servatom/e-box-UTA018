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

        if(n <= 0){
            throw n;
        }
        else{
            cout<<"Item name:"<<it.getName()<<endl;
            cout<<"Item type:"<<it.getType()<<endl;
            costPerDay = it.getCost()/n;
            cout<<"Item cost per day:"<<fixed<<setprecision(2)<<costPerDay<<endl;
        }
    }

    catch(int n){
        cout<<"Arithmetic Exception:Number of days "<<n<<" is invalid"<<endl;
    }

    return 0;
}
