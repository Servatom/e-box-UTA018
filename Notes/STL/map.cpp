#include <iostream>
#include <map>

using namespace std;

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
    m1.insert(pair<char, int>(100,12));
    m1.insert(pair<int, int>(100, 12)); //ignored as the key is duplicate
    //default is ascending
    m1[5] = 16;

    //For descending
    //map<<int, int, greater <int> > m1;
    print(m1);

    m1.erase(m1.begin(), m1.find(3)); //no error returned if element does not exist
    m1.erase(100);
    cout<<"Whats left"<<endl;
    print(m1);
    //Whats left over

    return 0;

}