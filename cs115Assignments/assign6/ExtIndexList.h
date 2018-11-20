/******************************************************
file name:ExtIndexList.h
student name: Okpala Chidiebere
student number:200356606
file purpose: used to define the class "extIndexList"
and prototypes of function it needs
 ****************************************************/

#ifndef ExtIndexList_h   //used to avoid double definition of the class
#define ExtIndexList_h
#include<iostream>    //defines the input and output

using namespace std;

template<class T, int maxSize>
  class extIndexList:public indexList<T, maxSize>
{
 public:
  extIndexList();  //class constructor
  bool linSearch(T);  //a function to search for a number
  void selSort();  //arranges the employees names in acending order(function overrided
  extIndexList concatArray(const extIndexList&)const;  //a function that returns two list combined together
};
#endif
#include "ExtIndexList.cpp"
