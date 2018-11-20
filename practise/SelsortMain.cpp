#include<iostream>
#include<iomanip>
#include "Selsort.h"

using namespace std;

int main()
{
  int minSub;
  int items[]={55,34,56,76,5,10,25,34};
  for(int i=0;i<8-1;i++)
    {
      minSub=findIndexOfMin(items,8,8-1);
      exchange(items[minSub],items[i]);
    }
	cout<<"the array in ascending order is: ";
      for(int i=0;i<8;i++)
	{
	  cout<<setw(3)<<items[i];
	}
      return 0;
} 
