#include<iostream>
#include<vector>
#include "Matrix.cpp"
using namespace std;
int main()
{
    Matrix<int> a,b,c;
    cout<<"Enter matrix a:"<<endl;
    a.readMatrix();
    cout<<"Enter matrix b:"<<endl;
    b.readMatrix();
    cout<<"Matrix a is:"<<endl;
    a.printMatrix();
    cout<<"Matrix b is:"<<endl;
    b.printMatrix();
    cout<<"Result of a+b:"<<endl;
    c.sum(a,b);
    cout<<"Result of a-b:"<<endl;
    c.difference(a,b);
    cout<<"Result of a*b:"<<endl;
    c.multiplication(a,b);
    return 0;
}