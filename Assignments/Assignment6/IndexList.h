/******************************************************
file name:IndexList.h
student name: Okpala Chidiebere
student number:200356606
file purpose: used to define the class "IndexList"
and prototypes of function it needs
 ****************************************************/
#ifndef IndexList_h   //used to avoid double definition of the class
#define IndexList_h
#include<iostream>    //defines the input and output

using namespace std;

template<class T, int maxSize>
class indexList
{
 protected:
  T elements[maxSize];  //use to create a list of the employee's information
  int size;  //stores the size needed to be used during run-time

 public:
  indexList();  //constructor
  void selSort();  //arranges the employees names in acending order
  bool append(const T&);  //used to get the information of each employee
  void display(ostream&)const;  //used to print the information of each employee

};
#endif
#include "IndexList.cpp"
