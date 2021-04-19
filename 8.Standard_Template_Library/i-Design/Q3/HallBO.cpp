#include<iostream>
#include "Hall.cpp"
#include<list>
#include<stdio.h>
using namespace std;
class HallBO{
        public:
        Hall h;
        bool contains(list <Hall> halls, string hallName){
            for(auto it=halls.begin();it!=halls.end();it++){
                if(hallName==it->getName()) return true;
            }
            return false;
        }
        void display(list<Hall> halls){
            printf("%-25s%-25s%-25s%-25s\n","Hall Name","Contact Number","Cost","Owner");
            for(auto it=halls.begin();it!=halls.end();it++){
                printf("%-25s%-25d%-25.2lf%-25s\n",(it->getName()).c_str(),it->getContactNumber(),it->getCostPerDay(),(it->getOwnerName()).c_str());
            }
        }
};
