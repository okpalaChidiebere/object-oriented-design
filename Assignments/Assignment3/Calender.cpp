/**********************************************
student name: Okpala Chidiebere Collins
student number:200356606
file nmae: Calendar.cpp(implimentation file)
file algorithm:
-all the function is being defined here
-all the functions here will belong to the class Date
*************************************************/
#include "Calendar.h"  //including the user defined file which is the .h file

Date::Date()  //default constructor definition
{
  day=01;  //initializes the day to 1 by default
  month=01; //initializes the month to 1 by default
  year=1900; //initializes the year to 1900 by default
}

Date::Date(int m,int d,int y)  //constructor definition which can be used in driver
{
  month=m;  //assigns the value stored in m when used in the driver to the private data month
  day=d; //assigns the value stored in d when used in the driver to the private data day
   year=y; //assigns the value stored in y when used in the driver to the private data year
}

string Date::toString()  //function definiton with no parameters
{
  //local variables  
  string stringDay;  //stores the corresponding string for day entered
  string stringMonth; //stores the corresponding string for month entered
  string stringDate; //used to store the corresponding string for month and day when combined
  //a string array used to store the days of the month. note: each day is has index of day-1
  string dayList[31]={" 1st"," 2nd"," 3rd"," 4th"," 5th"," 6th"," 7th"," 8th"," 9th"," 10th"," 11th"," 12th"," 13th"," 14th"," 15th"," 16th"," 17th"," 18th"," 19th"," 20th"," 21st"," 22nd"," 23rd"," 24th"," 25th"," 26th"," 27th"," 28th"," 29th"," 30th"," 31th"};
  //a string array used to store the months of the year. note: each day is has index of month-1
  string monthList[12]={"January","February" ,"March","April","May","June","July","August","September","October","November","December"};

  for(int j=0;j<12;j++)//a loop used to access all the index to check the corresponding index of month-1
    {
      if(month-1==j)
	{ //assertion: the index is found
	  stringMonth=monthList[j]; // assigns the corresponding month string to the variable stingMonth
	}
    }

 for(int i=0;i<31;i++)//a loop used to access all the index to check the corresponding index of day-1
   {
     if(day-1==i)
       { //assertion: the index is found
       stringDay=dayList[i]; // assigns the corresponding day string to the variable stingMonth
       }
   }
 stringDate=stringMonth+stringDay; //combines the month and day string and assigns it to to a string variable

 return stringDate;  //returns the string to main function
 
}
void Date::nextDate()  //function definition with no parameters
{ 
  if(day==31&&month==12) //an expression to check if its the its the last day of the year
    {
      day=1; //assigns 1 to the variable day
      month=1; //assigns one to the month
      year=year+1; //increases the year by one
    }
  else if(day==31) //an expression if its last day of the month
    {//assertion: its the last day of the month
    day=1; 
    month=month+1;//increases the month by one
    }
 else if(day==28&&month==2) //an expression to check the month of february if the nextday should be 1 0r 29 
   {
     if(year%4==0) //checks if its a leap year
       {//assertion: its a leap year
    day=1; //assigns 1 to the variable day
    month=month+1; //increases the month by one
      }
  else
    {//assertion: its not a leap year
      day=day+1;//increases the day by one
    }
   }
  else
    {//assertion its not the last day of the month
    day=day+1;//increases the day by one
    }
}


int Date::getYear() const //function definition
{
  return year;  //returns the year
}

