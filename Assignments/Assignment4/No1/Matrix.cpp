/*************************************************************
file name: Matrix.h
name: Okpala Chidiebere Collins
student number:200356606
file purpose: to define the functions prototypes in the .h file
********************************************************************/
#include "Matrix.h"  //including user defined file .h 

int useRow; //the maximun number of row the program can run
int useCol; //the maximun number of column the program can run


array::array()  //function definition for the constructor
{ //uses two for loop to go through the rows and column
  for(int i=0;i<R_SIZE;i++)
    for(int j=0;j<C_SIZE;j++)
      arrayMatrix[i][j]=0; //initializes all the index to zero
}



void array::readArray()  //a function definition to get the input from the user
{//uses two for loop to go through the rows and column
  for(int i=0;i<useRow;i++)
    for(int j=0;j<useCol;j++)
      cin>>arrayMatrix[i][j]; //initializes all the index to according to loop

}

//function definition for the add array
array array::add(const array& a)const 
{
  array temp; //local data

  //uses two for loop to go through the rows and column
  for(int i=0;i<useRow;i++)
    for(int j=0;j<useCol;j++)
      temp.arrayMatrix[i][j]=arrayMatrix[i][j]+a.arrayMatrix[i][j]; //sums the two array and initializes it to th

  return temp; //returns the temporary array
}

int powerMultiply(int a,int b) //function definition
{
  int  tempNum=1; //local data
  while(b!=0)  //condition to continue the multiplication
    {
      tempNum*=a; //multiplies it by itself
      b--;  //reduces the count
    }
  return tempNum;  //returns the temporary number
}

array array::power(int p)
{
  array temp; //local data
  int eachIndex_power; //local data

  //uses two for loop to go through the rows and column
  for(int i=0;i<useRow;i++)
    {
      for(int j=0;j<useCol;j++)
	{
	  eachIndex_power=powerMultiply(arrayMatrix[i][j],p); //multiplies the index to the power number
	  temp.arrayMatrix[i][j]=eachIndex_power; //assigns the result to the variable
	}
    }
  return temp; //returns the temp array after calulation done
}

void array::printArray()const
{//uses two for loop to go through the rows and column
  for(int i=0;i<useRow;i++)
    {
      for(int j=0;j<useCol;j++)
	{
	  cout<<setw(3)<<left<<arrayMatrix[i][j];  //prints the given index to the screen
	}
      cout<<endl;  //goes to the next line
    }
}

bool operator ==(const array& a,const array& b)
{//uses two for loop to go through the rows and column
  for(int i=0;i<useRow;i++)
    {
      for(int j=0;j<useCol;j++)
	{
	  if(a.arrayMatrix[i][j]!=b.arrayMatrix[i][j])//condition to check the both arrays if equal
	    {//assertion both arrays are not equal
	      return false;
	    }
	}
    }
  return true;  //assertion: both arrays are equal
}


 
