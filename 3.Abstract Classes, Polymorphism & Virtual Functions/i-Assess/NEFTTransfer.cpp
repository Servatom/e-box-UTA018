#include <iostream>
#include <string>
#include<cstring>
#include<cstdlib>
#include "FundTransfer.h"
using namespace std;
class NEFTTransfer : public FundTransfer{
    public :
    bool transfer(double tA){
        if(getBalance()>=tA)return true;
        else return false;
    }
    bool timeCheck(string tT){
        string hr=tT.substr(0,2);
        int hours=atoi(hr.c_str());
        string ap=tT.substr(tT.length()-2,tT.length());
        if(hours>6&&ap=="PM"){
            return false;
        }else{
            if(hours<9&&ap=="AM")return false;
            else return true;
        }
    }
};