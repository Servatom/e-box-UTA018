#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream in ("File1.txt");
    ofstream out("File2.txt");

    char c;
    while(in.get(c)){
	    out.put(c);
    }
    return 0;
}