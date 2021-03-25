#include <iostream>
#include <string>
#include "Event.cpp"

using namespace std;

class EventExport{
    public:
        void exportCSVFormat(Event *e, int num){
            for(int i = 0; i < num; i++){
                Event obj = e[i];
                cout<<e[i].name<<", "<<e[i].details<<", "<<e[i].type<<", "<<e[i].organiser<<", "<<e[i].attendeesCount<<", "<<e[i].projectedExpenses<<endl;
            }
        }

        void exportNameOrganiserInfo(Event *e, int num, string type){
            for(int i = 0; i < num; i++){
                if(e[i].getType() == type){
                    cout<<e[i].name<<", "<<e[i].organiser<<endl;
                }
            }
        }
};