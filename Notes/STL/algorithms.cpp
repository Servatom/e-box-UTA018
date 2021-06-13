//There is an STL called algorithms to do certain operations
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename dataType>
void vectorPrinter(vector<dataType> list){
    vector<int>::iterator it;
    for(it = list.begin(); it != list.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v1;
    v1.push_back(25);
    v1.push_back(12);
    v1.push_back(14);
    v1.push_back(9);
    v1.push_back(10);
    v1.push_back(10);

    vectorPrinter(v1);
    //Now a simple vector has been created

    //Lets use some operations in algorithms
    sort(v1.begin(), v1.end()); //Sorting the vector
    vectorPrinter(v1); //Sorted vector

    cout<<*max_element(v1.begin(), v1.end())<<endl; //Max element

    reverse(v1.begin(), v1.end()); //Reverse vector
    vectorPrinter(v1); 

    random_shuffle(v1.begin(), v1.end()); //Random shuffling
    vectorPrinter(v1);
    
    cout<<count(v1.begin(), v1.end(), 10)<<endl; //This gives the number of time 10 is there in the vector
    return 0;
}
