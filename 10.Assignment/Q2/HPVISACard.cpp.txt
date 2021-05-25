#include <iostream>
#include "VISACard.cpp"
using namespace std;
class HPVISACard :public VISACard
{
    public:
        void computeRewardPoints() {
            double rewardpoints;
           if(type=="Fuel"){
               rewardpoints = (amount * 0.03)+ 10;
           }
           else{
               rewardpoints = amount * (0.03);
           }
            cout<<"Card details:"<<endl;
           cout<<"Type: "<<type<<endl;
           cout<<"Amount: "<<amount<<endl;
        cout<<"Reward point: "<<setprecision(1)<<fixed<<rewardpoints<<endl;
        } 

        HPVISACard(string type1, double amount1) : VISACard(type1, amount1) {
                           
        }
};