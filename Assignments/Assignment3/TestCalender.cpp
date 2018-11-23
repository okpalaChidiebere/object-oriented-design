/**********************************************
student name: Okpala Chidiebere Collins
student number:200356606
file nmae: TestCalendar.cpp(Driver)
file algorithm:
-declare an instance of the class Date
-prompts the user to enter the date
-gets the date from the user
-apply the function toString on the object Date declared as an instance which convert the date to string
-prints the string returned to the screen
-apply the function nextDate on the object Date declared as an instance which produce the next date
-converts it to string again
-prints it out
Note:- a do while loop is used do to the program must run atleast once
-the getter is used to print the date
************************************************/
#include "Calendar.h"//including the user defined file which is the .h file

int main() //main function starts
{
  //local variables
  int m,y,d; //stores the  month, day and year enterd
  char dash1,dash2; //stores the dashes entered
  string stringDate,stringDate2; //stores t5he initial date and the next date
  char letter;  //stores the letter entered by the user to continue or not
 
do
  {//the user runs the program 
    cout<<endl; 
    cout<<"Enter a new date using the format mm-dd-yyyy: ";//prompts the user to enter the date
    cin>>m; //gets the month
    cin>>dash1;//gets the first dash
    cin>>d; //gets the day
    cin>>dash2; //gets the second dash
    cin>>y;  //gets the year
    while(d<1||d>31||m<1||m>12) //checks if a correct date is entered
      {//assertion: an incorrect date is entered
	cout<<"Incorrect!"<<endl; //tells the user the date was not correct
	cout<<"Enter a new date using the format mm-dd-yyyy: ";  //prompts the user to enter another date
  cin>>m; //gets the month
  cin>>dash1;//gets the first dash
  cin>>d;//gets the day
  cin>>dash2;//gets the second dash
  cin>>y; //gets the year
    } 
    Date date1(m,d,y); //calls the constructor to overload the default initialization donr by the default constructor
    stringDate=date1.toString(); //convetrs the date to string and assigns the returned string the the variable
    cout<<"The string version of the date is: "; //tells the user the string version of the date
    cout<<stringDate<<", "<<date1.getYear()<<endl; //prints out the string date
    date1.nextDate();  //gets the next date
    stringDate2=date1.toString();  //convetrs the date to string and assigns the returned string the the variable
  cout<<"The next Date in string version is: "; //tells the user the string version of the date
  cout<<stringDate2<<", "<<date1.getYear()<<endl;//prints out the next string date
  cout<<"Do you want to continue [Y/N]: "; //prompts the user if he or she wants to continue
  cin>>letter;  //gets the letter
  }while(letter=='Y'||letter=='y'); 
//assertion: the user quits the program
 cout<<"Good bye!"<<endl; //prints to the screen 

 return 0;
}//end main



  
