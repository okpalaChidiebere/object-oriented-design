/**********************************************
student name: Okpala Chidiebere Collins
student number:200356606
file nmae: Calendar.h(header file)
file algorithm:
-define a class type called date
-decleared my data private
-decleared needed function for the program public
Note: the 'toString' function returns only the date and month in string version
- the function 'getyear' is used to print the year to the user
****************************************************/
#ifndef Calendar_h  //used to avoid compiling the .h file twice at once 
#define Calendar_h //defines the file again if correction is made in the file
#include<iostream>  //used for defining inputs and outputs throughout the program
using namespace std;

class Date  //declearing the datatype date
{
  //declaring the data private not to be accessed directly by the driver
 private:
  int month, day, year;  //stores the day, month, and year entered
 public:
  //constructors
  Date();  //initializes the data variables in the program to any value given in the implemtation file
  Date(int,int,int);  //used to overload the value given by the default constructor

  //functions needed in the program
  void nextDate();  //used to determine the next date in the program
  string toString();  //converts the integer date to string version in the program 

  //getter
  int getYear()const; //used to print out  the date in the program
 
};
#endif //class definition ends
