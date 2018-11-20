#include<iostream>
#include "Selsort.h"
using namespace std;

int findIndexOfMin(const int x[],int startIndex,int endIndex)
{
  int minIndex;
  int i;
  if((startIndex<0)||(startIndex>endIndex))
    {
      cout<<"Error in subarray bonds"<<endl;
      return -1;
    }
  minIndex=startIndex;
  for(i=startIndex+1;i<=endIndex;i++)
    {
      if(x[i]<x[minIndex])
	{
	  minIndex=i;
	}
    }
  return minIndex;
}
void exchange(int& a1,int& a2)
{
  int temp;
  temp=a1;
  a1=a2;
  a2=temp;
}

