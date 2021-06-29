#include <iostream>
#include <list>

using namespace std;

void print(list<int> list1){
    list<int>::iterator it; //This is the iterator
    for(it = list1.begin(); it != list1.end(); it++){
        cout<<"l1 "<<*it<<endl;
    }
}
int main(){
    int h;
    list<int> list1;
    list<int> list2;

    for(int i = 0; i < 5; ++i){
        list1.push_back(i); //Adding the element at the back
        list2.push_front(i); //Adding the element to the list in the front
    }
    print(list1);
    
    list1.pop_back(); //pop element from the back 
    cout<<"====="<<endl;
    print(list1);
    
    list1.pop_front(); //pop element from the front
    cout<<"====="<<endl;
    print(list1);
    
    list1.reverse(); //Reverse list
    cout<<"====="<<endl;
    print(list1);

    list1.sort(); //sorts the list
    cout<<"====="<<endl;
    print(list1);

    list1.push_front(999);//Added to the front of the list
    cout<<"====="<<endl;
    print(list1);

    list1.push_back(999);//Added to the front of the list
    cout<<"====="<<endl;
    print(list1);
    

    //Declaration of a list with some stuff
    list<int> list3(list1.begin(), list1.end()); //Now same as list1

    int hello[] = {1,2,34,4};
    list<int> someList(hello, hello+4);

    //But changes in list1 wont replicate changes to list3


    //For each loop => for each element in container someList (here)
    for(auto s: someList){
        cout<<s<<endl;
    }

    return 0;
}