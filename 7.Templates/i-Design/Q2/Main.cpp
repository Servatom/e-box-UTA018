#include <iostream>
#define array_size 5
using namespace std;
template<class T>

T SearchInArray(T x[], T element) {
    for(int i=0;i<5;i++){
        if(x[i]==element)return 1;
    }
    return 0;
}

int main() {
    int a[array_size];
    float af[array_size];
    int n;
    float nf;
    cout<<"Enter 5 integer numbers"<<endl;
    for(int i=0;i<5;i++){
        int temp;
        cin>>temp;
        a[i]=temp;
    }
    cout<<"Enter element to search: "<<endl;
    cin>>n;
    if(SearchInArray<int>(a,n)==1){
        cout<<"Element "<<n<<" is found"<<endl;
    }else{
        cout<<"Element "<<n<<" is not found"<<endl;
    }
    
    cout<<"Enter 5 float numbers"<<endl;
    for(int i=0;i<5;i++){
        float temp;
        cin>>temp;
        af[i]=temp;
    }
    cout<<"Enter element to search: "<<endl;
    cin>>nf;
    if(SearchInArray<float>(af,nf)==1){
        cout<<"Element "<<nf<<" is found"<<endl;
    }else{
        cout<<"Element "<<nf<<" is not found"<<endl;
    }
    return 0;
}
