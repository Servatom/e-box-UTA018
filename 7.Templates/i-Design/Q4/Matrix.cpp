//fill your code here
#include<iostream>
#include<vector>
using namespace std;
const int ROWS = 2;
const int COLS = 2;
template<class T>
class Matrix
{
    public:
        T s[ROWS][COLS];
        Matrix(){};
        T readMatrix()
        {
            for(int i = 0; i < ROWS; i++)
            for(int j = 0; j < COLS; j++)
            cin >> this->s[i][j];
        }
        T printMatrix()
        {
            for(int i=0;i<ROWS;i++){
                for(int j=0;j<COLS;j++){
                    cout<<s[i][j]<< "   ";
                }
                cout<<endl;
            }
        }
        T sum(const Matrix <T> a,const Matrix <T> b)
        {
            Matrix<T> c;
            for(int i=0;i<ROWS;i++){
                for(int j=0;j<COLS;j++){
                    c.s[i][j]=a.s[i][j]+b.s[i][j];
                }
            }
            c.printMatrix();
            return 0;
        }
        T difference(const Matrix <T> a,const Matrix <T> b)
        {
            Matrix<T> c;
            for(int i=0;i<ROWS;i++){
                for(int j=0;j<COLS;j++){
                    c.s[i][j]=a.s[i][j]-b.s[i][j];
                }
            }
            c.printMatrix();
            return 0;
        }
        T multiplication(const Matrix <T> a,const Matrix <T> b)
        {
            Matrix<T> c;
            for(int i=0;i<ROWS;i++){
                for(int k=0;k<COLS;k++){
                    int sum=0;
                    for(int j=0;j<COLS;j++){
                        sum=sum+(a.s[i][j]*b.s[j][k]);
                    }
                    c.s[i][k]=sum;
                }
            }
            c.printMatrix();
            return 0;
        }
};
