#include <iostream>
#include <exception>
#include "InvalidDateException.cpp"
using namespace std;
string* splitString(string str){
    string* arr = new string[25];
    int i=0;
    string delimiter = "/";
    size_t pos = 0;
    string token;
    while ((pos = str.find(delimiter)) != string::npos) {
        token = str.substr(0, pos);
        arr[i]=token;
        str.erase(0, pos + delimiter.length());
        i++;
    }
    arr[i]=str;
    return arr;
}
int main(){
    int num;
    cout<<"Enter the number of events"<<endl;
    cin>>num;
    int countq1=0;
    int countq2=0;
    int countq3=0;
    int countq4=0;
    
    for(int i=1;i<=num;i++)
    {
        int flag=0;
        string s;
        cout<<"Enter the date of event "<<i<<" in dd/mm/yyyy format"<<endl;
        cin>>s;
        int day,month,year;
        day=stoi(s.substr(0,2));
        month=stoi(s.substr(3,2));
        year=stoi(s.substr(6,4));
        if(day>=1 and day<=31 and month>=1 and month<=12 and year==2017) //date is valid
        {
            flag=1;
            if(month>=1 and month<=3)
             countq1++;
            else if(month>=4 and month<=6)
             countq2++;
            else if(month>=7 and month<=9)
             countq3++;
            else
             countq4++;
            
        }
        else // flag=0
        {
            while(flag!=1){
                try
                {
                    throw InvalidDateException();
                }
                catch(InvalidDateException obj)
                {
                    cout<<obj.what()<<endl;
                }
                cout<<"Enter the date of event "<<i<<" in dd/mm/yyyy format"<<endl;
                cin>>s;
                day=stoi(s.substr(0,2));
                month=stoi(s.substr(3,2));
                year=stoi(s.substr(6,4));
                if(day>=1 and day<=31 and month>=1 and month<=12 and year==2017) //date is valid
                    {
                        flag=1;
                        if(month>=1 and month<=3)
                         countq1++;
                        else if(month>=4 and month<=6)
                         countq2++;
                        else if(month>=7 and month<=9)
                         countq3++;
                        else
                         countq4++;
                        
                    }
                else
                 continue;
                
                
                
            }
        }
    }
    cout<<"Number of events in first quarter: "<<countq1<<endl;
    cout<<"Number of events in second quarter: "<<countq2<<endl;
    cout<<"Number of events in third quarter: "<<countq3<<endl;
    cout<<"Number of events in fourth quarter: "<<countq4<<endl;
    
}


