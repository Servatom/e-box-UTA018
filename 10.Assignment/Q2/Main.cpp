#include <iostream>
#include "HPVISACard.cpp"
#include <sstream>
using namespace std;
int main() {
    int choice;
    string type;
    double amount;
      cout<<"Menu"<<endl;
      cout<<"1.VISA Card"<<endl;
      cout<<"2.HPVISA Card"<<endl;
      cout<<"Enter the choice"<<endl;
      cin>>choice;
      switch(choice){
          case 1:{
              int rewardpercentage;
              cout<<"Enter the transaction type"<<endl;
              cin>>type;
              cout<<"Enter the transaction amount"<<endl;
              cin>>amount;
              cout<<"Enter the reward points"<<endl;
              cin>>rewardpercentage;
              VISACard v(type,amount,rewardpercentage);
              v.computeRewardPoints();
              break;
          }
          case 2:{
              cout<<"Enter the transaction type"<<endl;
              cin>>type;
              cout<<"Enter the transaction amount"<<endl;
              cin>>amount;
              HPVISACard h(type,amount);
              h.computeRewardPoints();
              break;
          }
          default:{
              cout<<"Invalid input"<<endl;
          }
      }
   

    return 0;
}