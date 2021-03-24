#include <iostream>
#include <string>
#include "EventExport.cpp"

using namespace std;

int main(){
    int number_events;
    int choice;
    cout<<"Enter the number of events :"<<endl;
    cin>>number_events;

    Event events[number_events];

    for(int i = 0; i < number_events; i++){
        string name;
        string organiser;
        string type;
        string details;
        int attendeeCount;
        double projectedExpenses;

        cout <<"Enter the details of event "<<i+1<<endl;
        cout<<"Name :\n";
        cin.ignore();
        getline(cin, name);

        cout<<"Detail :\n";
        getline(cin, details);

        cout<<"Type :\n";
        getline(cin, type);

        cout<<"Organiser :\n";
        getline(cin, organiser);

        cout<<"Attendees Count :\n";
        cin>>attendeeCount;

        cout<<"Projected Expenses :\n";
        cin>>projectedExpenses;

        events[i] = Event(name, details, type, organiser, attendeeCount, projectedExpenses);
    }

    EventExport exporter;
    cout<<"1. Export all the event details in CSV format\n";
    cout<<"2. Export name and organiser of the given event type\n";
    cin>>choice;

    if(choice == 1){
        exporter.exportCSVFormat(events, number_events);
    }
    else if(choice == 2){
        string type;
        cout<<"Enter the type\n";
        cin.ignore();
        getline(cin, type);
        exporter.exportNameOrganiserInfo(events, number_events,type);
    }
    else{
        cout<<"Invalid Choice\n";
    }
    return 0;
}