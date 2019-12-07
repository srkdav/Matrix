#include <iostream>

using namespace std;
const int MATRIX_Size =4;

void printMatrix(int m[MATRIX_Size][MATRIX_Size])
{
for(int i=0;i<MATRIX_Size;i++)
{

    for(int j=0;j<MATRIX_Size;j++)
    {
        cout<<m[i][j]<<" ";
    }
    cout<<endl;
}


}
int main()
{
int m[MATRIX_Size][MATRIX_Size];
int count=0;
for(int i=0;i<MATRIX_Size;i++)
{

    for(int j=0;j<MATRIX_Size;j++)
    {
        m[i][j] = count;
        count++;
    }
}

cout<<"--------origin-------------"<<endl;
printMatrix(m);
cout<<"--------rotate-------------"<<endl;
for(int i=0;i<MATRIX_Size-1;i++)
{
    swap(m[0][i],m[i][MATRIX_Size-1]);
    swap(m[0][i],m[MATRIX_Size-1][MATRIX_Size-1-i]);
    swap(m[0][i],m[MATRIX_Size-1-i][0]);
}

printMatrix(m);
}
