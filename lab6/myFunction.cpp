#include "myFunction.h"

void readArray(int a[][C_SIZE],int rows)
{
  for(int i=0;i<rows;i++)
    for(int j=0;j<C_SIZE;j++)
      cin>>a[i][j];
}

void sumArray(const int a[][C_SIZE],const int b[][C_SIZE], int c[][C_SIZE],int rows)
{
  int sum;

  for(int i=0;i<rows;i++)
    for(int j=0;j<C_SIZE;j++)
      c[i][j]=a[i][j]+b[i][j];
}

void printArray(const int a[][C_SIZE],int rows)
{
  for(int i=0;i<rows;i++)
    {
    for(int j=0;j<C_SIZE;j++)
      {
      cout<<a[i][j]<<" ";
      }
    cout<<endl;
    }
}

