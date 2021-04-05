#include <iostream>
#include <fstream>
#include<string.h>
#include<sstream>
#include<list>
using namespace std;
class EventType
{
 private:
 string type;
 public:
 EventType(){
 }
 EventType(string type){
 this->type = type;
 }
 string getType(){
 return type;
 }
};
