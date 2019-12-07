#include <iostream>

using namespace std;

const int MATRIX_SIZE = 6;

void printMatrix(int a[MATRIX_SIZE][MATRIX_SIZE])
{
  for(int i=0;i<MATRIX_SIZE;i++)
    {
        for(int j=0;j<MATRIX_SIZE;j++)
        {
        if(a[i][j]<10)
            cout<<a[i][j]<<"   ";

        else
            cout<<a[i][j]<<"  ";


        }
    cout<<endl;
    }
}
int main()
{
    int totalLevel = MATRIX_SIZE;
    int a[MATRIX_SIZE][MATRIX_SIZE];
    int count=0;
    for(int i=0;i<MATRIX_SIZE;i++)
    {
        for(int j=0;j<MATRIX_SIZE;j++)
        {
        a[i][j]=count++;
        }
    }

    cout<<"--------original---------"<<endl;
    printMatrix(a);
    cout<<"--------transpose--------"<<endl;
    int last = MATRIX_SIZE-1; //last=2
    int level=0;
    while(level<totalLevel)
    {
        for(int i=0;i<MATRIX_SIZE-level;++i)
        {
            swap(a[level][level],a[level][last-i]);
            swap(a[level][last-i],a[last-i][level]);
            swap(a[level][level],a[last-i][level]);
        }
    ++level;
    }
    printMatrix(a);
}
