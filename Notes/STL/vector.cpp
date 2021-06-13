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
template <typename dataType>
void vectorPrinter(vector<dataType> list){
    vector<int>::iterator it;
    for(it = list.begin(); it != list.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> list1;
    
    for(int i = 0; i < 10; i++){
        list1.push_back(i);
    }

    vector<int>::iterator it;

    vectorPrinter(list1);
    list1.pop_back();
    vectorPrinter(list1);
    //list1.pop_front(); wont work
    //list1.push_front(12); Doesnt work. Since the entire array needs to change the address of each element. 
    //Use list if you want to do so

    //Inserting and deleting elements in vector
    vector<int>::iterator newIt = list1.begin();
    newIt += 1;
    list1.insert(newIt, 12);
    vectorPrinter(list1);

    //For character vector
    vector<char> vectorChar;
    vector<char>v(10);
    vector<char>cv(5,'x');

    return 0;
}