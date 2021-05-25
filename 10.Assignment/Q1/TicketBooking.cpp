#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class TicketBooking{
    private:
        string name;
        string walletNumber;
        string creditCard;
        string ccv;
        double amount;

    public:
        void makePayment(double amounts){
            setAmount(amounts);
            cout<<"Amount Rs."<<fixed<<setprecision(2)<<amounts<<" paid in cash"<<endl;
        }
        
        void makePayment(string walletNumbers, double amounts){
            setAmount(amounts);
            setWallet(walletNumbers);
            cout<<"Amount Rs."<<fixed<<setprecision(2)<<amounts<<" paid using wallet number "<<walletNumber<<endl;
        }

        void makePayment(string creditCards, string ccvs, string names, double amounts){
            setCreditCard(creditCards);
            setCCV(ccvs);
            setName(names);
            setAmount(amounts);

            cout<<"Amount Rs."<<fixed<<setprecision(2)<<amounts<<" paid using credit card "<<creditCards<<endl;
        }

        //Setters
        void setAmount(double amount){
            this->amount = amount;
        }

        void setWallet(string walletNumber){
            this->walletNumber = walletNumber;
        }

        void setCreditCard(string creditCard){
            this->creditCard = creditCard;
        }

        void setCCV(string ccv){
            this->ccv = ccv;
        }

        void setName(string name){
            this->name = name;
        }
};