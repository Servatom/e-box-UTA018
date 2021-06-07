#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    //For output file
    //opening a file
    ofstream out("myFile.txt");

    if(!out.is_open()){
        cout<<"Error in opening file"<<endl;

        //ABORT
        return 1;
    }

    out<<"Raghav is a human"<<endl;
    out<<"Yash is a human"<<endl;
    out<<"Rupanshi is human"<<endl;

    //File input
    ifstream in("myFile.txt");

    if (!in){
        //error in opening file
        cout<<"Error in opening file"<<endl;
        //Abort
        return 1;
    }

    //Option 1
    /*
    string sentence;
    in >> sentence;
    cout<<sentence<<endl;

    in >> sentence;
    cout<<sentence<<endl;

    in >> sentence;
    cout<<sentence<<endl;
    */
   
    char c;
    while(!in.eof()){
	    in.get(c);
	    cout << c;
    }
    in.close();
    out.close();

    return 0;
}