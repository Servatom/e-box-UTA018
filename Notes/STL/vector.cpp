#include <iostream>
#include <vector>

using namespace std;

//Difference between list and vectors:
/*
    list is not continuous vector is
    vector is implemented as an array
    vector of int = int array

    list is not array of integer
    But is a linked list

    Vector is faster than list
*/
int main(){
    vector<int> list1;
    
    for(int i = 0; i < 10; i++){
        list1.push_back(i);
    }

    vector<int>::iterator it;

    for(it = list1.begin(); it != list1.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    list1.pop_back();
    //list1.pop_front(); wont work
    //list1.push_front(12); Doesnt work. Since the entire array needs to change the address of each element. 
    //Use list if you want to do so
    return 0;
}