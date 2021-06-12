#include <iostream>
#include <set>

using namespace std;

void print(set<int> s1){
    set<int>::iterator it;

    for(it = s1.begin(); it != s1.end(); it++){
        cout<<' ' <<*it<<endl;
    }
}

void print(set<int, greater<int> > s1){
    set<int>::iterator it;

    for(it = s1.begin(); it != s1.end(); it++){
        cout<<' ' <<*it<<endl;
    }
}
int main(){
    set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(5);
    s1.insert(4);
    s1.insert(4);

    //using .insert we can add elements to the set
    print(s1);
    
    //As we can see. Each element is unique and distinct

    set<int, greater<int> > s2;
    s2.insert(10);//Inserting elements
    s2.insert(20);
    s2.insert(5);
    s2.insert(10);
    s2.insert(999);
    s2.insert(888);

    cout<<"Output 1: ======="<<endl;
    print(s2);

    //iterator can also be set<int, greater<int> >::iterator it; no effect in ordering. the set when created must have that

    cout<<"ERASING STUFF"<<endl;
    cout<<"Initial"<<endl;
    print(s1);

    s1.erase(5); //Erases element 5
    
    cout<<"final"<<endl;
    print(s1);

    //to erase everything from certain element
    cout<<"initial"<<endl;
    print(s2);

    cout<<"final"<<endl;
    s2.erase(s2.begin(), s2.find(10)); //Everything "BEFORE" the element 10
    print(s2);

    cout<<"Output 2: =============="<<endl;
    //s2.erase(s2.end(), s1.find(10)); //Everything "AFTER" the element 10
    //s2.erase(s2.begin(), s1.find(102323232)); //Element does not exist so segmentation fault

    //Creating filled sets
    set<int> newSet(s2.begin(), s2.end()); //Everything of s2 is here
    print(newSet);
    cout<<"Output 3: ================"<<endl;
    int hello[] = {1,2,34,4};
    set<int> anotherSet(hello, hello+4); //Stuff from the hello array but will get ordered
    print(anotherSet);

    return 0;
}