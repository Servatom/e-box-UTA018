#include <iostream>
#include <set>
#include<string>
using namespace std;
string* splitString(string str){
    string* arr = new string[25];
    int i=0;
    string delimiter = ",";
    size_t pos = 0;
    string token;
    while ((pos = str.find(delimiter)) != string::npos) {
        token = str.substr(0, pos);
        arr[i]=token;
        str.erase(0, pos + delimiter.length());
        i++;
    }
    arr[i]=str;
    return arr;
}
int main(){
    bool found=true;
    set<string> mail;
    string id;
    int n;
    cout<<"Enter the number of E-Mail IDs\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>id;
        mail.insert(id);
    }
    cout<<"Enter the E-Mail IDs to be searched"<<endl;
    cin>>id;
    int len=1;
    for(int i=0;i<id.length();i++){
        if(id[i] == ',')len++;
    }
    string *ids=splitString(id);
    for(int i=0;i<len;i++){
        if(mail.find(ids[i])==mail.end()){
            found=false;
            break;
        }
    }
    if(found)cout<<"All the entered E-Mail IDs are existing in the set"<<endl;
    else cout<<"All the entered E-Mail IDs are not existing in the set"<<endl;
}






