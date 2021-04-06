#include <iostream>
#include <fstream>
#include<string.h>
#include<sstream>
#include<list>
#include "EventType.cpp"
using namespace std;
class Event
{
 private:
 string eventName;
 EventType type;
 string eventDetail;
 string eventOrganiser;
 public:
 Event(){}
 Event(string eventName, EventType type, string evedet, string eveorg)
 {
 this->eventName = eventName;
 this->type = type;
 this->eventDetail = evedet;
 this->eventOrganiser = eveorg;
 }
};
