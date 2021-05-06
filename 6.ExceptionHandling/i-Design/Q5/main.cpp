#include <iostream>
#include <stdio.h>
#include <exception>
using namespace std;
void available(int n,int arr[]){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool check(int a,int arr[]){
    if (arr[a-1]==1){
        return true;
    }
}

    
int main()
{
int n;
cout<<"Enter the total number of seats available:"<<endl;
cin>>n;
int arr1[n];
for(int i=0;i<n;i++){
    if(i<3){
	 arr1[i]=1;	
	}
	if(i>=3){
		arr1[i]=0;
	}
   
}
cout<<"Seat Availability"<<endl;
available(n,arr1);
string res="y";
while(true){
    cout<<"Do you want to book a seat(y/n):"<<endl;
    cin>>res;
    if(res=="n"){
    	break;
	}
	int sno;
    cout<<"Enter the seat number:"<<endl;
    cin>>sno;
	try{
        if(sno>n){
            throw 'b';
        }
        else if(check(sno,arr1)){
            throw 1;
        }
        else{
            arr1[sno-1]=1;
            cout<<"Seat booked successfully"<<endl;
            
        }
    }
    catch(int a){
        cout<<"SeatNotAvailableException"<<endl;
        
    }
    catch(char b){
        cout<<"ArrayIndexOutOfBoundsException"<<endl;
    }
}
    

cout<<"Seat booking details"<<endl;
available(n,arr1);
return 0;
}
