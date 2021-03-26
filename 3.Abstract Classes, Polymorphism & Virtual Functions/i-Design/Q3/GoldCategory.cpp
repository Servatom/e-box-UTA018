#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Ticket.h"
using namespace std;
class GoldCategory :public Ticket
{
    
	double ticketCost = 150.0;
	public:	
	void calculateCost(int noOfTickets){
        cout<<"Total Booking cost for gold category is Rs."<<fixed<<setprecision(2)<<ticketCost*noOfTickets<<endl;
	}
};

