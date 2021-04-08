#include<iostream>
#include<cstdlib>
using std::cin;
using std::cout;
using std::endl;
using std::string;
template<class T>

class Stack
{
    private:
    int top;
    T *arr;
    int maxsize;
    public:
    Stack(int s){
        maxsize=s;
        arr=new T[maxsize];
        top=-1;
    }
    void push(T val){
        cout<<"Inserting "<<val<<endl;
        top++;
        arr[top]=val;
    }
    T pop(){
        cout<<"Removing "<<arr[top]<<endl;
        top--;
        return arr[top+1];
    }
    void display(){
        for(int i=0;i<=top;i++){
            cout<<" "<<arr[i];
        }
        cout<<endl;
    }
    T peek(){
        return arr[top];
    }
    int size(){
        return top+1;
    }
    bool isEmpty(){
        return (top==-1);
    }
    bool isFull(){
        return (top==maxsize-1);
    }
};

int main()
{
    int s,n;
    string item;
    cin>>s;
    Stack<string>st(s);
    do
    {
    cout<<"1.Insertion"<<endl;
    cout<<"2.Deletion"<<endl;
    cout<<"3.Display Stack"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter your Choice:"<<endl<<endl;
    cin>>n;
    if(n==1)
    {
        cin.get();
        cout<<"Enter the element to insert : "<<endl;
        getline(cin,item);
        if(!st.isFull())
        {
        st.push(item);
        }
        else
        cout<<"Stack is full!"<<endl;
    }
    else if(n==2)
    {
        if(!st.isEmpty())
        { 
        st.pop();
        }
        else
        cout<<"Stack is empty!"<<endl;
    }
    else if(n==3)
    {
      if(!st.isEmpty())
        {
        cout<<"Stack elements are : ";
        st.display();
        }
        else
        cout<<"Stack is empty!"<<endl;
    }
    else if (n==4)
    {
        exit(0);
    }
    }while(n>=1&&n<5);
    return 0;
}
