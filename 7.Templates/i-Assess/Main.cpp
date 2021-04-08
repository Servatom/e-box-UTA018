#include<iostream>
#include<cstdlib>
using std::cin;
using std::cout;
using std::endl;
using std::string;

template<class T>
class node
{
    public:
    T data;
    node<T> *link;
};
template<class T>
class list
{
    private:
    node<T> *first;
    public:
    list()
    {
        first=NULL;
    }
    void deletion()
    {
        if(first!=NULL){
            node<T> *temp;
            node<T> *lastSec;
            T data;
            cout<<"Enter the element to delete :"<<endl;
            cin>>data;
            temp=first;
            if(first->data==data){
                first=first->link;
                delete temp;
                return;
            }
            while(temp!=NULL){
                lastSec=temp;
                temp=temp->link;
                if(temp->data==data){
                    break;
                }
            }
            
            lastSec->link=temp->link;
            delete temp;
            
        }else{
            cout<<"List is empty."<<endl;
        }
    }
    void insertion()
    {
        T data;
        cout<<"Enter data Of New Node:"<<endl;
        cin>>data;
        node<T> *temp=new node<T>;
        temp->data=data;
        temp->link=NULL;
        if(first==NULL){
            first=temp;
            return;
        }
        node<T> *iter=first;
        while (iter->link!=NULL){
            iter=iter->link;
        }
        iter->link=temp;
    }
    void display()
    {
        if(first==NULL){
            cout<<"List is empty."<<endl;
            return ;
        }
        node<T> *iter=first;
        while(iter!=NULL){
            cout<<iter->data<<"   ";
            iter=iter->link;
        }
        cout<<endl;
    }
};
int main()
{
    int n;
    list<string>li;
    do
    {
    cout<<"1.Insertion\n2.Deletion\n3.Print List\n4.Exit\n"<<endl;
    cout<<"Enter your option : "<<endl;
    cin>>n;
    if(n==1)
    {
        li.insertion();
    }
    else if(n==2)
    {
        li.deletion();
    }
    else if(n==3)
    {
        li.display();
    }
    else if(n==4)
    exit(0);
    }while(n<=4);
    return 0;
}
