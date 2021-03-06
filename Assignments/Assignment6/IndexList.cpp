/******************************************************
file name: IndexList.cpp
student name: Okpala Chidiebere
student number:200356606
file purpose: used define the prototypes of the functions declared in indexList.h
 ****************************************************/
#ifndef IndexList_cpp   //used to avoid double definition of the class
#define IndexList_cpp
#include "IndexList.h"

//declaring the function as a prototype
template<class T, int maxSize>
indexList<T, maxSize>::indexList()
{
  size=0;  //initializing the size to Zero
}

//declaring the function as a prototype
template<class T, int maxSize>
bool indexList<T, maxSize>::append(const T& items)
{
  bool result;
  //add item to the end of the list if list is not full
  if(size<maxSize)
    {//assertion:the array is not filled up
      elements[size]=items;
      size++;
      result=true;
    }
else
  {  //assertion:the array is filled up
    cerr<<"Array is filled _ can't append!"<<endl;
    result=false;
  }
 return result;
}

//declaring the function as a prototype
 template<class T,int maxSize>
   void indexList<T,maxSize>::display(ostream& outs)const
 {
   for(int i=0;i<size;i++)  //a for-loop to access the list
     outs<<elements[i]<<" ";  //prints the element with a space between
 }
#endif

