#include <iostream>
#include <string>

using namespace std;

class Event{
    private:
        string name;
        string details;
        string type;
        string organiser;
        int attendeesCount;
        double projectedExpenses;
    
    public:
        Event(){}
        Event(string name, string details, string type, string organiser, int attendeesCount, double projectedExpenses){
            this->name = name;
            this->details = details;
            this->type = type;
            this->organiser = organiser;
            this->attendeesCount = attendeesCount;
            this->projectedExpenses = projectedExpenses;
        }

        void setName(string name){
            this->name = name;
        }

        void setDetail(string detail){
            this->details = details;
        }

        void setType(string type){
            this->type= type;
        }

        void setOrganiser(string organiser){
            this->organiser = organiser;
        }

        void setAttendeesCount(int attendeesCount){
            this->attendeesCount = attendeesCount;
        }

        void setProjectedExpenses(double projectedExpenses){
            this->projectedExpenses = projectedExpenses;
        }

        string getName(){
            return this->name;
        }

        string getDetail(){
            return this->details;
        }

        string getType(){
            return this->type;
        }
        string getOrganiser(){
            return this->organiser;
        }
        int getAttendeesCount(){
            return this->attendeesCount;
        }
        double getProjectedExpenses(){
            return projectedExpenses;
        }

        friend class EventExport;
};