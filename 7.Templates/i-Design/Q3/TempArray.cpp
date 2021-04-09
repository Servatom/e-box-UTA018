#include<iostream>
using namespace std;

template <class T>
class Array {
    T *a;
    int size;
    
    public:
        
        Array(T arr[],int size) {
            this->size=size;
            a=new T[size];
            for(int i=0;i<size;i++){
                a[i]=arr[i];
            }
        }
        
        void sorting() {
            for(int i=0;i<size;i++){
                int index=-1;
                T min=a[i];
                for(int j=i;j<size;j++){
                    if(min>a[j]){
                        index=j;
                        min=a[j];
                    }
                }
                if(index!=-1){
                    T temp=a[i];
                    a[i]=a[index];
                    a[index]=temp;
                }
            }
            cout<<"Sorted array"<<endl;
            for(int i=0;i<size;i++){
                cout<<a[i]<<endl;
            }
        }
        
        void search(T &search) {
            bool found=false;
            for(int i=0;i<size;i++){
                if(a[i]==search){
                    cout<<"Element found at position "<<i+1<<endl;
                    found=true;
                }
            }
            if(!found){
                cout<<"Element not found"<<endl;
            }
        }
};
