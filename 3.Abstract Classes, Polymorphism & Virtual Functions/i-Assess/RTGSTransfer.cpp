#include <iostream>
#include <string>
#include "FundTransfer.h"
using namespace std;
class RTGSTransfer : public FundTransfer{
    public :
    bool transfer(double tA){
        if(tA>10000)return true;
        else return false;
    }
};