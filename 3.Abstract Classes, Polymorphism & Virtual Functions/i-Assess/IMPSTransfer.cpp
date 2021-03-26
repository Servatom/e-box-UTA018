#include <iostream>
#include <string>
#include "FundTransfer.h"
using namespace std;
class IMPSTransfer : public FundTransfer{
    public :
    bool transfer(double tA){
        double sc=0.02*tA;
        tA+=sc;
        if(tA<=getBalance()){
            return true;
        }else{
            return false;
        }
    }
};