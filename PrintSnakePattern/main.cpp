#include <iostream>

using namespace std;

const int MATRIX_SIZE = 2;

void printMatrix(int a[MATRIX_SIZE][MATRIX_SIZE])
{
      for(int i=0;i<MATRIX_SIZE;i++)
    {
        for(int j=0;j<MATRIX_SIZE;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}
int main()
{
    int count=0;
    int a[MATRIX_SIZE][MATRIX_SIZE];
    for(int i=0;i<MATRIX_SIZE;i++)
    {
        for(int j=0;j<MATRIX_SIZE;j++)
        {
            a[i][j]=count++;
        }
    }

    cout<<"---------original------";
    cout<<endl;
    printMatrix(a);

    cout<<"---------snake------";
    cout<<endl;
    int n= 0,i=0;
    for(int i=0;i<MATRIX_SIZE;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<MATRIX_SIZE;j++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else
        {
            for(int j=MATRIX_SIZE-1;j>=0;j--)
            {
                cout<<a[i][j]<<" ";
            }
        }

    }
}


