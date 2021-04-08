#include <iostream>
#include <stdlib.h>
#include "Exhibition.cpp"
#include "StageEvent.cpp"
using namespace std;
int main(){
    int choice;
    Exhibition e;
    StageEvent s;
    int i=0;
    string delimiter = ",";
    size_t pos = 0;
    string token;
    string exhibitionDetail, stageEventDetail;
    string* arr = new string[25];
    cout<<"Choose Event type\n";
    cout<<"1.Exhibition\n";
    cout<<"2.Stage Event\n";
    cin>>choice;
    switch(choice){
        case 1:{
            cout<<"Enter the details of Exhibition in CSV format\n";
            cin>>exhibitionDetail;
            exhibitionDetail+=",";

            while((pos = exhibitionDetail.find(delimiter)) != string::npos){
                token = exhibitionDetail.substr(0,pos);
                arr[i] = token;
                exhibitionDetail.erase(0, pos + delimiter.length());
                i++;
            }
            e.setName(arr[0]);
            e.setDetail(arr[1]);
            e.setType(arr[2]);
            e.setOrganiser(arr[3]);
            e.setNoOfStalls(stoi(arr[4]));
            
            e.display();
            break;
        }
        case 2:{
            cout<<"Enter the details of Stage Event in CSV Format\n";
            cin>>stageEventDetail;
            stageEventDetail+=",";

            while((pos = stageEventDetail.find(delimiter)) != string::npos){
                token = stageEventDetail.substr(0,pos);
                arr[i] = token;
                stageEventDetail.erase(0, pos + delimiter.length());
                i++;
            }
            
            s.setName(arr[0]);
            s.setDetail(arr[1]);
            s.setType(arr[2]);
            s.setOrganiser(arr[3]);
            s.setNoOfSeats(stoi(arr[4]));
            
            s.display();
            break;
        }
        default:
            cout<<"Invalid choice\n";
            break;
    }
    return 0;
}
