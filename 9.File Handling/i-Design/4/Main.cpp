#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

int main (){
    string line;
    string filename;
    
    cout<<"Enter the file name :";
    cin>>filename;
    
    ifstream ifile;
    ifile.open(filename);
    
    int count = 0, i;
    int lin = 0;
    
    while(getline(ifile, line)){
        for (i = 0; line[i] != '\0';i++){
            if (line[i] == ' '){
                count++;
            }
        }
    lin++;
    }
    
    cout<<endl<<"Number of words in file : "<<count + lin;
    cout<<endl<<"Numbers of lines in the file : "<< lin;
    return 0;
}
