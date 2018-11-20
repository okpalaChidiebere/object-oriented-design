/*************************************************************
file name: Matrix.h
name: Okpala Chidiebere Collins
student number:200356606
file purpose: to declare the prototypes of functions used in the program
********************************************************************/
#ifndef Matrix_h  //to avoid multiple definition of the class
#define Matrix_h
#include<iostream>
#include<iomanip>
 //including input and output library

using namespace std;
extern int useRow; //used to store the number of row to be used
extern int useCol;//used to store the number of column to be used

//global data
const signed int R_SIZE=10; //the maximun number of row the program can run
const signed int C_SIZE=10;//the maximun number of column the program can run

class array
{
 private:
  int arrayMatrix[R_SIZE][C_SIZE]; //local data to store the array used

 public:
  array(); //default constructor

  //other member functions needed
  array add(const array&)const;  //used to add teo array
  array power(int);  //use to make each index to the power of any given number
  void readArray();  //used to get the input array from the user
  void printArray()const; //used to print an array to the screen

  //friend operators
  friend bool operator ==(const array&,const array&); //an overloaded operator
  friend int powerMultiply(int,int); //used to calculate power multiplication

};
#endif
