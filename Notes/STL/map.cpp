#include <iostream>
#include <map>

using namespace std;

void printForEach(map<int, int> m1){
    for(auto s: m1){
        cout<<s.first<<" "<<s.second<<endl; //S is the object of the "PAIR" of the m1
        //use g++ Vector.cpp -std=c++11 for this
    }
}

void print(map<int, int> m1){
    map<int, int>::iterator it;
    for(it = m1.begin(); it != m1.end(); it++){
        cout<<' ' <<it->first<<"\t"<<it->second;
        cout<<endl;
    }
}
int main(){
    map<int, int> m1;

    //Format
    //m1.insert(pair<type, type>(key,value));

    m1.insert(pair<int, int>(1,10));
    m1.insert(pair<int, int>(2,1232));
    m1.insert(pair<int, int>(3,11));
    m1.insert(pair<int, int>(100,12));
    m1.insert(pair<int, int>(100, 12)); //ignored as the key is duplicate
    //default is ascending
    m1[5] = 16;

    //For descending
    //map<<int, int, greater <int> > m1;
    print(m1);

    m1.erase(m1.begin(), m1.find(3)); //no error returned if element does not exist
    //Everything is erased before 3
    m1.erase(100);
    cout<<"Whats left"<<endl;
    print(m1);

    //Print the value of a specific key
    map<int, int>::iterator finder = m1.find(5);
    cout<<"This is the value of 5: "<<finder->second<<endl;
    

    //map<int, char> m{{1, 'a'}, {3, 'b'}, {5, 'c'}, {7, 'd'}};
    //For compiling above use: g++ -std=c++11 map.cpp

    return 0;
}