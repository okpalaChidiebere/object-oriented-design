/******************************************************
file name: ExtIndexList.cpp
student name: Okpala Chidiebere
student number:200356606
file purpose: used define the prototypes of the functions declared in ExtIndexList.h
 ****************************************************/
#ifndef ExtIndexList_cpp   //used to avoid double definition of the class
#define ExtIndexList_cpp
#include "ExtIndexList.h"


//declaring the function as a prototype
template<class T, int maxSize>
extIndexList<T, maxSize>::extIndexList()
{
  //do private date in the class to work on. only the inherited protected data used
}

template<class T,int maxSize>
bool extIndexList<T,maxSize>::linSearch(T target)
{
for(int i=0;i<size;i++)    //a for-loop to access the list
  {
    if(elements[i]==target)
      return true;  //assertion: the number was found
  }
 return false;//assertion: the number was not found
}

//declaring the function as a prototype
template<class T, int maxSize>
void extIndexList<T, maxSize>::selSort()  // a function with two parameters
{
  //local datas
  int search_index, search_max;
   T temp;

   for (int current_index = 0; current_index < size; current_index++) //a for-loop to access the list
   {
      search_max = current_index;

      // Find index of largest element in unsorted section of elements
      for(search_index = current_index + 1; search_index < size; search_index++)
	 if(elements[search_max] > elements[search_index])
	    search_max = search_index;

      // Exchange items at position search_max and current_index
      if (search_max > current_index)
      {
	 temp = elements[search_max];
	 elements[search_max] = elements[current_index];
	 elements[current_index] = temp;
      }
   }
}
 
template<class T,int maxSize>
extIndexList<T,maxSize> extIndexList<T,maxSize>::concatArray(const extIndexList<T,maxSize> & L)const
{
  extIndexList result;
  int i;
  result.size=size+L.size;  //initlalizing the size of the result array
  for(i=0;i<size;i++)//a for-loop to access the list
    {
      result.elements[i]=elements[i]; //puts the first list in tha result array
    }
  for(int j=0;j<L.size;j++) //a for-loop to access the list
    {
      result.elements[i]=L.elements[j];  //puts the second list in tha result array
      i++;
    }
  

  return result;
}
#endif
