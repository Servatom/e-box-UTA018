#include <iostream>
#include<string>
#include<iomanip>
#include "NEFTTransfer.cpp"
#include "IMPSTransfer.cpp"
#include "RTGSTransfer.cpp"
using namespace std;
int main(){
    string accNo;
    double bal,tA;
    int choice;
    cout<<"Enter your account number"<<endl;
    cin>>accNo;
    cout<<"Enter the balance of the account"<<endl;
    cin>>bal;
    cout<<"Enter the type of transfer to be made"<<endl<<endl;
    cout<<"1.NEFT"<<endl;
    cout<<"2.IMPS"<<endl;
    cout<<"3.RTGS"<<endl;
    cin>>choice;
    switch(choice){
        case 1:{
            NEFTTransfer nt;
            string time;
            nt.setAccountNumber(accNo);
            nt.setBalance(bal);
            cout<<"Enter the amount to be transferred"<<endl;
            cin>>tA;
            cout<<"Enter the current time in the format HH:MM AM/PM"<<endl;
            cin>>time;
            if(nt.validate(tA)){
                if(nt.transfer(tA)&&nt.timeCheck(time)){
                    cout<<"Transfer occurred successfully"<<endl;
                    nt.setBalance(bal-tA);
                    cout<<"Remaining balance is "<<fixed<<setprecision(2)<<nt.getBalance()<<endl;
                }else {
                    cout<<"Transfer could not be made"<<endl;
                }
            }else{
                cout<<"Account number or transfer amount seems to be wrong"<<endl;
            }
            
        }break;
        case 2:{
            IMPSTransfer it;
            it.setAccountNumber(accNo);
            it.setBalance(bal);
            cout<<"Enter the amount to be transferred"<<endl;
            cin>>tA;
            if(it.validate(tA)){
                if(it.transfer(tA)){
                    cout<<"Transfer occurred successfully"<<endl;
                    it.setBalance(bal-tA);
                    cout<<"Remaining balance is "<<fixed<<setprecision(2)<<it.getBalance()<<endl;
                }else {
                    cout<<"Transfer could not be made"<<endl;
                }
            }else{
                cout<<"Account number or transfer amount seems to be wrong"<<endl;
            }
        }break;
        case 3:{
            RTGSTransfer rt;
            rt.setAccountNumber(accNo);
            rt.setBalance(bal);
            cout<<"Enter the amount to be transferred"<<endl;
            cin>>tA;
            if(rt.validate(tA)){
                if(rt.transfer(tA)){
                    cout<<"Transfer occurred successfully"<<endl;
                    rt.setBalance(bal-tA);
                    cout<<"Remaining balance is "<<fixed<<setprecision(2)<<rt.getBalance()<<endl;
                }else {
                    cout<<"Transfer could not be made"<<endl;
                }
            }else{
                cout<<"Account number or transfer amount seems to be wrong"<<endl;
            }
        }break;
    }
    return 0;
}


